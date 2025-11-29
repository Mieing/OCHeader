@class UILabel, AWEBlockMessageSettingSelfDefinedButton, UIView;

@interface AWEBlockMessageSettingSelfDefinedTableViewCell : UITableViewCell

@property (retain, nonatomic) UILabel *title;
@property (copy, nonatomic) id /* block */ rightBlock;
@property (retain, nonatomic) AWEBlockMessageSettingSelfDefinedButton *rightButton;
@property (nonatomic) unsigned long long cornerType;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UIView *containerView;

+ (id)identifier;

- (void)setupCorner;
- (void)configWithWord:(id)a0 cornerType:(unsigned long long)a1 isFixedCell:(BOOL)a2 block:(id /* block */)a3;
- (void)clickRightButton;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)setupUI;

@end
