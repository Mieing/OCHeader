@class UILabel, UIImageView, AWECreateSubAccountTableViewCellModel;

@interface AWECreateSubAccountTableViewCell : UITableViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) AWECreateSubAccountTableViewCellModel *model;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;

@end
