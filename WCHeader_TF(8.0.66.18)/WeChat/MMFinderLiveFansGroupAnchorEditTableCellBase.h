@class UIImageView, UIView;

@interface MMFinderLiveFansGroupAnchorEditTableCellBase : UITableViewCell

@property (retain, nonatomic) UIView *sepLine;
@property (nonatomic) unsigned long long corners;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *rightChevronView;
@property (retain, nonatomic) UIView *highlightView;
@property (nonatomic) double containerBottomMargin;

+ (id)reuseId;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateShowSepLine:(BOOL)a0;
- (void)updateWithRoundedCorners:(unsigned long long)a0;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
