@interface CameraKit.CameraPreviewView : UIView <CameraKit.CameraPreviewProtocol> {
    void /* function */ touchFilter;
    void /* unknown type, empty encoding */ camera;
}

@property (nonatomic) BOOL enableInteraction;
@property (nonatomic) BOOL shouldHandleTouch;
@property (nonatomic, copy) id /* block */ touchFilter;

- (void).cxx_destruct;
- (void)setCamera:(id)a0;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;

@end
