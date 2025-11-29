@class UIButton;
@protocol IESLiveCompoundSubscription;

@interface IESLivePKComponentCloseMic : IESLivePKComponent

@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;
@property (retain, nonatomic) UIButton *closeMicButton;
@property (nonatomic) BOOL hasPropEffectInfo;
@property (nonatomic) double baseOffset;

- (void)bindAction;
- (void)showCloseMicPanel;
- (void)componentPlaying;
- (void)componentFinished;
- (void)trackCloseMicButtonClicked;
- (void)handleCloseMicInChorusState;
- (void)monitorClickCloseMicButton:(BOOL)a0;
- (void)onReceivedPKLynxEvent:(long long)a0 extraParams:(id)a1;
- (void)componentInteracting;
- (void)loadCloseMicButton;
- (void)onClickCloseMicButton;
- (void)updateCloseMicButtonHidden:(BOOL)a0;
- (void)updateCloseMicPosition;
- (void)updateCloseMicImageWithIsMute:(BOOL)a0;
- (double)baseOffsetInPlaying;
- (void)showCloseMicToast;
- (void).cxx_destruct;
- (double)topOffset;
- (void)clean;

@end
