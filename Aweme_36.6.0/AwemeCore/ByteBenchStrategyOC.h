@class NSString, NSDictionary, NSMutableDictionary;

@interface ByteBenchStrategyOC : NSObject <ByteBenchStrategyPotocol> {
    struct shared_ptr<bytebench::IByteBenchStrategy> { struct IByteBenchStrategy *__ptr_; struct __shared_weak_count *__cntrl_; } bytebenchStrategy;
}

@property BOOL isInit;
@property (nonatomic) id /* block */ mCallback;
@property (nonatomic) int mUpdateInterval;
@property (nonatomic) int mBenchAppId;
@property (copy, nonatomic) NSString *mAccessKey;
@property (copy, nonatomic) NSString *mSecretKey;
@property (retain, nonatomic) NSDictionary *mClientInfoDic;
@property (nonatomic) int originAppid;
@property (retain, nonatomic) NSMutableDictionary *mRegisterStrategy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)releaseStrategy;
- (id)initWithOriginappid:(int)a0;
- (BOOL)createCByteBenchStrategy;
- (BOOL)obtainBoolStrategy:(id)a0 params:(id)a1;
- (BOOL)obtainBoolStrategy:(id)a0 defaultValue:(BOOL)a1 params:(id)a2 fromCache:(BOOL)a3;
- (BOOL)obtainBoolStrategy:(id)a0 defaultValue:(BOOL)a1 params:(id)a2 spaceID:(id)a3 fromCache:(BOOL)a4;
- (id)convertDicToJson:(id)a0;
- (float)obtainFloatStrategy:(id)a0 params:(id)a1;
- (float)obtainFloatStrategy:(id)a0 defaultValue:(float)a1 params:(id)a2 fromCache:(BOOL)a3;
- (float)obtainFloatStrategy:(id)a0 defaultValue:(float)a1 params:(id)a2 spaceID:(id)a3 fromCache:(BOOL)a4;
- (int)obtainIntStrategy:(id)a0 params:(id)a1;
- (int)obtainIntStrategy:(id)a0 defaultValue:(int)a1 params:(id)a2 fromCache:(BOOL)a3;
- (int)obtainIntStrategy:(id)a0 defaultValue:(int)a1 params:(id)a2 spaceID:(id)a3 fromCache:(BOOL)a4;
- (long long)obtainLongStrategy:(id)a0 params:(id)a1;
- (long long)obtainLongStrategy:(id)a0 defaultValue:(long long)a1 params:(id)a2 fromCache:(BOOL)a3;
- (long long)obtainLongStrategy:(id)a0 defaultValue:(long long)a1 params:(id)a2 spaceID:(id)a3 fromCache:(BOOL)a4;
- (id)obtainStrStrategy:(id)a0 params:(id)a1;
- (id)obtainStrStrategy:(id)a0 defaultValue:(id)a1 params:(id)a2 fromCache:(BOOL)a3;
- (id)obtainStrStrategy:(id)a0 defaultValue:(id)a1 params:(id)a2 spaceID:(id)a3 fromCache:(BOOL)a4;
- (int)initStrategy:(id)a0;
- (float)getDeviceFeatureFloat:(id)a0;
- (int)obtainIntStrategy:(id)a0;
- (int)obtainIntStrategy:(id)a0 defaultValue:(int)a1;
- (float)obtainFloatStrategy:(id)a0;
- (float)obtainFloatStrategy:(id)a0 defaultValue:(float)a1;
- (long long)obtainLongStrategy:(id)a0;
- (long long)obtainLongStrategy:(id)a0 defaultValue:(long long)a1;
- (BOOL)obtainBoolStrategy:(id)a0;
- (BOOL)obtainBoolStrategy:(id)a0 defaultValue:(BOOL)a1;
- (id)obtainStrStrategy:(id)a0;
- (id)obtainStrStrategy:(id)a0 defaultValue:(id)a1;
- (BOOL)containKey:(id)a0;
- (float)getDynamicFeatureFloat:(long long)a0;
- (void)getDeviceFeatureAllForServer:(id)a0;
- (BOOL)registerIntStrategy:(id)a0;
- (BOOL)registerFloatStrategy:(id)a0;
- (BOOL)registerLongStrategy:(id)a0;
- (BOOL)registerBoolStrategy:(id)a0;
- (BOOL)registerStrStrategy:(id)a0;
- (void)registerBXStrategyInfoCallback:(id /* block */)a0;
- (id)getOneSpaceKeyList:(id)a0;
- (id)getOneSpaceStrategyList:(id)a0 params:(id)a1;
- (id)getAllChildrenSpaceID;
- (BOOL)unregisterStrategy:(id)a0;
- (BOOL)clearStrategyCache:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
