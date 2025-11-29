@class UIButton;

@interface AWELandscapeFeedBackButtonElement : AWELandscapeInteractionBaseElement

@property (retain, nonatomic) UIButton *feedBackButton;
@property (nonatomic) long long state;

- (void)showScreenCastView:(BOOL)a0 showFeedBack:(BOOL)a1;
- (void)handleClickFeedBackButton;
- (void)updateState:(long long)a0;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)viewDidLoad;

@end
