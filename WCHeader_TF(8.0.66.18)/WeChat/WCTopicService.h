@class MMLoadingView, WCTopicJumpInfo;

@interface WCTopicService : WSTemplateBaseMgr <IExptServiceExt, PBMessageObserverDelegate>

@property (nonatomic) BOOL isAvaliableForTextFeaturesInChat;
@property (nonatomic) BOOL isAvaliableForTextFeaturesInTimeline;
@property (nonatomic) BOOL isAvaliableForShareConentSearch;
@property (nonatomic) unsigned int topicMaxCharacterCount;
@property (retain, nonatomic) WCTopicJumpInfo *curTopicJumpInfo;
@property (weak, nonatomic) MMLoadingView *loadingView;
@property (nonatomic) double lastReqTime;

- (void)onServiceInit;
- (id)defaultTemplateZipPath;
- (id)templateResouceRootPath;
- (unsigned int)packageResouceType;
- (unsigned long long)localJSBizType;
- (BOOL)updateCacheTextFeatureEnableInChat:(BOOL)a0;
- (BOOL)updateCacheTextFeatureEnableInTimeline:(BOOL)a0;
- (BOOL)isAvaliableForTopicSearchTextFeatures;
- (BOOL)isAvaliableForTopicSearchInputShare;
- (BOOL)isAvaliableForTopicSearchTextFeaturesInTimeline;
- (void)onExptItemListChange;
- (void)showTopicJumpLoading;
- (void)hideTopicJumpLoading:(BOOL)a0;
- (void)openTopicWithParams:(id)a0 object:(id)a1 fromViewController:(id)a2;
- (void)reqTopicJumpInfo:(id)a0 Object:(id)a1 Handler:(id /* block */)a2;
- (void)stopReqTopicJumpInfo;
- (void)cancelReqTopicJumpInfoByObject:(id)a0;
- (void)onTopicJumpInfoTimeout;
- (id)makeOpenParamByTopicJumpInfo:(id)a0;
- (void)openWaAppByTopicJumpInfo:(id)a0 OpenParam:(id)a1;
- (id)valueFromList:(id)a0 withKey:(id)a1;
- (void)openH5ByTopicJumpInfo:(id)a0 ViewController:(id)a1;
- (void)openFinderProfileByTopicJumpInfo:(id)a0 ViewController:(id)a1 reportScene:(int)a2 enterType:(int)a3 params:(id)a4;
- (void)openBizByTopicJumpInfo:(id)a0 ViewController:(id)a1 addContactScene:(int)a2;
- (void)openLiteAppTopicJumpInfo:(id)a0 viewController:(id)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
