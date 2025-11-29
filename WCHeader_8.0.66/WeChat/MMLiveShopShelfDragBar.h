@class UIImageView, UIColor, MMUIView;

@interface MMLiveShopShelfDragBar : MMUIView

@property (retain, nonatomic) UIImageView *closeIcon;
@property (retain, nonatomic) UIColor *closeIconColor;
@property (retain, nonatomic) MMUIView *barView;
@property (nonatomic) double displayDragCloseStyleProgress;
@property (nonatomic) BOOL displayDragCloseStyle;

- (void)updateCloseIconColor:(id)a0;
- (void)setCloseIcon:(id)a0;
- (void)setCloseIconColor:(id)a0;
- (id)closeIcon;
- (id)closeIconColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateBarViewColor:(id)a0;
- (void)updateBarBgColor:(id)a0;
- (void)layoutSubviews;
- (void)updateDisplayDragCloseStyle;
- (void)doLayoutBarView;
- (void)handleDragBarGestureChange:(double)a0;
- (void)handleDragBarGestureEnd;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
