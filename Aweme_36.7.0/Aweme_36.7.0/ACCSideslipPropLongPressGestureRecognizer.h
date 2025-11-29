@class UIView;
@protocol ACCLightningCaptureButtonAnimationProtocol, ACCShootSourceService;

@interface ACCSideslipPropLongPressGestureRecognizer : UILongPressGestureRecognizer

@property (nonatomic) BOOL deliveryTouchEnabled;
@property (weak, nonatomic) UIView<ACCLightningCaptureButtonAnimationProtocol> *recordButton;
@property (weak, nonatomic) id<ACCShootSourceService> shootSourceService;

- (void).cxx_destruct;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;

@end
