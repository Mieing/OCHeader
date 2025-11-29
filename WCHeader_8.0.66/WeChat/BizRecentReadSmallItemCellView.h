@class BizPersonalCenterRecentReadCover, MMUIView, UIView, MMUILabel;

@interface BizRecentReadSmallItemCellView : MMMultiMenuTableViewCell

@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *nicknameLabel;
@property (retain, nonatomic) MMUIView *seperateView;
@property (retain, nonatomic) BizPersonalCenterRecentReadCover *cellCoverView;
@property (retain, nonatomic) UIView *highlightMaskView;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)configureLayout;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)sizeToFit;
- (void)applyData:(id)a0;
- (void).cxx_destruct;

@end
