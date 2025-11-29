@class UIImageView;
@protocol WAEAGLViewGestureDelegate;

@interface WAEAGLView : UIView

@property (nonatomic) int interactionMode;
@property (weak, nonatomic) id<WAEAGLViewGestureDelegate> gestureDelegate;
@property (retain, nonatomic) UIImageView *snapshotImageView;

+ (Class)layerClass;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (id)getImage;
- (void)snapshotBegin;
- (void)snapshotEnd;
- (void).cxx_destruct;

@end
