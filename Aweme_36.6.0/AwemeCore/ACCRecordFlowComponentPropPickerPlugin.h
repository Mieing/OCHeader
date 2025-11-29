@class AWERecordLoadingView, NSString;
@protocol ACCRecordButtonService, ACCRecordPropService, ACCRecordSwitchModeService, ACCRecorderViewContainer, ACCShootSourceService, AWERecordFlowSourceService, ACCFeatureComponent, ACCRecordFlowService, ACCCameraService, IESServiceProvider;

@interface ACCRecordFlowComponentPropPickerPlugin : NSObject <ACCRecordFlowServiceSubscriber, ACCFeatureComponentPlugin, ACCServiceBindable>

@property (class, readonly, nonatomic) id hostIdentifier;

@property (retain, nonatomic) id<IESServiceProvider> serviceProvider;
@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (retain, nonatomic) id<ACCRecordFlowService> flowService;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordButtonService> recordButtonService;
@property (retain, nonatomic) id<ACCShootSourceService> shootSourceService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (weak, nonatomic) id<AWERecordFlowSourceService> flowControlService;
@property (retain, nonatomic) AWERecordLoadingView *loadingView;
@property (nonatomic) BOOL applicationResignActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCFeatureComponent> component;

- (void)flowServiceStateDidChanged:(unsigned long long)a0 preState:(unsigned long long)a1;
- (void)flowServiceDidAddPictureToVideo:(id)a0;
- (void)flowServiceDidAddFragment:(id)a0;
- (id)hostComponent;
- (void)bindServices:(id)a0;
- (void)executePropPanelRecordBeganTask;
- (void)prepareForExecutePropPanelRecord;
- (void)updateCountDownTrackData:(BOOL)a0;
- (void)applicationWillResignActive:(id)a0;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive:(id)a0;
- (void)dealloc;

@end
