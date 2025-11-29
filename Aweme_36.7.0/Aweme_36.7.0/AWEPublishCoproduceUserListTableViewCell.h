@class UIImageView, AWECoProduceUserModel, UILabel, UIButton;

@interface AWEPublishCoproduceUserListTableViewCell : UITableViewCell

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *nickNameLabel;
@property (retain, nonatomic) UILabel *coProduceDescLabel;
@property (retain, nonatomic) UIButton *changeButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) AWECoProduceUserModel *coProduceUserModel;
@property (copy, nonatomic) id /* block */ closeButtonClickBlock;
@property (copy, nonatomic) id /* block */ changeIdentifyButtonClickBlock;

+ (id)identifier;
+ (double)cellHeight;

- (void)closeButtonTap;
- (void)configCellWithUser:(id)a0;
- (void)configCellWithUser:(id)a0 canEdit:(BOOL)a1;
- (void)disableAndGrey:(BOOL)a0;
- (void)disableAndHide:(BOOL)a0;
- (void)changeButtonTap;
- (void)updateCoProduceRole:(id)a0;
- (id)getCoProduceIdentify;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)setupUI;

@end
