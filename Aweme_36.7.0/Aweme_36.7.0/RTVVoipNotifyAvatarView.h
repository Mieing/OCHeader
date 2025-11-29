@class UIView, UIImageView, CAShapeLayer;
@protocol RTVVoipConfigureManagerInterface, RxInjector;

@interface RTVVoipNotifyAvatarView : UIView

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (retain, nonatomic) CAShapeLayer *notchLayer;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIImageView *frontUserAvatarImageView;
@property (retain, nonatomic) UIImageView *behindUserAvatarImageView;
@property (readonly, nonatomic) id<RTVVoipConfigureManagerInterface> voipConfigureManager;

- (void)rxAwakeFromPropertyInjection;
- (void)__createComponents;
- (void)__layoutComponents;
- (void)renderModel:(id)a0;
- (void)__configureComponents;
- (void)__refreshContentWithUserAvatarURLList:(id)a0;
- (void)__refreshImageView:(id)a0 withBorderWidth:(double)a1 borderColor:(id)a2 cornerRadius:(double)a3;
- (void)__refreshGroupVoipContentWithFrontAvatarURL:(id)a0 behindURL:(id)a1;
- (void)__refreshPairVoipContentUserAvatarURL:(id)a0;
- (void)__refreshPairVoipLayout;
- (void)__refreshGroupVoipLayout;
- (void).cxx_destruct;

@end
