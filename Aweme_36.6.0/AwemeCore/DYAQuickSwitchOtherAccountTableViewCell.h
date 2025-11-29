@class UIButton, DUXTextTag, UIImageView, UIView, UILabel, AWEProfileMultiAccountUnreadDotView, DUXCheckBox;

@interface DYAQuickSwitchOtherAccountTableViewCell : UITableViewCell

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIImageView *avatarStatusImageView;
@property (retain, nonatomic) UILabel *nicknameLabel;
@property (retain, nonatomic) UILabel *fansAndFriendsLabel;
@property (retain, nonatomic) DUXCheckBox *checkBoxButton;
@property (retain, nonatomic) UIImageView *placeholderImageView;
@property (retain, nonatomic) AWEProfileMultiAccountUnreadDotView *noticeUnreadDotView;
@property (retain, nonatomic) UIButton *deleteButton;
@property (retain, nonatomic) DUXTextTag *businessAccountTag;
@property (retain, nonatomic) DUXTextTag *hotsoonTag;
@property (nonatomic) BOOL forceUseOldProfileBGColor;
@property (copy, nonatomic) id /* block */ deleteActionBlock;
@property (nonatomic) double accountImageViewHeight;
@property (nonatomic) double deleteIconHeight;
@property (nonatomic) double nicknameLabelHeight;
@property (nonatomic) double fansAndFriendsLabelHeight;
@property (retain, nonatomic) UIView *dividingLine;

+ (Class)aAWEUserModuleServiceCommonAdapterClass;
+ (Class)aAWEUserModuleServiceDOUYINDSAdapterClass;
+ (id)identifier;
+ (double)cellHeight;

- (void)configWithModel:(id)a0;
- (id)aAWEUserModuleServiceCommonAdapter;
- (id)aAWEUserModuleServiceDOUYINDSAdapter;
- (void)setupLargeUIConfig;
- (void)updateInfoBehindNicknameLabelWithModel:(id)a0 needShowNoticeUnread:(BOOL)a1;
- (void)deleteAction:(id)a0;
- (void)configWithModel:(id)a0 canDelete:(BOOL)a1 isManage:(BOOL)a2 deleteAction:(id /* block */)a3;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
