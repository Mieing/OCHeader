@class UIView, AWEIMOfficialAccountCardMessage, AWEIMSeviceChatRoleCardTagView, AWEIMSeviceChatRoleCardView_AvatarView, UIImageView, AWEIMServiceChatRoleCardTextView, AWEIMSeviceChatRoleCardView_NameView, CAGradientLayer, AWEIMUser, UILabel;

@interface AWEIMServiceChatRoleCardView : UIView

@property (retain, nonatomic) AWEIMSeviceChatRoleCardView_AvatarView *avatarView;
@property (retain, nonatomic) AWEIMSeviceChatRoleCardView_NameView *nameView;
@property (retain, nonatomic) UIView *subTitleView;
@property (retain, nonatomic) UILabel *subTitle;
@property (retain, nonatomic) AWEIMServiceChatRoleCardTextView *contentTextView;
@property (retain, nonatomic) AWEIMSeviceChatRoleCardTagView *firstRowView;
@property (retain, nonatomic) AWEIMSeviceChatRoleCardTagView *secondRowView;
@property (retain, nonatomic) AWEIMUser *user;
@property (retain, nonatomic) AWEIMOfficialAccountCardMessage *msg;
@property (retain, nonatomic) UIImageView *gradientImageView;
@property (retain, nonatomic) UIView *gradientView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UIView *backGroundView;
@property (copy, nonatomic) id /* block */ tapAvatarActionBlock;
@property (copy, nonatomic) id /* block */ followActionBlock;
@property (copy, nonatomic) id /* block */ tapIdentityIconActionBlock;
@property (copy, nonatomic) id /* block */ tapExpandContentActionBlock;
@property (copy, nonatomic) id /* block */ layoutSubviewsBlock;
@property (nonatomic) struct CGSize { double width; double height; } cardViewSize;

- (void)remakeLayout;
- (void)configViewModel:(id)a0 context:(id)a1 floatFollowDisplaying:(BOOL)a2;
- (void)updateGradientLayerColor;
- (void)reloadUIWithUser:(id)a0;
- (id)itemsByModels:(id)a0 user:(id)a1;
- (void).cxx_destruct;
- (void)updateTags:(id)a0;
- (id)init;
- (void)layoutSubviews;

@end
