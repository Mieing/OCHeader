@class NSMutableDictionary;

@interface IESLiveIMPaaSConfig : NSObject

@property (retain, nonatomic) NSMutableDictionary *bizConfigs;
@property (retain, nonatomic) NSMutableDictionary *bizDispatchConfigs;
@property (copy, nonatomic) id /* block */ sharedUnifiedClient;
@property (copy, nonatomic) id /* block */ appConfigBlock;
@property (copy, nonatomic) id /* block */ zstdInfoBlock;

+ (id)sharedInstance;

- (void)trackEvent:(id)a0 params:(id)a1;
- (void)setupEnvironment;
- (void)addBizConfig:(id)a0;
- (void)addBizDispatchConfig:(id)a0;
- (id)defaultBizConfig;
- (id)bizConfigWith:(id)a0;
- (id)bizDispatchConfigWith:(id)a0;
- (int)p_getClientVersionNumber;
- (int)p_currentPlatform;
- (int)p_currentNetworkStatus;
- (void)setupExecuteConfig;
- (id)imConfigWithZstdDictInfo;
- (void).cxx_destruct;
- (id)init;

@end
