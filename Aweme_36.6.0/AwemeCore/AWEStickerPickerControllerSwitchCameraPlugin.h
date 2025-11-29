@class UIButton, NSString;
@protocol AWEStickerViewLayoutManagerProtocol, ACCRecordSwitchModeService, ACCRecorderViewContainer, ACCStickerPickerService, ACCCameraService, ACCCameraSwapService, ACCLandscapeRecordService;

@interface AWEStickerPickerControllerSwitchCameraPlugin : NSObject <ACCRecordSwitchModeServiceSubscriber, ACCLandscapeRecordServiceSubscriber, AWEStickerPickerControllerPluginProtocol>

@property (retain, nonatomic) UIButton *cameraButton;
@property (weak, nonatomic) id<ACCCameraSwapService> cameraSwapService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (weak, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCStickerPickerService> stickerPickerService;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCLandscapeRecordService> landscapeRecordService;
@property (nonatomic) BOOL buttonShow;
@property (nonatomic) BOOL frameDidUpdate;
@property (weak, nonatomic) id<AWEStickerViewLayoutManagerProtocol> layoutManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)recorderDeviceOrientationChanged:(long long)a0;
- (void)switchModeServiceDidChangeMode:(id)a0 oldMode:(id)a1;
- (void)onDidSwitchToCameraPosition:(long long)a0;
- (void)controllerViewDidLoad:(id)a0;
- (void)controller:(id)a0 willShowOnView:(id)a1;
- (void)controller:(id)a0 willDimissFromView:(id)a1;
- (void)controller:(id)a0 didSelectNewSticker:(id)a1 oldSticker:(id)a2;
- (void)cameraButtonPressed:(id)a0;
- (id)swapCameraButtonImage;
- (void)p_enableCameraButtonForSticker:(id)a0;
- (void)p_configCameraSwapButtonAccessiblity;
- (void)updateCameraSwapButtonVisibility;
- (void).cxx_destruct;
- (id)initWithServiceProvider:(id)a0;

@end
