@class NSString;

@interface AWEGokuModules : NSObject <AWEGokuBridgePlayVideoViewControllerMessage, AWEGokuBridgePlayInteractionViewControllerMessage, AWEGokuBridgeFeedViewControllerMessage, AWEGokuBridgeFeedTableViewMessage, AWEGokuBridgeDetailTableViewMessage, AWEGokuBridgeTrackerMessage, AWEGokuBridgeNearbyTableViewMessage, AWEGokuBridgeLivePreStreamMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedGokuModules;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)processAwesomeSplashModel:(id)a0;
- (void)didChangePlaybackStateWithAction:(id)a0;
- (void)awemePlayerWillLoopPlayingWith:(id)a0;
- (void)willDisplayCellWithContext:(id)a0;
- (void)didEndDisplayingCellWithContext:(id)a0;
- (void)detailTableVCWillDisplayCellWithContext:(id)a0;
- (void)detailTableVCWillDisappear:(id)a0;
- (void)detailTableVCDidEndDisplayCellBeforeResetWithContext:(id)a0;
- (void)liveStreamPrepareForDisPlay:(id)a0;
- (void)playWith:(id)a0;
- (void)pauseWith:(id)a0;
- (void)stopWith:(id)a0;
- (void)playerDidUpdateWith:(id)a0;
- (void)playerWillLoopPlayingWith:(id)a0;
- (void)didChangeStallState:(id)a0;
- (void)didChangePlaybackStateOnUserTapInteraction:(id)a0;
- (void)vibrationMaterialDownloadSuccess:(id)a0;
- (void)vibrationEngineStartSuccess:(id)a0;
- (void)viewWillAppearWith:(id)a0;
- (void)viewDidAppearWith:(id)a0;
- (void)viewDidDisappearWith:(id)a0;
- (void)gokuSetModelWith:(id)a0;
- (void)gokuSetHideWith:(id)a0;
- (void)closeAdOperationGuideWith:(id)a0;
- (void)vc_viewDidAppearWith:(id)a0;
- (void)refreshTableViewController:(id)a0;
- (void)viewControllerDidRenderFirstFrame:(id)a0;
- (void)horizontalVideoTrackVideoBreakWith:(id)a0;
- (void)willDisplayNearByCellWithContext:(id)a0;
- (void)didEndDisplayingNearByCellWithContext:(id)a0;
- (void)didSelectNearByCellWithContext:(id)a0;
- (void)liveStreamOnUserEnterLiveRoom:(id)a0;
- (void)liveStreamPlayerStartToPlay:(id)a0;
- (void)liveStreamOnUserQuitLiveRoom:(id)a0;
- (void)liveStreamViewReset:(id)a0;
- (void)liveStreamViewDidAppear:(id)a0;
- (void)liveStreamViewDidDisAppear:(id)a0;
- (void)reset:(id)a0;
- (void)prepareForDisplay:(id)a0;
- (id)init;
- (void)dealloc;

@end
