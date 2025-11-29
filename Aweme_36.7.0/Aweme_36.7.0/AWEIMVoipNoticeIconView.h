@class UIStackView;
@protocol AWEIMUserManagerProtocol;

@interface AWEIMVoipNoticeIconView : UIView

@property (retain, nonatomic) UIStackView *userAvatarsStackView;
@property (nonatomic) double userAvatarsViewHeight;
@property (nonatomic) double userAvatarsViewWidth;
@property (retain, nonatomic) id<AWEIMUserManagerProtocol> userManager;

- (void)renderModel:(id)a0;
- (void)themeReload:(id)a0;
- (BOOL)__isLightTheme;
- (void)__refreshAvatarStackViewWithUserIMIDs:(id)a0;
- (long long)__maxShowAvatarCount;
- (id)__createUserAvatarImageView;
- (id)__avatarBoarderColor;
- (void)__refreshAvataImageView:(id)a0 withUserIMID:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
