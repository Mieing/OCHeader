@class UILabel, UIView;

@interface AWEScrollStringLabel : UIView

@property (nonatomic) double labelHeight;
@property (retain, nonatomic) UILabel *leftLabel;
@property (retain, nonatomic) UILabel *rightLabel;
@property (nonatomic) struct CGSize { double width; double height; } labelActualSize;
@property (nonatomic) BOOL shouldScroll;
@property (nonatomic) unsigned long long displayType;
@property (nonatomic) double animationWidth;
@property (nonatomic) double orignalWidth;
@property (nonatomic) BOOL useFixedLyricScollMargin;
@property (retain, nonatomic) UIView *loopContainerView;
@property (nonatomic) BOOL enableLabelTitleTruncation;
@property (nonatomic) unsigned long long scrollStringAnimationType;
@property (nonatomic) BOOL enableTitleAlignmentCenter;
@property (nonatomic) BOOL hdrEnabled;
@property (nonatomic) double labelWidth;

- (void)configWithTitleWithTextAlignCenter:(id)a0 titleColor:(id)a1 font:(id)a2 contentSize:(struct CGSize { double x0; double x1; })a3;
- (void)updateTextFont:(id)a0;
- (void)updateTextColor:(id)a0;
- (void)updateSubviewsLayout;
- (void)startAnimationWithDuration:(double)a0;
- (void)configWithTitleWithTextAlignCenter:(id)a0 titleColor:(id)a1 fontSize:(double)a2 isBold:(BOOL)a3 contentSize:(struct CGSize { double x0; double x1; })a4;
- (id)initWithHeight:(double)a0 type:(unsigned long long)a1;
- (void)configWithTitleWithTextAlignLeft:(id)a0 titleColor:(id)a1 font:(id)a2 contentSize:(struct CGSize { double x0; double x1; })a3;
- (void)startAnimationWithSpeed:(double)a0;
- (void)configWithTitle:(id)a0 titleColor:(id)a1 fontSize:(double)a2 isBold:(BOOL)a3 minimumItemWidth:(double)a4;
- (void)configWithTitle:(id)a0 titleColor:(id)a1 fontSize:(double)a2 isBold:(BOOL)a3;
- (void)configWithTitle:(id)a0 titleColor:(id)a1 font:(id)a2 minimumItemWidth:(double)a3;
- (void)updateLeftLabelFrameForAlignmentCenter;
- (void)showShadowWithOffset:(struct CGSize { double x0; double x1; })a0 color:(id)a1 radius:(double)a2;
- (void)configWithLoopContainerViewHeight:(double)a0;
- (void)configWithTitle:(id)a0 titleColor:(id)a1 font:(id)a2;
- (void)configForMVWithTitle:(id)a0 titleColor:(id)a1 fontSize:(double)a2 isBold:(BOOL)a3;
- (id)currentLabelText;
- (void)updateTextLabelEnabled:(BOOL)a0;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)stopAnimation;
- (void)resumeAnimation;
- (void)pauseAnimation;
- (id)initWithHeight:(double)a0;

@end
