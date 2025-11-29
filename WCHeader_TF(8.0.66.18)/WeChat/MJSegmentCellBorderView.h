@class UIColor, MJDualBorderLayer;

@interface MJSegmentCellBorderView : UIView {
    BOOL _isBorderVisible;
}

@property (readonly, nonatomic) MJDualBorderLayer *borderLayer;
@property (readonly, nonatomic) MJDualBorderLayer *separatorLineLayer;
@property (nonatomic) BOOL shouldShowSeparatorLine;
@property (retain, nonatomic) UIColor *separatorLineColor;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)showBorderAnimated:(BOOL)a0;
- (void)hideBorderAnimated:(BOOL)a0;
- (void).cxx_destruct;

@end
