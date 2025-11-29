@class ACCAIGCScrollingTextLabelConfig, NSArray, NSTimer, UILabel;

@interface ACCAIGCScrollingTextLabel : UIView

@property (nonatomic) long long currentIndex;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) double animationInterval;
@property (copy, nonatomic) NSArray *textArray;
@property (retain, nonatomic) ACCAIGCScrollingTextLabelConfig *config;
@property (retain, nonatomic) UILabel *textLabel;

- (void)updateConfig:(id)a0;
- (void)updateToStaticAndSetText:(id)a0;
- (void)setupTextArray:(id)a0;
- (void)stopAnimating;
- (void)startAnimating;
- (void).cxx_destruct;
- (id)init;
- (id)initWithConfig:(id)a0;
- (void)dealloc;
- (void)setupView;
- (void)updateText;

@end
