@class UIView, UIColor, EmoticonTabItemView;

@interface EmoticonBoardDynamicTabBarCollectionCell : UICollectionViewCell

@property (retain, nonatomic) EmoticonTabItemView *itemView;
@property (nonatomic) BOOL wxSelected;
@property (retain, nonatomic) UIView *wxSelectedBGView;
@property (retain, nonatomic) UIColor *selectedBackgroundColor;
@property (nonatomic) BOOL allowManage;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForReuse;
- (void).cxx_destruct;

@end
