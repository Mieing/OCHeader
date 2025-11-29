@class NSString, UIImageView, LOTAnimationView, UIView;

@interface AWETeenPlayInteractionUserAvatarElement : AWETeenPlayInteractionBaseElement <CAAnimationDelegate>

@property (retain, nonatomic) UIImageView *userAvatarView;
@property (retain, nonatomic) UIImageView *xiguaSignView;
@property (retain, nonatomic) UIView *subscribePromptView;
@property (retain, nonatomic) LOTAnimationView *subscribeAnimationView;
@property (nonatomic) BOOL isRequesting;
@property (nonatomic) BOOL isPlaySubscribe;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initializeElement;
- (void)p_subscribe:(BOOL)a0;
- (id)getTitleAction:(id)a0;
- (void)p_updateUserAvatar;
- (void)p_playSubscribe:(BOOL)a0;
- (void)p_playUnSubscribe;
- (void)p_showSubscribeGuide;
- (void)onUserAvatarViewClicked;
- (void)onSubscribePromptViewClicked;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)viewDidLoad;

@end
