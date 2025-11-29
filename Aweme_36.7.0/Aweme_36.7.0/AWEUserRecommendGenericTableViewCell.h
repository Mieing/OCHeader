@class UIView;
@protocol AWEUserRecommendCellViewProtocol;

@interface AWEUserRecommendGenericTableViewCell : UITableViewCell

@property (retain, nonatomic) UIView *separatorView;
@property (retain, nonatomic) UIView<AWEUserRecommendCellViewProtocol> *basicView;

- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
