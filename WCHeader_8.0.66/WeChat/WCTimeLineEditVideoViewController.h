@class NSString, WCFinderCreateCoordinator;

@interface WCTimeLineEditVideoViewController : WCEditVideoViewController <WCEditVideoViewControllerDelegate, WCFinderPostViewControllerDelegate, WCFinderCreateCoordinatorDelegate, WCFinderLongVideoChooseHelperDelegate, WCFinderPostEditEntrySnsProtocol>

@property (retain, nonatomic) WCFinderCreateCoordinator *createCoordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showEditVideoViewOn:(id)a0;
- (float)getOutputTime;
- (BOOL)isExceedTimelineTimeLimit;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)postVideoByFinderFromEntrance:(long long)a0;
- (void)_postVideoByFinderWithMMAsset:(id)a0 fromEntrance:(long long)a1;
- (void)_postVideoByFinderWithAVAsset:(id)a0 videoPath:(id)a1 fromEntrance:(long long)a2;
- (void)_prepareAVAssetFromMMAsset:(id)a0 completion:(id /* block */)a1;
- (void)postViewControllerFromVC:(id)a0 postSession:(id)a1;
- (void)postViewControllerCancelPostWithModel:(id)a0;
- (void)postEditMgrSucFromVC:(id)a0 postSession:(id)a1;
- (void)postEditMgrSaveDraftByPostSession:(id)a0;
- (void)postEditMgrFailByPostSession:(id)a0;
- (void)finderCreateAccountSuccess:(id)a0;
- (void)finderRealNameSuccess:(id)a0;
- (void)triggerFinderPostActionWith:(id)a0;
- (void)longVideoChooseHelper:(id)a0 postSession:(id)a1;
- (void).cxx_destruct;

@end
