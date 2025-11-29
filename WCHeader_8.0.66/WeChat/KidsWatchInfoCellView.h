@class KidsWatchInfoItem, CAShapeLayer, UIView, MMUILabel;

@interface KidsWatchInfoCellView : UIView

@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *contentLabel;
@property (retain, nonatomic) UIView *separatorView;
@property (retain, nonatomic) CAShapeLayer *dotLayer;
@property (retain, nonatomic) KidsWatchInfoItem *item;
@property (nonatomic) BOOL showSeparator;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSubviews;
- (void)layoutSubviews;
- (double)updateSizeAndCalculateHeightFromFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
