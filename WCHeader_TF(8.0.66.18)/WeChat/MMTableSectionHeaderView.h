@class UIColor, UIImageView, WCColorProxy, UILabel, UIView;

@interface MMTableSectionHeaderView : UITableViewHeaderFooterView {
    UIView *_selectedBackgroundView;
    UILabel *_selectedLabel;
    UIImageView *_selectedStarImageView;
}

@property (retain, nonatomic) WCColorProxy *colorProxy;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *starImageView;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UIColor *selectedBackgroundColor;
@property (retain, nonatomic) UIView *bottomLineView;
@property (retain, nonatomic) UIView *topLineView;
@property (nonatomic) BOOL sectionSelected;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reloadView;
- (void)prepareForReuse;
- (void).cxx_destruct;

@end
