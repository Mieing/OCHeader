@class NSString, UIView, AWEPOIUGCPictureAlbumTabView, AWEVideoPublishViewModel;
@protocol ACCRecordSwitchModeService, ACCRecorderViewContainer, ACCCameraService;

@interface AWEPOIUGCPictureAlbumComponent : ACCFeatureComponent <ACCRecordSwitchModeServiceSubscriber, ACCCameraLifeCircleEvent>

@property (retain, nonatomic) AWEPOIUGCPictureAlbumTabView *pictureAlbumView;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) UIView *tabbarBackgroundView;
@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (nonatomic) BOOL retryEnterAfterExitFinished;
@property (nonatomic) BOOL enterAlbumHasTracked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidAppear;
- (void)componentDidDisappear;
- (void)switchModeServiceWillChangeToMode:(id)a0 oldMode:(id)a1;
- (void)switchModeServiceDidChangeMode:(id)a0 oldMode:(id)a1;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (id)rootVC;
- (void)p_close;
- (void)bindServices:(id)a0;
- (void)buildChildViews;
- (void)enterPictureAlbumMode;
- (id)buildPictureAlbumView;
- (void)trackShootButtonShowIfNeeded;
- (void)jumpToQuickShoot;
- (void)exitPictureAlbumMode;
- (void)trackEnterPOIAlbumIfNeeded;
- (void).cxx_destruct;

@end
