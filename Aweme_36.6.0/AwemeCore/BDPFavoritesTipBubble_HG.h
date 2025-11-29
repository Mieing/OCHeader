@class NSTimer, NSString, UITapGestureRecognizer, CAShapeLayer, UIButton, BDPTimingEvent, UILabel, UIColor;
@protocol BDPFavoritesTipBubbleDelegate_HG;

@interface BDPFavoritesTipBubble_HG : UIView {
    UIColor *_borderColor;
    double _borderWidth;
    CAShapeLayer *_borderLayer;
    double _radius;
    double _triangleWidth;
    double _triangleHeight;
    double _triangleRadius;
    UILabel *_tipLabel;
    UIButton *_closeButton;
    NSTimer *_hideTimer;
    BDPTimingEvent *_trackerTiming;
}

@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (copy, nonatomic) NSString *tipString;
@property (nonatomic) double reverseOffsetX;
@property (weak, nonatomic) id<BDPFavoritesTipBubbleDelegate_HG> delegate;
@property (copy, nonatomic) NSString *uniqueIDFullString;

- (void)closeBtnClicked:(id)a0;
- (void)showOnView:(id)a0;
- (void)tapGestureAction:(id)a0;
- (void)layoutBubbleWithOrigin:(struct CGPoint { double x0; double x1; })a0 reverseOffsetX:(double)a1;
- (id)initWithDelegate:(id)a0 tipString:(id)a1;
- (void)showOnView:(id)a0 withOrigin:(struct CGPoint { double x0; double x1; })a1 reverseOffsetX:(double)a2;
- (void).cxx_destruct;
- (void)hide;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
