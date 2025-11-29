@class UILabel, AWEIMShareLocationSearchItem, UIView;

@interface AWEIMShareLocationSearchResultTableViewCell : UITableViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) UILabel *distanceLabel;
@property (retain, nonatomic) UIView *distanceLine;
@property (retain, nonatomic) AWEIMShareLocationSearchItem *model;

- (void)__createComponents;
- (id)renderModel:(id)a0;
- (id)generateHighlightedString:(id)a0 srcStr:(id)a1;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)awakeFromNib;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)layoutSubviews;

@end
