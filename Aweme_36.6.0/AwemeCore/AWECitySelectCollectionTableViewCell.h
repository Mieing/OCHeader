@class UIView;

@interface AWECitySelectCollectionTableViewCell : UITableViewCell

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *bottomLineView;
@property (copy, nonatomic) id /* block */ cityIndexSelectedBlock;

- (id)createCityItemViewWithName:(id)a0;
- (void)onClickItem:(id)a0;
- (void)configWithCities:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
