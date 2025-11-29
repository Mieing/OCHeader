@class UILabel, AWEIMInputFAQListEntity, UIView;

@interface AWEIMInputFAQListTableViewCell : UITableViewCell

@property (retain, nonatomic) AWEIMInputFAQListEntity *entity;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *separator;

- (void)p_setupViews;
- (void)configCellWithEntity:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
