@class NSArray, ACCBarItem, NSDictionary, _TtC9CameraKit10CameraView, NSString, UIButton;
@protocol ACCRecordSwitchModeService, ACCRecordPropService, ACCRecorderViewContainer, ACCAdvancedRecordSettingService, ACCRecordSystemLivePhotoService, ACCRecordFlowService, ACCCameraService, ACCRecordFrameRatioService;

@interface ACCRecordFrameRatioComponent : ACCFeatureComponent <ACCRecordSwitchModeServiceSubscriber, ACCRecordPropServiceSubscriber, ACCRecordFlowServiceSubscriber, ACCCreativePathMessage, ACCCameraSystemLivePhotoSubscriber>

@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCAdvancedRecordSettingService> advanceSettingService;
@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (retain, nonatomic) id<ACCRecordFlowService> flowService;
@property (retain, nonatomic) id<ACCRecordFrameRatioService> frameRatioService;
@property (retain, nonatomic) id<ACCRecordSystemLivePhotoService> systemLivePhotoService;
@property (weak, nonatomic) _TtC9CameraKit10CameraView *cameraView;
@property (retain, nonatomic) NSArray *manageMode;
@property (retain, nonatomic) ACCBarItem *barItem;
@property (retain, nonatomic) UIButton *cameraFrameRatioButton;
@property (retain, nonatomic) NSDictionary *recordModeFrameRatioDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentWillAppear;
- (void)switchModeServiceDidChangeMode:(id)a0 oldMode:(id)a1;
- (void)flowServiceStateDidChanged:(unsigned long long)a0 preState:(unsigned long long)a1;
- (void)flowServiceWillBeginTakePicture;
- (void)flowServiceWillEnterNextPageWithMode:(id)a0;
- (void)cameraSystemLivePhotoEnableStatusChanged:(BOOL)a0;
- (void)propServiceWillApplyProp:(id)a0 propSource:(long long)a1;
- (void)propServiceDidApplyProp:(id)a0 success:(BOOL)a1;
- (void)componentDidMount;
- (void)componentDidUnmount;
- (unsigned long long)preferredLoadPhase;
- (void)creativePathPageDidAppear:(unsigned long long)a0;
- (void)bindServices:(id)a0;
- (void)sendFrameRatioClickEvent;
- (BOOL)currentIsSupportNewFrameRatio;
- (void)updateCurrentModeFrameRatio;
- (void)loadNewFrameRatio;
- (void)configFrameRatioBarItem;
- (void)configRecordModeFrameRatioModel;
- (id)createBarItemTitleView;
- (BOOL)needShowCameraFrameBarItem;
- (id)getCurrentModeExtraInfoVariableFrameModel;
- (void)updateTrackFrameRatioWithRatio3_4:(BOOL)a0;
- (void)updateSideBarItemStatusWithFrame3_4:(BOOL)a0;
- (void)updateButtonAccessibilityLabelWithFrame3_4:(BOOL)a0;
- (BOOL)needManage:(id)a0;
- (BOOL)shouldAddCorner;
- (void).cxx_destruct;

@end
