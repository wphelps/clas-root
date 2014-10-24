//
// File generated by /opt/local/libexec/root5/bin/rootcint at Wed Oct 22 10:29:59 2014

// Do NOT change. Changes will be lost next time file is generated
//

#define R__DICTIONARY_FILENAME srcdIrootdITEvioDataDescriptorDict
#include "RConfig.h" //rootcint 4834
#if !defined(R__ACCESS_IN_SYMBOL)
//Break the privacy of classes -- Disabled for the moment
#define private public
#define protected public
#endif

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;
#include "TEvioDataDescriptorDict.h"

#include "TClass.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"

// Direct notice to TROOT of the dictionary's loading.
namespace {
   static struct DictInit {
      DictInit() {
         ROOT::RegisterModule();
      }
   } __TheDictionaryInitializer;
}

// START OF SHADOWS

namespace ROOT {
   namespace Shadow {
   } // of namespace Shadow
} // of namespace ROOT
// END OF SHADOWS

namespace ROOT {
   void TEvioDataDescriptor_ShowMembers(void *obj, TMemberInspector &R__insp);
   static void *new_TEvioDataDescriptor(void *p = 0);
   static void *newArray_TEvioDataDescriptor(Long_t size, void *p);
   static void delete_TEvioDataDescriptor(void *p);
   static void deleteArray_TEvioDataDescriptor(void *p);
   static void destruct_TEvioDataDescriptor(void *p);
   static void streamer_TEvioDataDescriptor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEvioDataDescriptor*)
   {
      ::TEvioDataDescriptor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEvioDataDescriptor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TEvioDataDescriptor", ::TEvioDataDescriptor::Class_Version(), "./src/root/TEvioDataDescriptor.h", 25,
                  typeid(::TEvioDataDescriptor), DefineBehavior(ptr, ptr),
                  &::TEvioDataDescriptor::Dictionary, isa_proxy, 0,
                  sizeof(::TEvioDataDescriptor) );
      instance.SetNew(&new_TEvioDataDescriptor);
      instance.SetNewArray(&newArray_TEvioDataDescriptor);
      instance.SetDelete(&delete_TEvioDataDescriptor);
      instance.SetDeleteArray(&deleteArray_TEvioDataDescriptor);
      instance.SetDestructor(&destruct_TEvioDataDescriptor);
      instance.SetStreamerFunc(&streamer_TEvioDataDescriptor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEvioDataDescriptor*)
   {
      return GenerateInitInstanceLocal((::TEvioDataDescriptor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::TEvioDataDescriptor*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TEvioDataDescriptor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TEvioDataDescriptor::Class_Name()
{
   return "TEvioDataDescriptor";
}

//______________________________________________________________________________
const char *TEvioDataDescriptor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEvioDataDescriptor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TEvioDataDescriptor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEvioDataDescriptor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
void TEvioDataDescriptor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEvioDataDescriptor*)0x0)->GetClass();
}

//______________________________________________________________________________
TClass *TEvioDataDescriptor::Class()
{
   if (!fgIsA) { R__LOCKGUARD2(gCINTMutex); if(!fgIsA) {fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEvioDataDescriptor*)0x0)->GetClass();} }
   return fgIsA;
}

//______________________________________________________________________________
void TEvioDataDescriptor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEvioDataDescriptor.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b.StreamObject(&(descriptor),typeid(EvioDataDescriptor));
      R__b.CheckByteCount(R__s, R__c, TEvioDataDescriptor::IsA());
   } else {
      R__c = R__b.WriteVersion(TEvioDataDescriptor::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b.StreamObject(&(descriptor),typeid(EvioDataDescriptor));
      R__b.SetByteCount(R__c, kTRUE);
   }
}

