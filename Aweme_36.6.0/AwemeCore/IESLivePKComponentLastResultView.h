@class UIButton;
@protocol IESLiveSubscription;

@interface IESLivePKComponentLastResultView : IESLivePKComponent

@property (retain, nonatomic) UIButton *lastResultButton;
@property (retain, nonatomic) id<IESLiveSubscription> disposable;

- (void)onButtonClicked;
- (void)bindAction;
- (void)componentContainerFrameChanged;
- (void)componentPlaying;
- (void)componentFinished;
- (void)componentInteracting;
- (void)componentDidClear:(BOOL)a0;
- (void)refreshLastResultButtonFrame;
- (void).cxx_destruct;
- (void)setUpView;
- (void)clean;

@end
