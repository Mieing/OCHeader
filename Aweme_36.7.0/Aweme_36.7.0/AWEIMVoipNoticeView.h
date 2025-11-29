@class UIStackView, NSString, UIVisualEffectView, AWEIMVoipNoticeViewModel, UILabel, NSMutableArray, UIButton;
@protocol AWEIMUserManagerProtocol, AWEIMVoipNoticeViewDelegate;

@interface AWEIMVoipNoticeView : UIView

@property (retain, nonatomic) UIStackView *userAvatarsStackView;
@property (retain, nonatomic) NSMutableArray *userAvatarViews;
@property (retain, nonatomic) UIButton *joinButton;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) id<AWEIMUserManagerProtocol> userManager;
@property (copy, nonatomic) NSString *currentUserSecIMID;
@property (retain, nonatomic) UIVisualEffectView *blurView;
@property (retain, nonatomic) AWEIMVoipNoticeViewModel *model;
@property (weak, nonatomic) id<AWEIMVoipNoticeViewDelegate> delegate;

- (void)renderModel:(id)a0 context:(id)a1;
- (void)refreshBackgroundColorWhileHasBackground:(BOOL)a0;
- (void)__createComponents;
- (void)__layoutComponents;
- (void)__configureComponents;
- (BOOL)__isLightTheme;
- (void)__refreshContentsWithModel:(id)a0;
- (id)__shadowColor;
- (void)__configureUserAvatarsStackView;
- (void)__configureTipLabel;
- (void)__configureJoinButton;
- (void)__didClickJoinButton:(id)a0;
- (void)__refreshAvatarStackViewWithUserIMIDs:(id)a0;
- (void)__refreshTipLabelWithModel:(id)a0;
- (void)__refreshJoinButtonWithUserIMIDs:(id)a0;
- (long long)__maxShowAvatarCount;
- (void)__refreshAvatatImageView:(id)a0 withUserIMID:(id)a1;
- (id)__createUserAvatarImageView;
- (long long)__maxVoipParticipantCount;
- (BOOL)__isSelfInVoipWithCurrentUserIMIDs:(id)a0;
- (id)__avatarBoarderColor;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
