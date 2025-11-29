@class AWEIMUser, IESIMConversationParticipantModel, UIImageView, UIView, UILabel;

@interface AWEIMGroupMemberCollectionCell : UICollectionViewCell

@property (retain, nonatomic) AWEIMUser *user;
@property (retain, nonatomic) IESIMConversationParticipantModel *memberModel;
@property (retain, nonatomic) UIView *onlineIndicatorView;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *nameLabel;

+ (double)itemGap;
+ (struct CGSize { double x0; double x1; })itemSize;
+ (id)identifier;

- (void)renderModel:(id)a0 context:(id)a1;
- (void)p_updateUI;
- (void)configWithUser:(id)a0 type:(long long)a1 groupMemberModel:(id)a2 shouldAddShareOptInfo:(BOOL)a3;
- (void)configBackgroundColor;
- (void)p_setupAccessibilityValueWithType:(long long)a0;
- (BOOL)p_isLightStyle;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
