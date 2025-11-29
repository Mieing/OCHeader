@class AWECommentModel, NSString;

@interface AWEIMChatRecommendVideoDataController : AWEListDataController <AWEIMFeedListDataControllerProtocol>

@property (retain, nonatomic) AWECommentModel *commentModel;
@property (nonatomic) BOOL shouldShowLikePanel;
@property (copy, nonatomic) id /* block */ dataUpdateCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)loadMoreWithFilteredCompletion:(id /* block */)a0;
- (void)replaceVideosWithCompletion:(id /* block */)a0 replaceVideosType:(long long)a1;
- (void)fetchForCacheWithCompletion:(id /* block */)a0;
- (BOOL)shouldHideIMBottomBar:(id)a0;
- (void)hostVC_viewDidAppear;
- (BOOL)disableShowNaviShareEntrance:(id)a0;
- (void)willDisplayAweme:(id)a0 index:(long long)a1;
- (id)currentNaviTitleWithAweme:(id)a0;
- (void)currentNaviTitleInfoWithAweme:(id)a0 callBack:(id /* block */)a1;
- (id)currentFromUserWithAweme:(id)a0;
- (BOOL)showTopBottomGradientViewWithAweme:(id)a0;
- (id)currentDisplayMessageWithAweme:(id)a0;
- (id)currentDisplayMessage;
- (id)currentDisplayMessageID;
- (id)currentDisplayMessageFromUserID;
- (BOOL)isInitWithEmptyDataSource;
- (BOOL)enableZoomAnimation;
- (BOOL)shouldShowTopDownloadEntrance:(id)a0;
- (BOOL)shouldShowMoreEntrance:(id)a0;
- (BOOL)shouldHideAllBottomBar:(id)a0;
- (void)currentAwemeModelChanged:(id)a0 oldAwemeModel:(id)a1;
- (id)initWithAwemeModels:(id)a0;
- (void).cxx_destruct;
- (void)setDataSource:(id)a0;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
