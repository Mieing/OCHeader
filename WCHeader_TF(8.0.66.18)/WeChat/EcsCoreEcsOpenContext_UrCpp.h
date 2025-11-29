@class NSString, EcsOpenContextData;
@protocol EcsCoreEcsOpenContextBaseInfo_Ur;

@interface EcsCoreEcsOpenContext_UrCpp : UnitRCObjcBaseProxyClass <EcsCoreEcsOpenContext_Ur> {
    struct recursive_mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _fieldMutex;
    struct vector<bool, std::allocator<bool>> { unsigned long long *__begin_; unsigned long long __size_; struct __compressed_pair<unsigned long, std::allocator<unsigned long>> { unsigned long long __value_; } __cap_alloc_; } _fieldHasCache;
    id<EcsCoreEcsOpenContextBaseInfo_Ur> _baseInfo;
    EcsOpenContextData *_data;
    id /* block */ _eventAction;
}

@property (retain, nonatomic) id<EcsCoreEcsOpenContextBaseInfo_Ur> baseInfo;
@property (retain, nonatomic) EcsOpenContextData *data;
@property (copy, nonatomic) id /* block */ eventAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)create:(int)a0;

- (id)init;
- (void)notifyFieldUpdated:(int)a0;
- (id)baseInfo;
- (id)data;
- (id /* block */)eventAction;
- (id)getBaseInfo;
- (void)setBaseInfo:(id)a0;
- (id)getData;
- (void)setData:(id)a0;
- (id /* block */)getEventAction;
- (void)setEventAction:(id /* block */)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
