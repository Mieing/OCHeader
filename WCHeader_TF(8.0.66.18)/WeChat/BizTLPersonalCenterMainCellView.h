@class UIImageView, BizPersonalCenterCellList_CellInfo, UIView, MMUILabel;

@interface BizTLPersonalCenterMainCellView : MMTableViewCell

@property (retain, nonatomic) BizPersonalCenterCellList_CellInfo *listCellInfo;
@property (retain, nonatomic) MMUILabel *nameLabel;
@property (retain, nonatomic) UIImageView *arrowIcon;
@property (retain, nonatomic) UIView *highlightMaskView;
@property (retain, nonatomic) UIView *seperateView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configureLayout;
- (void)layoutSubviews;
- (void)applyData:(id)a0;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;

@end
