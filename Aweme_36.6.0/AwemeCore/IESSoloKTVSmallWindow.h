@class UIView, UIPanGestureRecognizer;
@protocol IESSoloKTVSmallWindowViewProtocol;

@interface IESSoloKTVSmallWindow : UIView

@property (retain, nonatomic) UIPanGestureRecognizer *panGes;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } safeArea;
@property (retain, nonatomic) UIView<IESSoloKTVSmallWindowViewProtocol> *smallWindowView;

- (void)addGestureIfNeed;
- (void)clearSmallWindowView;
- (void)resetPositionIfNeed;
- (void)updateSmallWindowWithView:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)didPan:(id)a0;

@end
