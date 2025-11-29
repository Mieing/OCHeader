@class UIButton, UIView;

@interface AWERelatedVideoPlayLeftBackElement : AWERelatedVideoPlayBaseElement

@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UIView *accessibilityControlView;

- (void)setHide:(BOOL)a0;
- (void)initializeElement;
- (void)bindEvent;
- (void)voiceOverStatusChange;
- (void)addAccessibilityControlViewIfNeed;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
