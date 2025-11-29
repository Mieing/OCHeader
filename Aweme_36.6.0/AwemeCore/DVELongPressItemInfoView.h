@class UIImageView, UILabel, UIView, NLETrackSlot_OC;

@interface DVELongPressItemInfoView : UIView

@property (retain, nonatomic) UIImageView *gradientView;
@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UIView *innerBorderView;
@property (retain, nonatomic) UILabel *durationLabel;
@property (retain, nonatomic) NLETrackSlot_OC *slot;
@property (nonatomic) BOOL isHiddenBorderMask;

- (void)updateCornerMaskLayer;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
