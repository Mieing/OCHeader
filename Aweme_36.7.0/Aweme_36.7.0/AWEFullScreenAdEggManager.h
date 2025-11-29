@class AWEFullScreenAdEggModel, NSString, AWEFullScreenAdEggViewController;

@interface AWEFullScreenAdEggManager : HTSService <AWEFullScreenAdEggManager>

@property (retain, nonatomic) AWEFullScreenAdEggViewController *adEggViewController;
@property (retain, nonatomic) AWEFullScreenAdEggModel *model;
@property (nonatomic) BOOL isSearchVideoPlayerViewSingleTappedDuringDelayTime;
@property (nonatomic) BOOL isCommentPanelShow;
@property (nonatomic) BOOL isAdEggShowingAndBackgroundActionShouldPause;
@property (nonatomic) BOOL isShowAfterSearchEggDataReceived;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instance;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (BOOL)canShowAdEggWithModel:(id)a0;
- (void)tryShowAdEggImmediately;
- (BOOL)isAdEggViewLoadComplete;
- (void)trackLoadFailwithFailReason:(id)a0;
- (BOOL)canShowAdEggInSearchScene;
- (BOOL)isAlphaVideoSourceInCacheWithSourcePath:(id)a0;
- (void)tryShowEggAfterSearchDataResponse;
- (void)adEggDataReceive:(id)a0;
- (void)setupAndPreloadDataIfNeed;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)clearData;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
