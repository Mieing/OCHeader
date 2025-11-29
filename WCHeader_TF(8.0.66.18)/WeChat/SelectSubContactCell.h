@class UIView;

@interface SelectSubContactCell : ContactMultiSelectCell

@property (nonatomic) double bottomLineLeftPadding;
@property (retain, nonatomic) UIView *bottomSeparatorView;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
