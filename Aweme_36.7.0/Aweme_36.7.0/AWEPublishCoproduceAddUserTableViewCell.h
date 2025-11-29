@class UIButton, UILabel;

@interface AWEPublishCoproduceAddUserTableViewCell : UITableViewCell

@property (retain, nonatomic) UIButton *addCoproduceButton;
@property (retain, nonatomic) UILabel *addTitleLabel;
@property (nonatomic) BOOL disableAndGrey;

+ (id)identifier;
+ (double)cellHeight;

- (void)updateUIStateOperable:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;

@end
