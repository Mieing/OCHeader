@class HybridRouterOpenParams, NSString;

@interface CommonHybridRouterParamsCpp : UnitRCObjcBaseProxyClass <CommonHybridRouterParams> {
    struct recursive_mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _fieldMutex;
    struct vector<bool, std::allocator<bool>> { unsigned long long *__begin_; unsigned long long __size_; struct __compressed_pair<unsigned long, std::allocator<unsigned long>> { unsigned long long __value_; } __cap_alloc_; } _fieldHasCache;
    HybridRouterOpenParams *_openParams;
}

@property (retain, nonatomic) HybridRouterOpenParams *openParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)notifyFieldUpdated:(int)a0;
- (id)openParams;
- (id)getPlatformKey;
- (id)getPlatformArgs;
- (id)getOpenParams;
- (void)setOpenParams:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
