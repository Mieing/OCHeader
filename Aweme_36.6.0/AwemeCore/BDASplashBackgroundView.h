@class NSDictionary, UIVisualEffectView, UIView, BDImageView;

@interface BDASplashBackgroundView : UIView

@property (nonatomic) BOOL isComplete;
@property (copy, nonatomic) NSDictionary *config;
@property (nonatomic) long long style;
@property (nonatomic) struct CGPoint { double x; double y; } videoCenterPoint;
@property (retain, nonatomic) BDImageView *bgImageView;
@property (retain, nonatomic) BDImageView *squareImageView;
@property (retain, nonatomic) BDImageView *streamImageView;
@property (retain, nonatomic) BDImageView *labelImageView;
@property (retain, nonatomic) UIVisualEffectView *blurView;
@property (retain, nonatomic) UIView *cardView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 config:(id)a1;
- (void)addSubviews;
- (void)loadAnimation;
- (void)setVideoCenter:(struct CGPoint { double x0; double x1; })a0;
- (id)getVideoFrame;
- (id)getVideoWidthAndHight;
- (void)addSubviewsForStyle2;
- (void)setupSubviewsForStyle3;
- (void)addSubviewsForStyle1;
- (void).cxx_destruct;
- (void)refreshUI;

@end
