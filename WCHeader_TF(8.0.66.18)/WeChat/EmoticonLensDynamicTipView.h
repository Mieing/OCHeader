@class MMTimer, UIImageView, MMUIView, NSArray, MMUILabel;

@interface EmoticonLensDynamicTipView : MMUIView

@property (retain, nonatomic) MMUIView *tipContentView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) MMUILabel *tipLabel;
@property (retain, nonatomic) MMTimer *hiddenTimer;
@property (retain, nonatomic) MMTimer *startTimer;
@property (retain, nonatomic) NSArray *actionTypes;
@property (nonatomic) long long currentIndex;

+ (double)getHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)startPlayWithActionTypes:(id)a0;
- (void)stopAnimation;
- (void)startNextActionAnimation;
- (void)playActionType:(long long)a0 withDuration:(double)a1 isFirstTip:(BOOL)a2;
- (void)layoutSubviews;
- (void)configWithTip:(id)a0 imageList:(id)a1 duration:(double)a2;
- (void)startHiddenViewTimerWithDuration:(double)a0;
- (void)animationDidFinish;
- (void).cxx_destruct;

@end
