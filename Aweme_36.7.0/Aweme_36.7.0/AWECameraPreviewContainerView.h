@protocol VERecorderPublicProtocol;

@interface AWECameraPreviewContainerView : UIView <CameraKit.CameraPreviewProtocol>

@property (weak, nonatomic) id<VERecorderPublicProtocol> camera;
@property (nonatomic) BOOL enableInteraction;
@property (nonatomic) BOOL shouldHandleTouch;
@property (copy, nonatomic) id /* block */ touchFilter;

- (void)p_handleTouchs:(id)a0 withEvent:(id)a1 touchType:(long long)a2;
- (void).cxx_destruct;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;

@end
