@class ACCPropViewModel, NSString, ACCCameraMeasureSubscription, AWEStudioRecorderFeaturePropConfig, UIViewController;
@protocol ACCRecorderViewContainer, IESServiceProvider, AWERecordFlowSourceService, ACCCameraService, ACCRecordFlowService, ACCRecorderStickerServiceProtocol, ACCRecordPropService, AWERecordBeautyService, ACCFilterService, ACCRecordUploadButtonService, ACCRecordConfigService, ACCShootSourceService, ACCRecordSwitchModeService, ACCRecordModeFactory, ACCDuetSessionSwtichService, AWEStickerViewLayoutManagerProtocol, ACCRecordTrackService;

@interface AWEStickerApplyHandlerContainer : NSObject <ACCCameraSubscriptionMeasureCapability>

@property (retain, nonatomic) ACCCameraMeasureSubscription *subscription;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (retain, nonatomic) id<ACCRecordFlowService> flowService;
@property (retain, nonatomic) id<ACCRecordConfigService> configService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCRecordTrackService> trackService;
@property (retain, nonatomic) id<ACCFilterService> filterService;
@property (retain, nonatomic) id<IESServiceProvider> serviceProvider;
@property (retain, nonatomic) id<ACCRecordModeFactory> modeFactory;
@property (retain, nonatomic) id<ACCRecordUploadButtonService> uploadButtonService;
@property (retain, nonatomic) AWEStudioRecorderFeaturePropConfig *featureConfig;
@property (retain, nonatomic) id<AWERecordFlowSourceService> flowSourceService;
@property (retain, nonatomic) ACCPropViewModel *propViewModel;
@property (weak, nonatomic) UIViewController *containerViewController;
@property (weak, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<AWEStickerViewLayoutManagerProtocol> layoutManager;
@property (nonatomic) BOOL isExposePanelEnabled;
@property (readonly, nonatomic) id<ACCRecorderStickerServiceProtocol> stickerService;
@property (readonly, nonatomic) id<ACCShootSourceService> shootSourceService;
@property (readonly, nonatomic) id<ACCDuetSessionSwtichService> duetSessionSwtichService;
@property (readonly, nonatomic) id<AWERecordBeautyService> beautyService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidAppear;
- (void)componentDidDisappear;
- (void)camera:(id)a0 didTakeAction:(long long)a1 error:(id)a2 data:(id)a3;
- (void)camera:(id)a0 didRecvMessage:(id)a1;
- (void)didSelectNewSticker:(id)a0 oldSticker:(id)a1;
- (id)initWithCameraService:(id)a0 propService:(id)a1 flowService:(id)a2 configService:(id)a3 switchModeService:(id)a4 trackService:(id)a5 filterService:(id)a6 serviceProvider:(id)a7 propViewModel:(id)a8 containerViewController:(id)a9 viewContainer:(id)a10 modeFactory:(id)a11 stickerService:(id)a12 shootSourceService:(id)a13 uploadButtonService:(id)a14 duetSessionSwtichService:(id)a15 beautyService:(id)a16 featureConfig:(id)a17 flowSourceService:(id)a18;
- (void)camera:(id)a0 willApplySticker:(id)a1 propSource:(long long)a2;
- (void)camera:(id)a0 didApplySticker:(id)a1 success:(BOOL)a2;
- (id)costWithTopN:(long long)a0 forSelector:(SEL)a1;
- (void).cxx_destruct;
- (void)addHandler:(id)a0;

@end
