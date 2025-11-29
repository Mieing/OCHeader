@protocol ACCCameraSwapService;

@interface AWEStickerApplySwitchCameraPositionHandler : AWEStickerApplyBaseHandler

@property (weak, nonatomic) id<ACCCameraSwapService> cameraSwapService;

- (void)camera:(id)a0 willApplySticker:(id)a1 propSource:(long long)a2;
- (void)autoSwapCameraFront;
- (void)ar_prop_rear;
- (void).cxx_destruct;

@end
