@class UIImageView, DUXButton, UILabel, UIView, DUXTextTag;

@interface AWEUserAccountListTableViewCell : UITableViewCell

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) DUXButton *actionButton;
@property (retain, nonatomic) DUXTextTag *businessAccountTag;
@property (retain, nonatomic) DUXTextTag *hotsoonTag;
@property (copy, nonatomic) id /* block */ actionButtonBlock;

+ (Class)aAWEUserModuleServiceCommonAdapterClass;

- (void)actionBtnClicked;
- (void)configWithModel:(id)a0 isCreateNewAccount:(BOOL)a1;
- (id)aAWEUserModuleServiceCommonAdapter;
- (void)updateTagForUser:(id)a0;
- (void)setupUIIsCreateNewAccount:(BOOL)a0 userModel:(id)a1;
- (void)configActionButtonWithUser:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;

@end
