@class UITapGestureRecognizer, NSString, UIImageView, UIView, MMUILabel;
@protocol KidsWatchSwitchCellViewDelegate;

@interface KidsWatchSwitchCellView : UIView

@property (retain, nonatomic) UIView *topSeparateView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) UIImageView *selectIconView;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (weak, nonatomic) id<KidsWatchSwitchCellViewDelegate> delegate;
@property (retain, nonatomic) NSString *title;
@property (nonatomic, getter=isSelected) BOOL selected;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSubviews;
- (void)initGesture;
- (void)onTap:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (double)updateSizeAndCalculateHeightFromFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
