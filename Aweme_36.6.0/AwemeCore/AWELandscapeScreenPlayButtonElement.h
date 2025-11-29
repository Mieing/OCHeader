@class UIButton, UIImageView;

@interface AWELandscapeScreenPlayButtonElement : AWELandscapeInteractionBaseElement

@property (retain, nonatomic) UIButton *screenPlayButton;
@property (retain, nonatomic) UIButton *screenBackwardButton;
@property (retain, nonatomic) UIButton *screenForwardButton;
@property (retain, nonatomic) UIImageView *loadingView;

- (void)onPlayer:(id)a0 didChangePlaybackStateWithAction:(long long)a1;
- (void)didEnterLandscape;
- (BOOL)shouldResponseGestureRecognizer:(id)a0;
- (BOOL)handleResponseGestureRecognizer:(id)a0;
- (BOOL)shouldReceiveGestureRecognizer:(id)a0 touch:(id)a1;
- (void)bindEvents;
- (void)setupSwitchButtonWithModel:(id)a0;
- (void)handleLoadingAnimation:(BOOL)a0;
- (void)handleClickScreenPlayButtonWithMethod:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)viewDidLoad;
- (void)setupUI;
- (void)updatePlayState;

@end
