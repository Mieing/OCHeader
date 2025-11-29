@class NSString;

@interface IESECABTestProviderDefaultImpl : NSObject <BDCommonABTestLogDelegate, BDCommonABTestUserDelegate, IESECUserMessage, IESECABTestProviderProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getExperimentValueForKey:(id)a0 withExposure:(BOOL)a1;
+ (unsigned long long)p_bdValueTypeConverter:(unsigned long long)a0;
+ (void)fetchExperimentDataWithParams:(id)a0 headers:(id)a1;
+ (void)registerExperimentWithKey:(id)a0 owner:(id)a1 description:(id)a2 defaultValue:(id)a3 valueType:(unsigned long long)a4 isSticky:(BOOL)a5 isBind2User:(BOOL)a6;
+ (void)editExperimentValueForKey:(id)a0 value:(id)a1;
+ (void)editExperimentValueTmpForKey:(id)a0 value:(id)a1 vid:(id)a2;
+ (void)p_registerExposeVidBlock;
+ (BOOL)p_lazyExposeIfNeeded:(id)a0 exposure:(BOOL)a1;
+ (void)p_postUserChangeNotificationWithUID:(id)a0;
+ (void)p_lazyExposeThenRegister;
+ (void)initialize;

- (void)onLog:(id)a0;
- (void)didFinishHostLogin;
- (void)didFinishHostLogout;
- (id)getCurrentUserKey;
- (id)init;
- (void)dealloc;

@end
