@class AWEHotSpotBlurView, NSString, CADisplayLink, UIFont, UIColor, DUXBaseScrollView, DUXBaseLabel;

@interface AWEHotSpotMarqueeLabel : UIView

@property (retain, nonatomic) DUXBaseScrollView *scrollView;
@property (retain, nonatomic) DUXBaseLabel *scrollingLabel;
@property (retain, nonatomic) AWEHotSpotBlurView *leftBlurView;
@property (retain, nonatomic) AWEHotSpotBlurView *rightBlurView;
@property (retain, nonatomic) DUXBaseLabel *holderLabel;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) double currentX;
@property (nonatomic) double textWidth;
@property (nonatomic) double textAndSeparationWidth;
@property (nonatomic) unsigned long long recordRepeatCount;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) long long textAlignment;
@property (nonatomic) unsigned long long repeatCount;
@property (nonatomic) double speed;
@property (copy, nonatomic) NSString *separationStr;
@property (nonatomic) BOOL needEdgeBlur;

- (void)startScrolling;
- (void)addBlurView;
- (id)initWithText:(id)a0 font:(id)a1 speed:(double)a2;
- (void)pauseScrolling;
- (void)stopScrolling;
- (void).cxx_destruct;
- (id)init;
- (void)defaultConfig;
- (void)dealloc;
- (void)updatePosition;
- (void)setupUI;

@end
