@class NSString;

@interface AWERVControllerManager : AWEShellControllerManager <AWERVControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)player:(id)a0 didChangePlaybackToAction:(unsigned long long)a1;
- (id)classNameArray;
- (BOOL)shouldPreventPause;
- (void)startInit;
- (void)refreshWithAwemeModel:(id)a0;
- (void)willEnterFullScreenWithEnterMethod:(id)a0;
- (void)slidingToRelatedVideoTap;
- (void)slidingToCommentTap;
- (void)didConfigPageContext;
- (void)afterViewDidLoad;
- (void)viewWillAppearAfterUpdateContentSize:(BOOL)a0;
- (void)setupPageBeforeSetupUI;
- (void)backButtonDidClicked:(id)a0;
- (void)didSetupHalfPageUI;
- (void)setupUIBeforeAddContainerVC;
- (void)refreshWithUIAfterVideoPlayerFrameUpdate;
- (void)refreshWithUIAfterUpdateContentSize;
- (void)didRefreshWithUI;
- (void)willRefreshWithAwemeModel:(id)a0;
- (BOOL)shouldUseCustomRefreshPlayerTime;
- (void)didRefreshWithAwemeModel:(id)a0;
- (void)enterFullScreenWithEnterMethod:(id)a0 createPageContext:(id)a1 holder:(id)a2;
- (BOOL)shouldDisableResumeVideoPlayer;
- (void)prepareToBack;
- (void)afterQuitFromLandscapeFeed;
- (void)player:(id)a0 willPlayNextVideo:(id)a1 isMixVideo:(BOOL)a2;
- (BOOL)shouldBlockBackAction:(BOOL)a0;
- (void)scrollViewWillDidScroll:(id)a0;
- (void)updateVideoPlayerFrameWhenScrolling:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidScrollAfter:(id)a0;
- (void)didMoveToParentViewController:(id)a0;
- (void)appWillResignActive:(id)a0;
- (void)appDidBecomeActive:(id)a0;
- (void)didInit;

@end
