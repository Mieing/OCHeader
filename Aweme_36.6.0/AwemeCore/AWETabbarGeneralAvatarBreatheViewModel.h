@class AWETabBarGeneralAvatarBreathView, AWEHPChannelAvatarBreathModel, AWEHPBottomTabUIConfigModel;

@interface AWETabbarGeneralAvatarBreatheViewModel : NSObject

@property (retain, nonatomic) AWEHPBottomTabUIConfigModel *config;
@property (retain, nonatomic) AWEHPChannelAvatarBreathModel *avatarBreathModel;
@property (nonatomic) BOOL isShowing;
@property (retain, nonatomic) AWETabBarGeneralAvatarBreathView *avatarBreathView;
@property (retain, nonatomic) AWETabBarGeneralAvatarBreathView *oldAvatarBreathView;

- (void)showWithAvatarBreathModel:(id)a0;
- (void)hideAvatarView;
- (void)destroyAvatarView;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
