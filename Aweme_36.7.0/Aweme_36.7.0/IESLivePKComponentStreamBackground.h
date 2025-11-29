@class UIImageView, NSString;

@interface IESLivePKComponentStreamBackground : IESLivePKComponent <HTSLiveStreamPlayerAction>

@property (retain, nonatomic) UIImageView *backgroundImage;
@property (retain, nonatomic) UIImageView *upBackgroundImage;
@property (retain, nonatomic) UIImageView *downBackgroundImage;
@property (nonatomic) long long bgSetting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateBackgroundImage:(id /* block */)a0;
- (void)componentDidLoad;
- (void)componentContainerFrameChanged;
- (void)handleBattleBg:(id)a0 topImage:(id)a1 bottomImage:(id)a2;
- (void)playerDidEndplayInSmallWindow;
- (void)setCameraCornerHidden:(BOOL)a0;
- (void)componentPlaying;
- (void)componentPunishing;
- (void)componentFinished;
- (id)anchorBg;
- (id)audienceTopBg;
- (id)audienceBottomBg;
- (void)updateTopBackgroundImage:(id /* block */)a0 bottomImageBlock:(id /* block */)a1;
- (void)componentInteracting;
- (void)updateStreamBackground;
- (void)loadStreamBackground;
- (void).cxx_destruct;
- (void)dealloc;
- (void)clean;

@end
