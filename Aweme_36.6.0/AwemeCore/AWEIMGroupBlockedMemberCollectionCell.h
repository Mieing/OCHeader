@class AWEIMMessageConversation, AWEIMGroupBlockedMemberCollectionCellModel, UIImageView, NSString, UILabel, UIButton;
@protocol AWEIMGroupBlockCollectionCellDelegate;

@interface AWEIMGroupBlockedMemberCollectionCell : AWEIMGroupCornerableCollectionCell <AWEIMGroupSpeakPermissionCellProtocol>

@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *countDownLabel;
@property (retain, nonatomic) UIButton *unblockButton;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (retain, nonatomic) AWEIMGroupBlockedMemberCollectionCellModel *model;
@property (nonatomic) long long type;
@property (weak, nonatomic) id<AWEIMGroupBlockCollectionCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (void)__updateUI;
- (void)__setupUI;
- (void)renderWithCellModel:(id)a0;
- (void)configWithBlockCellModel:(id)a0 type:(long long)a1;
- (void)onAvatarTap;
- (double)__topPadding;
- (void)unblockButtonClick;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
