@class NSTimer, NSArray, AWEVideoProductRollingLabelView;

@interface AWEVideoProductRollingView : UIView

@property (nonatomic) double showTime;
@property (nonatomic) double animationTime;
@property (nonatomic) long long indexNow;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } topRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } middleRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } btmRect;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) AWEVideoProductRollingLabelView *currentView;
@property (retain, nonatomic) AWEVideoProductRollingLabelView *nextView;
@property (retain, nonatomic) AWEVideoProductRollingLabelView *tmpCurrentView;
@property (retain, nonatomic) AWEVideoProductRollingLabelView *tmpNextView;
@property (nonatomic) long long direction;
@property (retain, nonatomic) NSArray *dataArray;
@property (copy, nonatomic) id /* block */ block;

- (void)btnClick;
- (void)setViewInfo;
- (void)executeAnimation;
- (id)initWithDirection:(long long)a0 showTime:(double)a1 animationTime:(double)a2;
- (void)setupSubViews;
- (void)stopTimer;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)stopAnimation;
- (void)resumeAnimation;
- (void)pauseAnimation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (double)preferredViewHeight;

@end
