@class UIImageView;
@protocol IESLiveWebPPlayer;

@interface IESLiveIntimateChatHostApplyItemView : UIView

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *animationView;
@property (nonatomic) BOOL enabled;

- (void)didSetAttachingDIContext;
- (void)renderStatus:(long long)a0;
- (void)p_animateWithResourceName:(id)a0;
- (void)renderLinkerUserState:(long long)a0;
- (void).cxx_destruct;
- (void)loadViews;

@end
