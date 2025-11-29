@class NSString;

@interface TingObjcInPageStateManagerCpp : UnitRCObjcBaseProxyClass <TingObjcInPageStateManager> {
    struct recursive_mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _fieldMutex;
    struct vector<bool, std::allocator<bool>> { unsigned long long *__begin_; unsigned long long __size_; struct __compressed_pair<unsigned long, std::allocator<unsigned long>> { unsigned long long __value_; } __cap_alloc_; } _fieldHasCache;
    BOOL _inTingPage;
}

@property (nonatomic) BOOL inTingPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)notifyFieldUpdated:(int)a0;
- (BOOL)inTingPage;
- (void)addListener:(id)a0;
- (void)removeListener:(id)a0;
- (BOOL)getInTingPage;
- (void)setInTingPage:(BOOL)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
