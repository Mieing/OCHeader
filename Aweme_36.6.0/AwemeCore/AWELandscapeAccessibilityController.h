@class UIView;

@interface AWELandscapeAccessibilityController : AWELandscapeInteractionBaseController

@property (retain, nonatomic) UIView *actionView;

- (void)changeAccessibilityStatus;
- (void)updateAccessibilityLabelWithState:(long long)a0;
- (void)updateState:(long long)a0;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)viewDidLoad;
- (void)dealloc;

@end
