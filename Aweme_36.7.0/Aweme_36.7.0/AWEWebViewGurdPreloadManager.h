@class NSString, NSMapTable, AWEWebViewChannelInterceptor, AWEOriginalAdModel;
@protocol AWEWebViewConfigProtocol, AWEHttpTask;

@interface AWEWebViewGurdPreloadManager : NSObject <IESGurdEventDelegate, IESFalconGurdInterceptionDelegate, AWEAppAwemeSettingMessage>

@property (nonatomic) BOOL gurdInitialized;
@property (retain, nonatomic) NSMapTable *adModelCache;
@property (retain, nonatomic) id<AWEHttpTask> requestTask;
@property (retain, nonatomic) AWEOriginalAdModel *currAdModel;
@property (nonatomic) long long currScene;
@property (retain, nonatomic) id<AWEWebViewConfigProtocol> webConfig;
@property (copy, nonatomic) NSString *eventName;
@property (retain, nonatomic) AWEWebViewChannelInterceptor *specificInterceptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)awemeSettingDidChange;
- (void)gurdWillDownloadPackageForAccessKey:(id)a0 channel:(id)a1 isPatch:(BOOL)a2;
- (void)gurdDidFinishDownloadingPackageForAccessKey:(id)a0 channel:(id)a1 packageInfo:(id)a2;
- (void)gurdDidFinishApplyingPackageForAccessKey:(id)a0 channel:(id)a1 succeed:(BOOL)a2 error:(id)a3;
- (void)gurdDidRequestConfigForAccessKey:(id)a0 configsDictionary:(id)a1;
- (void)gurdDidCleanCachePackageForAccessKey:(id)a0 channel:(id)a1;
- (long long)preloadStatusOfModel:(id)a0;
- (void)didReceiveMemoryWarningNotification;
- (BOOL)enableGurdPreload;
- (BOOL)enableMemoryOptimizeWithNunki;
- (void)didReceiveMemeoryDangerLevelTopNotification;
- (void)falconInterceptedRequest:(id)a0 willLoadFromCache:(BOOL)a1 statModel:(id)a2;
- (void)updateLogPanel:(id)a0;
- (void)showLogPanel;
- (void)preloadResourceWithModel:(id)a0 scene:(long long)a1;
- (BOOL)enableWebGurdPreloadWithModel:(id)a0;
- (void)syncWebViewResourcesWithModelListIfNeeded:(id)a0 scene:(long long)a1;
- (id)channelNameOfModel:(id)a0 scene:(long long)a1;
- (void)setupInterceptorWithModelIfNeeded:(id)a0;
- (long long)pageTypeOfModel:(id)a0;
- (void)updateCurrAdModelIfNeeded:(id)a0;
- (long long)sceneOfChannel:(id)a0;
- (BOOL)enableThirdWebGurdPreloadWithModel:(id)a0;
- (void)registerCustomInterceptor;
- (id)accessKeyOfScene:(long long)a0;
- (void)syncResourcesWithModelList:(id)a0 scene:(long long)a1 completion:(id /* block */)a2;
- (id)channelListOfModelList:(id)a0 scene:(long long)a1;
- (void)setupGurdForCommerceIfNeeded;
- (BOOL)isValidAccessKey:(id)a0;
- (long long)pageTypeOfChannel:(id)a0;
- (void)trackFeedPlayablePreloadStatusWithAdModel:(id)a0 extraParams:(id)a1;
- (id)ies_prefixMatchedByRegex:(id)a0 str:(id)a1;
- (id)jsb_stringByTrimmingQueryString:(id)a0;
- (id)accessKeyOfChannel:(id)a0;
- (BOOL)matchCommonPrefix:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
