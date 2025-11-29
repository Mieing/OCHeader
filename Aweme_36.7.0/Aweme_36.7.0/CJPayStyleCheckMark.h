@interface CJPayStyleCheckMark : UIImageView

@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL useNewSelectedIcon;
@property (nonatomic) BOOL useQualitySelectedIcon;

- (void)updateNewSelectedIconLayer;
- (void)p_applyDefaultAppearance;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithDiameter:(double)a0;

@end
