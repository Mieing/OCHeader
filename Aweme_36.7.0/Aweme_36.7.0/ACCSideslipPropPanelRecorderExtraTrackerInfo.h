@class NSString, AWEVideoPublishViewModel;
@protocol ACCSideslipPropPanelService, ACCSideslipPropService, IESServiceProvider, ACCPropPickerService, ACCCameraService, ACCSideslipPropPanelTrackerService;

@interface ACCSideslipPropPanelRecorderExtraTrackerInfo : NSObject <ACCSideslipPropPanelExtraTrackerInfoProtocol>

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (weak, nonatomic) id<ACCSideslipPropPanelService> sideslipPropPanelService;
@property (weak, nonatomic) id<ACCSideslipPropService> sideslipPropService;
@property (weak, nonatomic) id<ACCPropPickerService> propPickerService;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (weak, nonatomic) id<ACCSideslipPropPanelTrackerService> sideslipTrackerService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)injectExtraTrackerInfo:(id)a0;
- (id)initWithServiceProvider:(id)a0 repository:(id)a1;
- (void).cxx_destruct;

@end
