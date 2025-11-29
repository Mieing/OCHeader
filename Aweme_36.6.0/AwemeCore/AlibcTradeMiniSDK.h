@class AlibcTradeMiniSDKConvert, AlibcTradeMiniAppLink;

@interface AlibcTradeMiniSDK : NSObject

@property (retain, nonatomic) AlibcTradeMiniSDKConvert *convertService;
@property (retain, nonatomic) AlibcTradeMiniAppLink *appLinkService;

+ (id)sharedInstance;

- (void)checkResoucesAndConfigure;
- (void)asyncInitWithSuccess:(id /* block */)a0 failure:(id /* block */)a1;
- (id)getConvertService;
- (id)getAppLinkService;
- (void)setDebugLogOpen:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;

@end