//______________________________________________________________________________
void TEvioDataDescriptor::ShowMembers(TMemberInspector &R__insp)
{
      // Inspect the data members of an object of class TEvioDataDescriptor.
      TClass *R__cl = ::TEvioDataDescriptor::IsA();
      if (R__cl || R__insp.IsA()) { }
      R__insp.Inspect(R__cl, R__insp.GetParent(), "descriptor", (void*)&descriptor);
      R__insp.InspectMember("EvioDataDescriptor", (void*)&descriptor, "descriptor.", false);
      TObject::ShowMembers(R__insp);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEvioDataDescriptor(void *p) {
      return  p ? new(p) ::TEvioDataDescriptor : new ::TEvioDataDescriptor;
   }
   static void *newArray_TEvioDataDescriptor(Long_t nElements, void *p) {
      return p ? new(p) ::TEvioDataDescriptor[nElements] : new ::TEvioDataDescriptor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEvioDataDescriptor(void *p) {
      delete ((::TEvioDataDescriptor*)p);
   }
   static void deleteArray_TEvioDataDescriptor(void *p) {
      delete [] ((::TEvioDataDescriptor*)p);
   }
   static void destruct_TEvioDataDescriptor(void *p) {
      typedef ::TEvioDataDescriptor current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TEvioDataDescriptor(TBuffer &buf, void *obj) {
      ((::TEvioDataDescriptor*)obj)->::TEvioDataDescriptor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TEvioDataDescriptor

/********************************************************
* src/root/TEvioDataDescriptorDict.cc
* CAUTION: DON'T CHANGE THIS FILE. THIS FILE IS AUTOMATICALLY GENERATED
*          FROM HEADER FILES LISTED IN G__setup_cpp_environmentXXX().
*          CHANGE THOSE HEADER FILES AND REGENERATE THIS FILE.
********************************************************/

#ifdef G__MEMTEST
#undef malloc
#undef free
#endif

#if defined(__GNUC__) && __GNUC__ >= 4 && ((__GNUC_MINOR__ == 2 && __GNUC_PATCHLEVEL__ >= 1) || (__GNUC_MINOR__ >= 3))
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif

extern "C" void G__cpp_reset_tagtableTEvioDataDescriptorDict();

extern "C" void G__set_cpp_environmentTEvioDataDescriptorDict() {
  G__cpp_reset_tagtableTEvioDataDescriptorDict();
}
#include <new>
extern "C" int G__cpp_dllrevTEvioDataDescriptorDict() { return(30051515); }

/*********************************************************
* Member function Interface Method
*********************************************************/

/* TEvioDataDescriptor */
static int G__TEvioDataDescriptorDict_269_0_1(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
   TEvioDataDescriptor* p = NULL;
   char* gvp = (char*) G__getgvp();
   int n = G__getaryconstruct();
   if (n) {
     if ((gvp == (char*)G__PVOID) || (gvp == 0)) {
       p = new TEvioDataDescriptor[n];
     } else {
       p = new((void*) gvp) TEvioDataDescriptor[n];
     }
   } else {
     if ((gvp == (char*)G__PVOID) || (gvp == 0)) {
       p = new TEvioDataDescriptor;
     } else {
       p = new((void*) gvp) TEvioDataDescriptor;
     }
   }
   result7->obj.i = (long) p;
   result7->ref = (long) p;
   G__set_tagnum(result7,G__get_linked_tagnum(&G__TEvioDataDescriptorDictLN_TEvioDataDescriptor));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEvioDataDescriptorDict_269_0_2(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
   TEvioDataDescriptor* p = NULL;
   char* gvp = (char*) G__getgvp();
   //m: 2
   if ((gvp == (char*)G__PVOID) || (gvp == 0)) {
     p = new TEvioDataDescriptor((int) G__int(libp->para[0]), (const char*) G__int(libp->para[1]));
   } else {
     p = new((void*) gvp) TEvioDataDescriptor((int) G__int(libp->para[0]), (const char*) G__int(libp->para[1]));
   }
   result7->obj.i = (long) p;
   result7->ref = (long) p;
   G__set_tagnum(result7,G__get_linked_tagnum(&G__TEvioDataDescriptorDictLN_TEvioDataDescriptor));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEvioDataDescriptorDict_269_0_3(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 85, (long) TEvioDataDescriptor::Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEvioDataDescriptorDict_269_0_4(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 67, (long) TEvioDataDescriptor::Class_Name());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEvioDataDescriptorDict_269_0_5(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 115, (long) TEvioDataDescriptor::Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEvioDataDescriptorDict_269_0_6(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      TEvioDataDescriptor::Dictionary();
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEvioDataDescriptorDict_269_0_10(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      ((TEvioDataDescriptor*) G__getstructoffset())->StreamerNVirtual(*(TBuffer*) libp->para[0].ref);
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEvioDataDescriptorDict_269_0_11(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 67, (long) TEvioDataDescriptor::DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEvioDataDescriptorDict_269_0_12(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 105, (long) TEvioDataDescriptor::ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEvioDataDescriptorDict_269_0_13(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 67, (long) TEvioDataDescriptor::ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEvioDataDescriptorDict_269_0_14(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 105, (long) TEvioDataDescriptor::DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TEvioDataDescriptorDict_269_0_15(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)

{
   TEvioDataDescriptor* p;
   void* tmp = (void*) G__int(libp->para[0]);
   p = new TEvioDataDescriptor(*(TEvioDataDescriptor*) tmp);
   result7->obj.i = (long) p;
   result7->ref = (long) p;
   G__set_tagnum(result7,G__get_linked_tagnum(&G__TEvioDataDescriptorDictLN_TEvioDataDescriptor));
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
typedef TEvioDataDescriptor G__TTEvioDataDescriptor;
static int G__TEvioDataDescriptorDict_269_0_16(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
   char* gvp = (char*) G__getgvp();
   long soff = G__getstructoffset();
   int n = G__getaryconstruct();
   //
   //has_a_delete: 1
   //has_own_delete1arg: 0
   //has_own_delete2arg: 0
   //
   if (!soff) {
     return(1);
   }
   if (n) {
     if (gvp == (char*)G__PVOID) {
       delete[] (TEvioDataDescriptor*) soff;
     } else {
       G__setgvp((long) G__PVOID);
       for (int i = n - 1; i >= 0; --i) {
         ((TEvioDataDescriptor*) (soff+(sizeof(TEvioDataDescriptor)*i)))->~G__TTEvioDataDescriptor();
       }
       G__setgvp((long)gvp);
     }
   } else {
     if (gvp == (char*)G__PVOID) {
       delete (TEvioDataDescriptor*) soff;
     } else {
       G__setgvp((long) G__PVOID);
       ((TEvioDataDescriptor*) (soff))->~G__TTEvioDataDescriptor();
       G__setgvp((long)gvp);
     }
   }
   G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic assignment operator
static int G__TEvioDataDescriptorDict_269_0_17(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
   TEvioDataDescriptor* dest = (TEvioDataDescriptor*) G__getstructoffset();
   *dest = *(TEvioDataDescriptor*) libp->para[0].ref;
   const TEvioDataDescriptor& obj = *dest;
   result7->ref = (long) (&obj);
   result7->obj.i = (long) (&obj);
   return(1 || funcname || hash || result7 || libp) ;
}


/* Setting up global function */

/*********************************************************
* Member function Stub
*********************************************************/

/* TEvioDataDescriptor */

/*********************************************************
* Global function Stub
*********************************************************/

/*********************************************************
* Get size of pointer to member function
*********************************************************/
class G__Sizep2memfuncTEvioDataDescriptorDict {
 public:
  G__Sizep2memfuncTEvioDataDescriptorDict(): p(&G__Sizep2memfuncTEvioDataDescriptorDict::sizep2memfunc) {}
    size_t sizep2memfunc() { return(sizeof(p)); }
  private:
    size_t (G__Sizep2memfuncTEvioDataDescriptorDict::*p)();
};

size_t G__get_sizep2memfuncTEvioDataDescriptorDict()
{
  G__Sizep2memfuncTEvioDataDescriptorDict a;
  G__setsizep2memfunc((int)a.sizep2memfunc());
  return((size_t)a.sizep2memfunc());
}


/*********************************************************
* virtual base class offset calculation interface
*********************************************************/

   /* Setting up class inheritance */

/*********************************************************
* Inheritance information setup/
*********************************************************/
extern "C" void G__cpp_setup_inheritanceTEvioDataDescriptorDict() {

   /* Setting up class inheritance */
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__TEvioDataDescriptorDictLN_TEvioDataDescriptor))) {
     TEvioDataDescriptor *G__Lderived;
     G__Lderived=(TEvioDataDescriptor*)0x1000;
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__TEvioDataDescriptorDictLN_TEvioDataDescriptor),G__get_linked_tagnum(&G__TEvioDataDescriptorDictLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
}

/*********************************************************
* typedef information setup/
*********************************************************/
extern "C" void G__cpp_setup_typetableTEvioDataDescriptorDict() {

   /* Setting up typedef entry */
   G__search_typename2("Version_t",115,-1,0,-1);
   G__setnewtype(-1,"Class version identifier (short)",0);
   G__search_typename2("vector<ROOT::TSchemaHelper>",117,G__get_linked_tagnum(&G__TEvioDataDescriptorDictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<const_iterator>",117,G__get_linked_tagnum(&G__TEvioDataDescriptorDictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__TEvioDataDescriptorDictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<iterator>",117,G__get_linked_tagnum(&G__TEvioDataDescriptorDictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__TEvioDataDescriptorDictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("vector<TVirtualArray*>",117,G__get_linked_tagnum(&G__TEvioDataDescriptorDictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<const_iterator>",117,G__get_linked_tagnum(&G__TEvioDataDescriptorDictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__TEvioDataDescriptorDictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<iterator>",117,G__get_linked_tagnum(&G__TEvioDataDescriptorDictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__TEvioDataDescriptorDictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("iterator<std::bidirectional_iterator_tag,TObject*,std::ptrdiff_t,const TObject**,const TObject*&>",117,G__get_linked_tagnum(&G__TEvioDataDescriptorDictLN_iteratorlEbidirectional_iterator_tagcOTObjectmUcOlongcOconstsPTObjectmUmUcOconstsPTObjectmUaNgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("iterator<bidirectional_iterator_tag,TObject*,std::ptrdiff_t,const TObject**,const TObject*&>",117,G__get_linked_tagnum(&G__TEvioDataDescriptorDictLN_iteratorlEbidirectional_iterator_tagcOTObjectmUcOlongcOconstsPTObjectmUmUcOconstsPTObjectmUaNgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("iterator<bidirectional_iterator_tag,TObject*>",117,G__get_linked_tagnum(&G__TEvioDataDescriptorDictLN_iteratorlEbidirectional_iterator_tagcOTObjectmUcOlongcOconstsPTObjectmUmUcOconstsPTObjectmUaNgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("iterator<bidirectional_iterator_tag,TObject*,long>",117,G__get_linked_tagnum(&G__TEvioDataDescriptorDictLN_iteratorlEbidirectional_iterator_tagcOTObjectmUcOlongcOconstsPTObjectmUmUcOconstsPTObjectmUaNgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("iterator<bidirectional_iterator_tag,TObject*,long,const TObject**>",117,G__get_linked_tagnum(&G__TEvioDataDescriptorDictLN_iteratorlEbidirectional_iterator_tagcOTObjectmUcOlongcOconstsPTObjectmUmUcOconstsPTObjectmUaNgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("vector<UInt_t>",117,G__get_linked_tagnum(&G__TEvioDataDescriptorDictLN_vectorlEunsignedsPintcOallocatorlEunsignedsPintgRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("vector<TString>",117,G__get_linked_tagnum(&G__TEvioDataDescriptorDictLN_vectorlETStringcOallocatorlETStringgRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<const_iterator>",117,G__get_linked_tagnum(&G__TEvioDataDescriptorDictLN_reverse_iteratorlEvectorlETStringcOallocatorlETStringgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__TEvioDataDescriptorDictLN_vectorlETStringcOallocatorlETStringgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<iterator>",117,G__get_linked_tagnum(&G__TEvioDataDescriptorDictLN_reverse_iteratorlEvectorlETStringcOallocatorlETStringgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__TEvioDataDescriptorDictLN_vectorlETStringcOallocatorlETStringgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("vector<string>",117,G__get_linked_tagnum(&G__TEvioDataDescriptorDictLN_vectorlEstringcOallocatorlEstringgRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<const_iterator>",117,G__get_linked_tagnum(&G__TEvioDataDescriptorDictLN_reverse_iteratorlEvectorlEstringcOallocatorlEstringgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__TEvioDataDescriptorDictLN_vectorlEstringcOallocatorlEstringgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<iterator>",117,G__get_linked_tagnum(&G__TEvioDataDescriptorDictLN_reverse_iteratorlEvectorlEstringcOallocatorlEstringgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__TEvioDataDescriptorDictLN_vectorlEstringcOallocatorlEstringgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("vector<DescriptorEntry_t>",117,G__get_linked_tagnum(&G__TEvioDataDescriptorDictLN_vectorlEDescriptorEntry_tcOallocatorlEDescriptorEntry_tgRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<const_iterator>",117,G__get_linked_tagnum(&G__TEvioDataDescriptorDictLN_reverse_iteratorlEvectorlEDescriptorEntry_tcOallocatorlEDescriptorEntry_tgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__TEvioDataDescriptorDictLN_vectorlEDescriptorEntry_tcOallocatorlEDescriptorEntry_tgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<iterator>",117,G__get_linked_tagnum(&G__TEvioDataDescriptorDictLN_reverse_iteratorlEvectorlEDescriptorEntry_tcOallocatorlEDescriptorEntry_tgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__TEvioDataDescriptorDictLN_vectorlEDescriptorEntry_tcOallocatorlEDescriptorEntry_tgRsPgR));
   G__setnewtype(-1,NULL,0);
}

/*********************************************************
* Data Member information setup/
*********************************************************/

   /* Setting up class,struct,union tag member variable */

   /* TEvioDataDescriptor */
static void G__setup_memvarTEvioDataDescriptor(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__TEvioDataDescriptorDictLN_TEvioDataDescriptor));
   { TEvioDataDescriptor *p; p=(TEvioDataDescriptor*)0x1000; if (p) { }
   G__memvar_setup((void*)0,117,0,0,G__get_linked_tagnum(&G__TEvioDataDescriptorDictLN_EvioDataDescriptor),-1,-1,4,"descriptor=",0,(char*)NULL);
   G__memvar_setup((void*)0,85,0,0,G__get_linked_tagnum(&G__TEvioDataDescriptorDictLN_TClass),G__defined_typename("atomic_TClass_ptr"),-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}

extern "C" void G__cpp_setup_memvarTEvioDataDescriptorDict() {
}
/***********************************************************
************************************************************
************************************************************
************************************************************
************************************************************
************************************************************
************************************************************
***********************************************************/

/*********************************************************
* Member function information setup for each class
*********************************************************/
static void G__setup_memfuncTEvioDataDescriptor(void) {
   /* TEvioDataDescriptor */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__TEvioDataDescriptorDictLN_TEvioDataDescriptor));
   G__memfunc_setup("TEvioDataDescriptor",1920,G__TEvioDataDescriptorDict_269_0_1, 105, G__get_linked_tagnum(&G__TEvioDataDescriptorDictLN_TEvioDataDescriptor), -1, 0, 0, 1, 1, 0, "", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("TEvioDataDescriptor",1920,G__TEvioDataDescriptorDict_269_0_2, 105, G__get_linked_tagnum(&G__TEvioDataDescriptorDictLN_TEvioDataDescriptor), -1, 0, 2, 1, 1, 0, 
"i - - 0 - tag C - - 10 - format", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("Class",502,G__TEvioDataDescriptorDict_269_0_3, 85, G__get_linked_tagnum(&G__TEvioDataDescriptorDictLN_TClass), -1, 0, 0, 3, 1, 0, "", (char*)NULL, (void*) G__func2void( (TClass* (*)())(&TEvioDataDescriptor::Class) ), 0);
   G__memfunc_setup("Class_Name",982,G__TEvioDataDescriptorDict_269_0_4, 67, -1, -1, 0, 0, 3, 1, 1, "", (char*)NULL, (void*) G__func2void( (const char* (*)())(&TEvioDataDescriptor::Class_Name) ), 0);
   G__memfunc_setup("Class_Version",1339,G__TEvioDataDescriptorDict_269_0_5, 115, -1, G__defined_typename("Version_t"), 0, 0, 3, 1, 0, "", (char*)NULL, (void*) G__func2void( (Version_t (*)())(&TEvioDataDescriptor::Class_Version) ), 0);
   G__memfunc_setup("Dictionary",1046,G__TEvioDataDescriptorDict_269_0_6, 121, -1, -1, 0, 0, 3, 1, 0, "", (char*)NULL, (void*) G__func2void( (void (*)())(&TEvioDataDescriptor::Dictionary) ), 0);
   G__memfunc_setup("IsA",253,(G__InterfaceMethod) NULL,85, G__get_linked_tagnum(&G__TEvioDataDescriptorDictLN_TClass), -1, 0, 0, 1, 1, 8, "", (char*)NULL, (void*) NULL, 1);
   G__memfunc_setup("ShowMembers",1132,(G__InterfaceMethod) NULL,121, -1, -1, 0, 1, 1, 1, 0, "u 'TMemberInspector' - 1 - -", (char*)NULL, (void*) NULL, 1);
   G__memfunc_setup("Streamer",835,(G__InterfaceMethod) NULL,121, -1, -1, 0, 1, 1, 1, 0, "u 'TBuffer' - 1 - -", (char*)NULL, (void*) NULL, 1);
   G__memfunc_setup("StreamerNVirtual",1656,G__TEvioDataDescriptorDict_269_0_10, 121, -1, -1, 0, 1, 1, 1, 0, "u 'TBuffer' - 1 - ClassDef_StreamerNVirtual_b", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("DeclFileName",1145,G__TEvioDataDescriptorDict_269_0_11, 67, -1, -1, 0, 0, 3, 1, 1, "", (char*)NULL, (void*) G__func2void( (const char* (*)())(&TEvioDataDescriptor::DeclFileName) ), 0);
   G__memfunc_setup("ImplFileLine",1178,G__TEvioDataDescriptorDict_269_0_12, 105, -1, -1, 0, 0, 3, 1, 0, "", (char*)NULL, (void*) G__func2void( (int (*)())(&TEvioDataDescriptor::ImplFileLine) ), 0);
   G__memfunc_setup("ImplFileName",1171,G__TEvioDataDescriptorDict_269_0_13, 67, -1, -1, 0, 0, 3, 1, 1, "", (char*)NULL, (void*) G__func2void( (const char* (*)())(&TEvioDataDescriptor::ImplFileName) ), 0);
   G__memfunc_setup("DeclFileLine",1152,G__TEvioDataDescriptorDict_269_0_14, 105, -1, -1, 0, 0, 3, 1, 0, "", (char*)NULL, (void*) G__func2void( (int (*)())(&TEvioDataDescriptor::DeclFileLine) ), 0);
   // automatic copy constructor
   G__memfunc_setup("TEvioDataDescriptor", 1920, G__TEvioDataDescriptorDict_269_0_15, (int) ('i'), G__get_linked_tagnum(&G__TEvioDataDescriptorDictLN_TEvioDataDescriptor), -1, 0, 1, 1, 1, 0, "u 'TEvioDataDescriptor' - 11 - -", (char*) NULL, (void*) NULL, 0);
   // automatic destructor
   G__memfunc_setup("~TEvioDataDescriptor", 2046, G__TEvioDataDescriptorDict_269_0_16, (int) ('y'), -1, -1, 0, 0, 1, 1, 0, "", (char*) NULL, (void*) NULL, 1);
   // automatic assignment operator
   G__memfunc_setup("operator=", 937, G__TEvioDataDescriptorDict_269_0_17, (int) ('u'), G__get_linked_tagnum(&G__TEvioDataDescriptorDictLN_TEvioDataDescriptor), -1, 1, 1, 1, 1, 0, "u 'TEvioDataDescriptor' - 11 - -", (char*) NULL, (void*) NULL, 0);
   G__tag_memfunc_reset();
}


/*********************************************************
* Member function information setup
*********************************************************/
extern "C" void G__cpp_setup_memfuncTEvioDataDescriptorDict() {
}

/*********************************************************
* Global variable information setup for each class
*********************************************************/
static void G__cpp_setup_global0() {

   /* Setting up global variables */
   G__resetplocal();

}

static void G__cpp_setup_global1() {
}

static void G__cpp_setup_global2() {

   G__resetglobalenv();
}
extern "C" void G__cpp_setup_globalTEvioDataDescriptorDict() {
  G__cpp_setup_global0();
  G__cpp_setup_global1();
  G__cpp_setup_global2();
}

/*********************************************************
* Global function information setup for each class
*********************************************************/
static void G__cpp_setup_func0() {
   G__lastifuncposition();

}

static void G__cpp_setup_func1() {
}

static void G__cpp_setup_func2() {
}

static void G__cpp_setup_func3() {
}

static void G__cpp_setup_func4() {
}

static void G__cpp_setup_func5() {
}

static void G__cpp_setup_func6() {
}

static void G__cpp_setup_func7() {
}

static void G__cpp_setup_func8() {
}

static void G__cpp_setup_func9() {
}

static void G__cpp_setup_func10() {
}

static void G__cpp_setup_func11() {
}

static void G__cpp_setup_func12() {
}

static void G__cpp_setup_func13() {
}

static void G__cpp_setup_func14() {
}

static void G__cpp_setup_func15() {
}

static void G__cpp_setup_func16() {

   G__resetifuncposition();
}

extern "C" void G__cpp_setup_funcTEvioDataDescriptorDict() {
  G__cpp_setup_func0();
  G__cpp_setup_func1();
  G__cpp_setup_func2();
  G__cpp_setup_func3();
  G__cpp_setup_func4();
  G__cpp_setup_func5();
  G__cpp_setup_func6();
  G__cpp_setup_func7();
  G__cpp_setup_func8();
  G__cpp_setup_func9();
  G__cpp_setup_func10();
  G__cpp_setup_func11();
  G__cpp_setup_func12();
  G__cpp_setup_func13();
  G__cpp_setup_func14();
  G__cpp_setup_func15();
  G__cpp_setup_func16();
}

/*********************************************************
* Class,struct,union,enum tag information setup
*********************************************************/
/* Setup class/struct taginfo */
G__linked_taginfo G__TEvioDataDescriptorDictLN_TClass = { "TClass" , 99 , -1 };
G__linked_taginfo G__TEvioDataDescriptorDictLN_TBuffer = { "TBuffer" , 99 , -1 };
G__linked_taginfo G__TEvioDataDescriptorDictLN_TMemberInspector = { "TMemberInspector" , 99 , -1 };
G__linked_taginfo G__TEvioDataDescriptorDictLN_TObject = { "TObject" , 99 , -1 };
G__linked_taginfo G__TEvioDataDescriptorDictLN_vectorlEunsignedsPintcOallocatorlEunsignedsPintgRsPgR = { "vector<unsigned int,allocator<unsigned int> >" , 99 , -1 };
G__linked_taginfo G__TEvioDataDescriptorDictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR = { "vector<ROOT::TSchemaHelper,allocator<ROOT::TSchemaHelper> >" , 99 , -1 };
G__linked_taginfo G__TEvioDataDescriptorDictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR = { "reverse_iterator<vector<ROOT::TSchemaHelper,allocator<ROOT::TSchemaHelper> >::iterator>" , 99 , -1 };
G__linked_taginfo G__TEvioDataDescriptorDictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR = { "vector<TVirtualArray*,allocator<TVirtualArray*> >" , 99 , -1 };
G__linked_taginfo G__TEvioDataDescriptorDictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR = { "reverse_iterator<vector<TVirtualArray*,allocator<TVirtualArray*> >::iterator>" , 99 , -1 };
G__linked_taginfo G__TEvioDataDescriptorDictLN_iteratorlEbidirectional_iterator_tagcOTObjectmUcOlongcOconstsPTObjectmUmUcOconstsPTObjectmUaNgR = { "iterator<bidirectional_iterator_tag,TObject*,long,const TObject**,const TObject*&>" , 115 , -1 };
G__linked_taginfo G__TEvioDataDescriptorDictLN_vectorlETStringcOallocatorlETStringgRsPgR = { "vector<TString,allocator<TString> >" , 99 , -1 };
G__linked_taginfo G__TEvioDataDescriptorDictLN_reverse_iteratorlEvectorlETStringcOallocatorlETStringgRsPgRcLcLiteratorgR = { "reverse_iterator<vector<TString,allocator<TString> >::iterator>" , 99 , -1 };
G__linked_taginfo G__TEvioDataDescriptorDictLN_EvioDataDescriptor = { "EvioDataDescriptor" , 99 , -1 };
G__linked_taginfo G__TEvioDataDescriptorDictLN_vectorlEstringcOallocatorlEstringgRsPgR = { "vector<string,allocator<string> >" , 99 , -1 };
G__linked_taginfo G__TEvioDataDescriptorDictLN_reverse_iteratorlEvectorlEstringcOallocatorlEstringgRsPgRcLcLiteratorgR = { "reverse_iterator<vector<string,allocator<string> >::iterator>" , 99 , -1 };
G__linked_taginfo G__TEvioDataDescriptorDictLN_vectorlEDescriptorEntry_tcOallocatorlEDescriptorEntry_tgRsPgR = { "vector<DescriptorEntry_t,allocator<DescriptorEntry_t> >" , 99 , -1 };
G__linked_taginfo G__TEvioDataDescriptorDictLN_reverse_iteratorlEvectorlEDescriptorEntry_tcOallocatorlEDescriptorEntry_tgRsPgRcLcLiteratorgR = { "reverse_iterator<vector<DescriptorEntry_t,allocator<DescriptorEntry_t> >::iterator>" , 99 , -1 };
G__linked_taginfo G__TEvioDataDescriptorDictLN_TEvioDataDescriptor = { "TEvioDataDescriptor" , 99 , -1 };

/* Reset class/struct taginfo */
extern "C" void G__cpp_reset_tagtableTEvioDataDescriptorDict() {
  G__TEvioDataDescriptorDictLN_TClass.tagnum = -1 ;
  G__TEvioDataDescriptorDictLN_TBuffer.tagnum = -1 ;
  G__TEvioDataDescriptorDictLN_TMemberInspector.tagnum = -1 ;
  G__TEvioDataDescriptorDictLN_TObject.tagnum = -1 ;
  G__TEvioDataDescriptorDictLN_vectorlEunsignedsPintcOallocatorlEunsignedsPintgRsPgR.tagnum = -1 ;
  G__TEvioDataDescriptorDictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR.tagnum = -1 ;
  G__TEvioDataDescriptorDictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR.tagnum = -1 ;
  G__TEvioDataDescriptorDictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR.tagnum = -1 ;
  G__TEvioDataDescriptorDictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR.tagnum = -1 ;
  G__TEvioDataDescriptorDictLN_iteratorlEbidirectional_iterator_tagcOTObjectmUcOlongcOconstsPTObjectmUmUcOconstsPTObjectmUaNgR.tagnum = -1 ;
  G__TEvioDataDescriptorDictLN_vectorlETStringcOallocatorlETStringgRsPgR.tagnum = -1 ;
  G__TEvioDataDescriptorDictLN_reverse_iteratorlEvectorlETStringcOallocatorlETStringgRsPgRcLcLiteratorgR.tagnum = -1 ;
  G__TEvioDataDescriptorDictLN_EvioDataDescriptor.tagnum = -1 ;
  G__TEvioDataDescriptorDictLN_vectorlEstringcOallocatorlEstringgRsPgR.tagnum = -1 ;
  G__TEvioDataDescriptorDictLN_reverse_iteratorlEvectorlEstringcOallocatorlEstringgRsPgRcLcLiteratorgR.tagnum = -1 ;
  G__TEvioDataDescriptorDictLN_vectorlEDescriptorEntry_tcOallocatorlEDescriptorEntry_tgRsPgR.tagnum = -1 ;
  G__TEvioDataDescriptorDictLN_reverse_iteratorlEvectorlEDescriptorEntry_tcOallocatorlEDescriptorEntry_tgRsPgRcLcLiteratorgR.tagnum = -1 ;
  G__TEvioDataDescriptorDictLN_TEvioDataDescriptor.tagnum = -1 ;
}


extern "C" void G__cpp_setup_tagtableTEvioDataDescriptorDict() {

   /* Setting up class,struct,union tag entry */
   G__get_linked_tagnum_fwd(&G__TEvioDataDescriptorDictLN_TClass);
   G__get_linked_tagnum_fwd(&G__TEvioDataDescriptorDictLN_TBuffer);
   G__get_linked_tagnum_fwd(&G__TEvioDataDescriptorDictLN_TMemberInspector);
   G__get_linked_tagnum_fwd(&G__TEvioDataDescriptorDictLN_TObject);
   G__get_linked_tagnum_fwd(&G__TEvioDataDescriptorDictLN_vectorlEunsignedsPintcOallocatorlEunsignedsPintgRsPgR);
   G__get_linked_tagnum_fwd(&G__TEvioDataDescriptorDictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR);
   G__get_linked_tagnum_fwd(&G__TEvioDataDescriptorDictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR);
   G__get_linked_tagnum_fwd(&G__TEvioDataDescriptorDictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR);
   G__get_linked_tagnum_fwd(&G__TEvioDataDescriptorDictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR);
   G__get_linked_tagnum_fwd(&G__TEvioDataDescriptorDictLN_iteratorlEbidirectional_iterator_tagcOTObjectmUcOlongcOconstsPTObjectmUmUcOconstsPTObjectmUaNgR);
   G__get_linked_tagnum_fwd(&G__TEvioDataDescriptorDictLN_vectorlETStringcOallocatorlETStringgRsPgR);
   G__get_linked_tagnum_fwd(&G__TEvioDataDescriptorDictLN_reverse_iteratorlEvectorlETStringcOallocatorlETStringgRsPgRcLcLiteratorgR);
   G__get_linked_tagnum_fwd(&G__TEvioDataDescriptorDictLN_EvioDataDescriptor);
   G__get_linked_tagnum_fwd(&G__TEvioDataDescriptorDictLN_vectorlEstringcOallocatorlEstringgRsPgR);
   G__get_linked_tagnum_fwd(&G__TEvioDataDescriptorDictLN_reverse_iteratorlEvectorlEstringcOallocatorlEstringgRsPgRcLcLiteratorgR);
   G__get_linked_tagnum_fwd(&G__TEvioDataDescriptorDictLN_vectorlEDescriptorEntry_tcOallocatorlEDescriptorEntry_tgRsPgR);
   G__get_linked_tagnum_fwd(&G__TEvioDataDescriptorDictLN_reverse_iteratorlEvectorlEDescriptorEntry_tcOallocatorlEDescriptorEntry_tgRsPgRcLcLiteratorgR);
   G__tagtable_setup(G__get_linked_tagnum_fwd(&G__TEvioDataDescriptorDictLN_TEvioDataDescriptor),sizeof(TEvioDataDescriptor),-1,62720,(char*)NULL,G__setup_memvarTEvioDataDescriptor,G__setup_memfuncTEvioDataDescriptor);
}
extern "C" void G__cpp_setupTEvioDataDescriptorDict(void) {
  G__check_setup_version(30051515,"G__cpp_setupTEvioDataDescriptorDict()");
  G__set_cpp_environmentTEvioDataDescriptorDict();
  G__cpp_setup_tagtableTEvioDataDescriptorDict();

  G__cpp_setup_inheritanceTEvioDataDescriptorDict();

  G__cpp_setup_typetableTEvioDataDescriptorDict();

  G__cpp_setup_memvarTEvioDataDescriptorDict();

  G__cpp_setup_memfuncTEvioDataDescriptorDict();
  G__cpp_setup_globalTEvioDataDescriptorDict();
  G__cpp_setup_funcTEvioDataDescriptorDict();

   if(0==G__getsizep2memfunc()) G__get_sizep2memfuncTEvioDataDescriptorDict();
  return;
}
class G__cpp_setup_initTEvioDataDescriptorDict {
  public:
    G__cpp_setup_initTEvioDataDescriptorDict() { G__add_setup_func("TEvioDataDescriptorDict",(G__incsetup)(&G__cpp_setupTEvioDataDescriptorDict)); G__call_setup_funcs(); }
   ~G__cpp_setup_initTEvioDataDescriptorDict() { G__remove_setup_func("TEvioDataDescriptorDict"); }
};
G__cpp_setup_initTEvioDataDescriptorDict G__cpp_setup_initializerTEvioDataDescriptorDict;

