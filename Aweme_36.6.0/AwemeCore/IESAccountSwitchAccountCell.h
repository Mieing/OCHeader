@class UIButton, DUXBadge, UIImageView, UIColor, UILabel, DUXTextTag, DUXCheckBox;

@interface IESAccountSwitchAccountCell : UITableViewCell

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIImageView *avatarStatusImageView;
@property (retain, nonatomic) UILabel *nicknameLabel;
@property (retain, nonatomic) UILabel *fansAndFriendsLabel;
@property (retain, nonatomic) DUXCheckBox *checkBoxButton;
@property (retain, nonatomic) UIImageView *placeholderImageView;
@property (retain, nonatomic) UIButton *deleteButton;
@property (retain, nonatomic) DUXTextTag *businessAccountTag;
@property (retain, nonatomic) DUXTextTag *hotsoonTag;
@property (retain, nonatomic) DUXBadge *noticeDot;
@property (copy, nonatomic) id /* block */ deleteActionBlock;
@property (nonatomic) double accountImageViewHeight;
@property (nonatomic) double deleteIconHeight;
@property (nonatomic) double nicknameLabelHeight;
@property (nonatomic) double fansAndFriendsLabelHeight;
@property (copy, nonatomic) UIColor *cellBackGroundColor;

+ (id)identifier;
+ (double)cellHeight;

- (void)configWithModel:(id)a0;
- (void)setupLargeUIConfig;
- (void)deleteAction:(id)a0;
- (BOOL)isCurrentUserWithModel:(id)a0;
- (void)configNoticeDotWithModel:(id)a0;
- (void)configTagIfNeededWithModel:(id)a0;
- (void)configWithModel:(id)a0 isManage:(BOOL)a1 deleteAction:(id /* block */)a2;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;

@end
