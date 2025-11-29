@class NSArray, UIImageView, NSString, UILabel;

@interface WCFinderLiveNowView : UIView <LOTColorValueDelegate, WCFinderLiveIconAnimationProtocol>

@property (nonatomic) long long type;
@property (nonatomic) double kMidInterval;
@property (retain, nonatomic) NSArray *iconImageArray;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iconImageWithType:(long long)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewType:(long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewType:(long long)a1 text:(id)a2;
- (void)initViewWithType:(long long)a0;
- (void)prepareForReuse;
- (void)initViewWithType:(long long)a0 text:(id)a1;
- (void)updateColorSchemeWith:(long long)a0 changeColor:(BOOL)a1;
- (void)updateIconView;
- (void)updateImage:(id)a0;
- (void)updateText:(id)a0;
- (void)sizeToFit;
- (void)fitLabelWithMaxWidth:(double)a0;
- (void)changeType:(long long)a0;
- (void)changeType:(long long)a0 changeColor:(BOOL)a1;
- (void)setMiddleInterval:(double)a0;
- (struct CGColor { } *)colorForFrame:(double)a0 startKeyframe:(double)a1 endKeyframe:(double)a2 interpolatedProgress:(double)a3 startColor:(struct CGColor { } *)a4 endColor:(struct CGColor { } *)a5 currentColor:(struct CGColor { } *)a6;
- (void)willMoveToWindow:(id)a0;
- (void)willMoveToSuperview:(id)a0;
- (void)layoutSubviews;
- (void)setHidden:(BOOL)a0;
- (void)startLiveAnimation;
- (void)_startLiveAnimation;
- (void)viewDidClick;
- (id)accessibilityLabel;
- (double)leftInnerInset;
- (double)rightInnerInset;
- (void).cxx_destruct;

@end
