@class UIColor, BNGradientCoverView, CADisplayLink, UIFont, UILabel, UIView, NSString;
@protocol AWEMusicCycleLoopLabelDelegate;

@interface AWEMusicCycleLoopLabel : UIView {
    BOOL _isSuspendLoop;
}

@property (nonatomic) BOOL isLoopable;
@property (nonatomic) BOOL isLooping;
@property (nonatomic) double progress;
@property (nonatomic) double labelWidth;
@property (nonatomic) double lastTime;
@property (retain) CADisplayLink *displayLink;
@property (retain, nonatomic) UILabel *mainLabel;
@property (retain, nonatomic) UILabel *cycleLabel;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) BNGradientCoverView *coverView;
@property (nonatomic) BOOL isSuspendLoop;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIFont *font;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long numberOfLines;
@property (retain, nonatomic) UIColor *shadowColor;
@property (nonatomic) struct CGSize { double x0; double x1; } shadowOffset;
@property (nonatomic) double speed;
@property (nonatomic) double space;
@property (nonatomic) double gradientRight;
@property (nonatomic) double gradientLeft;
@property (nonatomic) BOOL shouldCirculate;
@property (weak, nonatomic) id<AWEMusicCycleLoopLabelDelegate> delegate;

- (void)startLoop;
- (void)pauseLoop;
- (void)stopLoop;
- (void)clearLoop;
- (void)resetLoop;
- (void)onDisplayLink;
- (void)buildDisplayLink;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void)setup;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
