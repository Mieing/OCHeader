@class WCFinderStreamLoadingState, NSString, WCFinderProfileLiveDataFetcher, NSArray, WCFinderFeedArray;
@protocol WCFinderProfileLivePlaybackViewModelShowTabDelegate, WCFinderProfileLivePlaybackViewModelDelegate;

@interface WCFinderProfileLivePlaybackViewModel : WCFinderStreamProfilePageModel <WCFinderLiveExt, WCFinderDataItemExt, WCFinderStickTopChangeExt, WCFinderFeedArrayDelegate>

@property (retain, nonatomic) WCFinderFeedArray *feedArray;
@property (retain, nonatomic) WCFinderProfileLiveDataFetcher *dataFetcher;
@property (copy, nonatomic) NSString *finderUsername;
@property (nonatomic) BOOL isFetchingData;
@property (nonatomic) int commentScene;
@property (nonatomic) BOOL showPostTime;
@property (readonly, nonatomic) NSArray *liveDataItemArray;
@property (readonly, nonatomic) WCFinderStreamLoadingState *loadingState;
@property (readonly, nonatomic) BOOL isAuthorPerspective;
@property (readonly, nonatomic) BOOL showTab;
@property (weak, nonatomic) id<WCFinderProfileLivePlaybackViewModelShowTabDelegate> showTabDelegate;
@property (weak, nonatomic) id<WCFinderProfileLivePlaybackViewModelDelegate> delegate;
@property (readonly, nonatomic) unsigned long long refreshTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)tabId;
+ (BOOL)shouldDisplay:(id)a0;
+ (BOOL)allowLimitMode;
+ (id)overviewSectionTypes;
+ (BOOL)isValidLiveContentVM:(id)a0;
+ (BOOL)doLivePlayBackDidSelectItem:(id)a0 fromVC:(id)a1 dataFetcher:(id)a2 feedArray:(id)a3;

- (id)init;
- (BOOL)shouldDisplayTab;
- (void)requestPageData;
- (void)_updateLiveOverViewSection:(long long)a0 fillCache:(BOOL)a1;
- (void)reFetchNextLiveDataItems;
- (void)fetchNextLiveDataItems;
- (id)createContentVMFromDataItems:(id)a0;
- (id)displayName;
- (id)viewPageClassName;
- (void)onFinderDataItemDelete:(id)a0;
- (void)onFinderLiveReplaySettingUpdated:(id)a0 replayEnabled:(BOOL)a1;
- (void)onFinderLiveShareViewReplayStatusUpdated:(id)a0 liveInfo:(id)a1;
- (void)onFinderLiveReplayStatusUpdated:(id)a0 replayStatus:(unsigned int)a1;
- (void)onFinderLiveReplayStickyTopTo:(id)a0;
- (BOOL)isValidFeedContentVM:(id)a0;
- (void)didClickContentVM:(id)a0 fromVC:(id)a1 beforeDisplay:(id /* block */)a2 complete:(id /* block */)a3;
- (BOOL)livePlayBackDidSelectItem:(id)a0 fromVC:(id)a1;
- (void)openFeedDidSelectVC:(id)a0 fromVC:(id)a1 beforeDisplay:(id /* block */)a2;
- (BOOL)checkPurchaseUserCount:(id)a0;
- (void)onFeedArray:(id)a0 insertContentVMS:(id)a1;
- (void)onFinderStickTopChanged:(id)a0;
- (void).cxx_destruct;

@end
