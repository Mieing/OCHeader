@protocol VeLivePlayerSettingProtocol;

@interface VeLivePlayerSettingManager : NSObject

@property (retain, nonatomic) id<VeLivePlayerSettingProtocol> delegate;

+ (id)sharedInstance;

- (id)getSettingOrOptions:(id)a0;
- (id)defaultRTMConfig;
- (id)replace:(id)a0 withDict:(id)a1;
- (id)defaultQuicConfig;
- (id)defaultABRSDKParamsConfig;
- (id)defaultSettingOrOptions;
- (id)defaultLowLatencyFLVConfig;
- (id)defaultBMFConfig;
- (id)getRTMConfigWith:(id)a0;
- (id)getABRConfigWith:(id)a0;
- (id)getQuicConfigWith:(id)a0;
- (id)getBMFConfigWith:(id)a0;
- (id)getLowLatencyFLVConfigWith:(id)a0;
- (void).cxx_destruct;

@end
