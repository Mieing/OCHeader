@class UIView;
@protocol AFDMomentCameraPreviewProtocol;

@interface AFDMomentCameraPreviewGestureRecognizer : UIGestureRecognizer

@property (weak, nonatomic) UIView<AFDMomentCameraPreviewProtocol> *preview;

- (void)p_handleTouchs:(id)a0 withEvent:(id)a1 touchType:(long long)a2;
- (void).cxx_destruct;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (id)initWithPreview:(id)a0;

@end
