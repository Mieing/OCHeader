@class UIButton;

@interface AWELandscapeScreenCastElement : AWELandscapeInteractionBaseElement

@property (retain, nonatomic) UIButton *screenCastButton;

- (void)setAppear:(BOOL)a0;
- (void)trackShowScreenCastButton;
- (void)handleClickScreenCast;
- (void)updateState:(long long)a0;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)viewDidLoad;

@end
