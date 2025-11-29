@class AWELandscapeChapterViewController, AWELandscapeLVideoHightLightPanelViewController, AWELandscapeSplitScreenDataManager, AWELandscapeCommentViewController, UIView, NSString, AWELandscapeDetailPanelViewController, AWELandscapeAuthorViewController, AWELandscapeMixViewController, AWELandscapeCoCreatorsViewController, AWEAwemeModel, AWELandscapePageContext, AWELandscapeLVSelectEpisodeViewController, AWELandscapeFeedViewModel, UIPanGestureRecognizer;
@protocol AWEAwemePlayInteractionRouterProtocol, AWEAwemePlayInteractionInteractorProtocol, AWELandscapeSplitScreenDelegate;

@interface AWELandscapeSplitScreenViewController : UIViewController <AWELandscapeSplitScreenContainerDelegate>

@property (nonatomic) long long type;
@property (nonatomic) BOOL isActive;
@property (retain, nonatomic) UIView *dismissView;
@property (retain, nonatomic) AWELandscapeAuthorViewController *authorViewController;
@property (retain, nonatomic) AWELandscapeCommentViewController *commentViewController;
@property (retain, nonatomic) AWELandscapeMixViewController *mixViewController;
@property (retain, nonatomic) AWELandscapeCoCreatorsViewController *coCreatorsViewController;
@property (retain, nonatomic) AWELandscapeDetailPanelViewController *detailViewController;
@property (retain, nonatomic) AWELandscapeLVSelectEpisodeViewController *lvSelectEpisodeViewController;
@property (retain, nonatomic) AWELandscapeChapterViewController *chapterViewController;
@property (retain, nonatomic) AWELandscapeLVideoHightLightPanelViewController *lvideoHighLightViewController;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWELandscapeFeedViewModel *viewModel;
@property (retain, nonatomic) AWELandscapePageContext *pageContext;
@property (retain, nonatomic) id<AWEAwemePlayInteractionRouterProtocol> router;
@property (retain, nonatomic) id<AWEAwemePlayInteractionInteractorProtocol> interactor;
@property (retain, nonatomic) AWELandscapeSplitScreenDataManager *dataManager;
@property (retain, nonatomic) UIPanGestureRecognizer *pan;
@property (nonatomic) double beginTime;
@property (nonatomic) double splitScreenWidth;
@property (weak, nonatomic) id<AWELandscapeSplitScreenDelegate> delegate;
@property (copy, nonatomic) id /* block */ refreshBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)refreshWithModel:(id)a0;
- (id)currentPlayCell;
- (id)initWithPageContext:(id)a0;
- (void)exitLandscapeWithCompletion:(id /* block */)a0;
- (void)followWithCompletion:(id /* block */)a0;
- (void)enterCoCreatorProfile:(id)a0;
- (void)enterAuthorProfile;
- (void)scrollCollectionViewToItemAtIndexPath:(id)a0 model:(id)a1;
- (void)exitSplitScreenWithMethod:(id)a0 completion:(id /* block */)a1;
- (void)enterUserChatPageWithUserModel:(id)a0;
- (void)unFollowWithUserModel:(id)a0 logExtraDict:(id)a1 completion:(id /* block */)a2;
- (void)followWithUserModel:(id)a0 logExtraDict:(id)a1 completion:(id /* block */)a2;
- (void)insertAndScrollCollectionViewToModel:(id)a0;
- (void)showWithType:(long long)a0 model:(id)a1 viewModel:(id)a2;
- (void)trackExitSplitScreenWithMethod:(id)a0;
- (void)dismissSplitScreenView;
- (void)didDismissSplitScreenView;
- (void)showFullPageWithModel:(id)a0;
- (void)setupSplitScreenWidth;
- (void)trackShowPersonalPage;
- (void)trackShowMixVC;
- (void)trackShowLVSelectEpisode;
- (void)trackShowCommentVC;
- (void)trackDismissLVSelectEpisode;
- (void)releaseCommentVCIfNeeded;
- (void)realFollowActionWithCompletion:(id /* block */)a0;
- (void)realFollowActionWithUserModel:(id)a0 logExtraDict:(id)a1 completion:(id /* block */)a2;
- (void)trackFollowWithUserModel:(id)a0 logExtraDict:(id)a1;
- (void)trackEnterAuthorProfile;
- (void)handlePanOnSplitContainer:(id)a0;
- (void)releaseSplitScreenIfNeeded;
- (void).cxx_destruct;
- (void)dealloc;
- (void)loadView;
- (void)setupUI;

@end
