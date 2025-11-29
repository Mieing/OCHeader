@class UILabel, NSTimer, UIView;

@interface AWERelatedVideoPlayLagLoadElement : AWERelatedVideoPlayBaseElement

@property (retain, nonatomic) UIView *lagLoadingView;
@property (retain, nonatomic) UILabel *lagLoadingLabel;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) NSTimer *networkSpeedTimer;
@property (retain, nonatomic) NSTimer *delayLoadingTimer;

- (void)setHide:(BOOL)a0;
- (void)initializeElement;
- (void)bindEvent;
- (void)startLagLoading:(BOOL)a0;
- (void)stopLagLoading;
- (void)resetDelayLoadingTimer:(BOOL)a0;
- (id)getLoadingLayerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 lineWidth:(double)a1 lineColor:(struct CGColor { } *)a2;
- (id)getLoadingAnimation;
- (void)setNetworkSpeed;
- (void)resetNetworkSpeedTimer;
- (id)networkSpeedString;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;
- (void)dealloc;

@end
