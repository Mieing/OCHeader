@class NSString, UIImageView, UILabel, UIView, IESLiveChatChannelMemberActionButton;

@interface IESLiveChatChannelUserListPanelUserCell : IESLiveChatChannelUserListPanelBaseCell <IESLiveChatChannelUserListPanelCellActionResponder>

@property (retain, nonatomic) UIView *avatarAnimatedBorder;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIView *textContainer;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIView *userLabelContainer;
@property (retain, nonatomic) UILabel *userLabel;
@property (retain, nonatomic) UIView *actionView;
@property (retain, nonatomic) IESLiveChatChannelMemberActionButton *actionButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startAvatarAnimation;
- (void)reloadWithCellModel:(id)a0;
- (void)enableActionUIRespond:(BOOL)a0;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)stopAnimation;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)accessibilityElements;
- (void)awakeFromNib;
- (void)layoutSubviews;
- (void)setup;

@end
