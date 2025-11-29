@class NSString;
@protocol EcsCoreEcsOpenContextBasePlatformInfo_Ur;

@interface EcsCoreEcsOpenContextBaseInfo_UrCpp : UnitRCObjcBaseProxyClass <EcsCoreEcsOpenContextBaseInfo_Ur> {
    struct recursive_mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _fieldMutex;
    struct vector<bool, std::allocator<bool>> { unsigned long long *__begin_; unsigned long long __size_; struct __compressed_pair<unsigned long, std::allocator<unsigned long>> { unsigned long long __value_; } __cap_alloc_; } _fieldHasCache;
    int _from;
    NSString *_flutterEngineId;
    long long _taskId;
    id<EcsCoreEcsOpenContextBasePlatformInfo_Ur> _nativeInfo;
    id<EcsCoreEcsOpenContextBasePlatformInfo_Ur> _flutterInfo;
    id<EcsCoreEcsOpenContextBasePlatformInfo_Ur> _cppInfo;
}

@property (nonatomic) int from;
@property (retain, nonatomic) NSString *flutterEngineId;
@property (nonatomic) long long taskId;
@property (retain, nonatomic) id<EcsCoreEcsOpenContextBasePlatformInfo_Ur> nativeInfo;
@property (retain, nonatomic) id<EcsCoreEcsOpenContextBasePlatformInfo_Ur> flutterInfo;
@property (retain, nonatomic) id<EcsCoreEcsOpenContextBasePlatformInfo_Ur> cppInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)notifyFieldUpdated:(int)a0;
- (int)from;
- (id)flutterEngineId;
- (long long)taskId;
- (id)nativeInfo;
- (id)flutterInfo;
- (id)cppInfo;
- (int)getFrom;
- (void)setFrom:(int)a0;
- (id)getFlutterEngineId;
- (void)setFlutterEngineId:(id)a0;
- (long long)getTaskId;
- (void)setTaskId:(long long)a0;
- (id)getNativeInfo;
- (void)setNativeInfo:(id)a0;
- (id)getFlutterInfo;
- (void)setFlutterInfo:(id)a0;
- (id)getCppInfo;
- (void)setCppInfo:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
