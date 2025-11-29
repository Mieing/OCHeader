@class DUXTextTag, UIImageView, UILabel, UIView, UIButton;

@interface DYFindPasswordAccountListTableViewCell : UITableViewCell

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) DUXTextTag *businessAccountTag;
@property (retain, nonatomic) DUXTextTag *hotsoonTag;
@property (copy, nonatomic) id /* block */ actionButtonBlock;

+ (Class)aAWEUserModuleServiceCommonAdapterClass;

- (void)actionBtnClicked;
- (void)configWithModel:(id)a0;
- (id)aAWEUserModuleServiceCommonAdapter;
- (void)updateBusinessTagForUser:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)setupUI;

@end
