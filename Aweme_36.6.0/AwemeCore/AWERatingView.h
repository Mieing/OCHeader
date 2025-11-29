@class NSArray, NSString, AWERatingViewRenderConfig, UIView;
@protocol AWERatingViewDelegate;

@interface AWERatingView : UIView <AWERatingStartViewDelegate>

@property (copy, nonatomic) NSArray *starViews;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) AWERatingViewRenderConfig *config;
@property (readonly, nonatomic) double rate;
@property (copy, nonatomic) id /* block */ onRateChange;
@property (weak, nonatomic) id<AWERatingViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onStarViewTaped:(id)a0 tapPercentage:(double)a1;
- (id)createStarsWithConfig:(id)a0 rate:(double)a1;
- (id)generateCAGradientLayerIfNeed:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 config:(id)a1 rate:(double)a2;
- (void)updateWithRate:(double)a0;
- (void).cxx_destruct;
- (void)updatePosition;

@end
