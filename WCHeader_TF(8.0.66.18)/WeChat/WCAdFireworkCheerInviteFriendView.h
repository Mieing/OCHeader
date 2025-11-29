@class WCDataItem, WCAdSocialLikeLogic, WCAdFireworkCheerInfo, MMUIView, UIButton;
@protocol WCAdFireworkCheerInviteFriendViewDelegate;

@interface WCAdFireworkCheerInviteFriendView : MMUIView

@property (retain, nonatomic) WCDataItem *dataItem;
@property (retain, nonatomic) WCAdFireworkCheerInfo *fireworkCheerInfo;
@property (nonatomic) unsigned long long contentItemScene;
@property (retain, nonatomic) MMUIView *bgView;
@property (retain, nonatomic) UIButton *inviteButton;
@property (readonly, nonatomic) WCAdSocialLikeLogic *socialLikeLogic;
@property (nonatomic) BOOL contentShowFlag;
@property (weak, nonatomic) id<WCAdFireworkCheerInviteFriendViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fireworkCheerInfo:(id)a1 dataItem:(id)a2 contentItemScene:(unsigned long long)a3;
- (void)dealloc;
- (void)initView;
- (void)showContent;
- (void)onInviteButtonClick:(id)a0;
- (void)startShowContentAnimation;
- (void)onFireworkCheerCommentAnimationStarted:(id)a0 contentItemScene:(unsigned long long)a1;
- (void).cxx_destruct;

@end
