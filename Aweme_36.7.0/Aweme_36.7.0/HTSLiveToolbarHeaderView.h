@class UILabel, UIView;

@interface HTSLiveToolbarHeaderView : UICollectionReusableView

@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) BOOL isItemSelect;
@property (retain, nonatomic) UIView *bottomLineView;

- (void)updateGroupTitle:(id)a0;
- (void)updateGroupTitleColor:(id)a0;
- (void)updateGroupTitleFont:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
