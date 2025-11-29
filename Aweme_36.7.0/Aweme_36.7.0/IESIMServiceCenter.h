@class NSDictionary, NSMutableDictionary, HTSServiceContainer;

@interface IESIMServiceCenter : NSObject {
    long long _p_regOnceToken;
}

@property (nonatomic) BOOL bindFinished;
@property (readonly, nonatomic) NSMutableDictionary *protocolScopeDictOnReg;
@property (readonly, nonatomic) NSMutableDictionary *sdkUserServiceGetterOnReg;
@property (retain, nonatomic) NSDictionary *protocolScopeDict;
@property (retain, nonatomic) NSDictionary *sdkUserServiceGetter;
@property (readonly, nonatomic) HTSServiceContainer *globalServiceContainer;
@property (retain) HTSServiceContainer *sdkUserServiceContainer;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)bindBlock:(id /* block */)a0 toProtocol:(id)a1 withScope:(long long)a2;
- (id)getProtocolService:(id)a0;
- (id)p_makeContainerOfScope:(long long)a0;
- (void)createServiceContainerWithScope:(long long)a0;
- (void)destroyServiceContainerWithScope:(long long)a0;
- (id /* block */)wrappedGetter:(id /* block */)a0;
- (void)p_bindBlock:(id /* block */)a0 toProtocol:(id)a1 inContainer:(id)a2;
- (void)p_ensureRegist;
- (id)p_containerWithScope:(long long)a0;
- (void)p_loadLazyRegister;
- (void)p_freezeRegisterInfo;
- (void).cxx_destruct;
- (id)init;

@end
