#!/usr/bin/python
#-------------------------------------------------------------------------
#
#-------------------------------------------------------------------------
# Import Section

import sys
import time
import datetime

#-------------------------------------------------------------------------
# This routine Writes a header file for C++ class
#-------------------------------------------------------------------------

def  WriteCHHFile(ClassName, ClassRoot):
    fileName         = ClassName + '.h'
    ClassNameCapital = ClassName
    DateToday        = datetime.date.today()

    print "Writing Header  File ==>> " + fileName
    outFileChh = open(fileName,'w')
    outFileChh.write('/**\n* Autogenerated Header File for ' + ClassName + '\n')
    outFileChh.write('* \\\\file ' + fileName + '\n')
    outFileChh.write('* \\\\author ' + 'G.Gavalian' + '\n')
    outFileChh.write('* \\\\date ' + DateToday.isoformat() + '\n')
    outFileChh.write('*/'+'\n')
    outFileChh.write('#ifndef ' + '__'+ClassNameCapital.upper() + '__\n')
    outFileChh.write('#define ' + '__'+ClassNameCapital.upper() + '__\n')
    outFileChh.write('#include <iostream>\n')
    outFileChh.write('#include <string>\n')
    outFileChh.write('#include <cmath>\n')
    outFileChh.write('#include <vector>\n')
    outFileChh.write('\n\nusing namespace std;\n')
    outFileChh.write('//! A Brief Description\n')
    outFileChh.write('/*\n * A detailed description\n */\n')
    outFileChh.write('class ' + ClassName + '  {\n')
    outFileChh.write('\nprivate:\n\npublic:\n\n')
    outFileChh.write('/** Default Constructor */\n')
    outFileChh.write( ClassName + '();\n')
    outFileChh.write('/** Default Destructor */\n')
    outFileChh.write( '~' + ClassName + '();\n')
    outFileChh.write('/** Copy Constructor if one is needed */\n')
    outFileChh.write('/*' + ClassName + '( const ' + ClassName + ' &obj); */ \n')
    outFileChh.write('\n/** An operator = if one is needed */\n')
    outFileChh.write('/* const ' + ClassName + ' &operator=(const ' + ClassName + ' &obj); */\n')
    outFileChh.write('\n\n};\n#endif\n')
    outFileChh.close()
#-------------------------------------------------------------------------
# End of WriteCHHFile routine
#-------------------------------------------------------------------------
# Write the Cpp file for the Class
#
def  WriteCPPFile(ClassName, ClassRoot):
    fileName         = ClassName + '.cc'
    ClassNameCapital = ClassName
    DateToday        = datetime.date.today()

    print "Writing Source  File ==>> " + fileName
    outFileCpp = open(fileName,'w')
    outFileCpp.write('/**\n* Autogenerated Source File for ' + ClassName + '\n')
    outFileCpp.write('* \\\\file ' + fileName + '\n')
    outFileCpp.write('* \\\\author ' + 'G.Gavalian' + '\n')
    outFileCpp.write('* \\\\date ' + DateToday.isoformat() + '\n')
    outFileCpp.write('*/'+'\n')
    outFileCpp.write('#include "' + ClassName + '.h"\n\n\n')
    outFileCpp.write( ClassName + '::' + ClassName + '()\n{\n}\n')
    outFileCpp.write('/* \n' + ClassName + '::' + ClassName + '(const ' + ClassName + ' &obj)\n{\n}\n*/\n')
    outFileCpp.write( ClassName + '::~' + ClassName + '()\n{\n}\n')
    outFileCpp.write('\n\n/* ' +  'const ' + ClassName + ' &' + ClassName + '::operator=(const ' + ClassName + ' &obj){} */\n')
    outFileCpp.close()
    
#-------------------------------------------------------------------------
# End of WriteCPPFile routine
#-------------------------------------------------------------------------
# Write Link Def file if one is needed

def  WriteLINKDEFFile(ClassName, ClassRoot):
    fileName         = ClassName + 'LinkDef.h'
    ClassNameCapital = ClassName
    DateToday        = datetime.date.today()
    print 'Writing LinkDef File ==>> ' + fileName
    outFileLink = open(fileName,'w')
    outFileLink.write('#ifdef __CINT__\n')
    outFileLink.write('#pragma link off all globals;\n')
    outFileLink.write('#pragma link off all classes;\n')
    outFileLink.write('#pragma link off all functions;\n')
    outFileLink.write('\n')
    outFileLink.write('#pragma link C++ class ' + ClassName + ';\n\n')
    outFileLink.write('#endif\n')
    outFileLink.close()
#-------------------------------------------------------------------------
# End of WriteLINKDEFFile routine
#-------------------------------------------------------------------------
    

if(len(sys.argv)<2):
    print "\n\tUsage: " + sys.argv[0] + " [Class Name]"
    sys.exit('\n Please Provide a C++ class name to generate')

#-------------------------------------------------------------------------
#-------------------------------------------------------------------------

WriteCHHFile(sys.argv[1],"1")
WriteCPPFile(sys.argv[1],"1")
WriteLINKDEFFile(sys.argv[1],"1")

