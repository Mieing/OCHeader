@class NSString, UIViewController;
@protocol AWEAdLongVideoContainerViewController, AWERelatedAdLongVideoAdapter;

@interface AWERVCommerceController : AWERVBaseController <AWEAdRelatedLongVideoDelegate, AWERVCommerceControllerProtocol>

@property (retain, nonatomic) UIViewController<AWEAdLongVideoContainerViewController> *adLongVideoContainerViewController;
@property (retain, nonatomic) id<AWERelatedAdLongVideoAdapter> adLongVideoAdapter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isAdContainerPauseVideoWhenRefreshModel;

- (void)adContainerViewShowCompleted;
- (void)adLongVideoBackButtonDidClick;
- (void)enterFullScreenByClick:(BOOL)a0;
- (void)resumeBackgroundPlayer;
- (void)pauseBackgroundPlayer;
- (void)adPlayerWillStartPlay;
- (void)refreshWithAwemeModel:(id)a0;
- (void)updateAdVideoContainer;
- (BOOL)canShowAdVideoContainerWithModel:(id)a0;
- (void)viewWillAppearAfterUpdateContentSize:(BOOL)a0;
- (void)viewDidAppearAfter;
- (void)refreshWithUIAfterVideoPlayerFrameUpdate;
- (void)didRefreshWithUI;
- (void)enterFullScreenWithEnterMethod:(id)a0 createPageContext:(id)a1 holder:(id)a2;
- (BOOL)shouldDisableResumeVideoPlayer;
- (void)afterQuitFromLandscapeFeed;
- (void)updateVideoPlayerFrameWhenScrolling:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initialAdLongVideoContainerViewControllerIfNeed;
- (void)tryAddAdVideoContainerView;
- (void).cxx_destruct;
- (void)dealloc;

@end
