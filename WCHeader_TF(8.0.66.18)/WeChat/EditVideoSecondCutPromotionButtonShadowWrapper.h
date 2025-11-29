@class EditVideoSecondCutPromotionButton, CAGradientLayer;

@interface EditVideoSecondCutPromotionButtonShadowWrapper : MMUIView

@property (retain, nonatomic) EditVideoSecondCutPromotionButton *button;
@property (retain, nonatomic) CAGradientLayer *backgroundLayer;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_initButton;
- (void)_initBackgroundLayer;
- (void)layoutSubviews;
- (void)setButtonClickAction:(id)a0 action:(SEL)a1;
- (long long)getCurrentEntryType;
- (void)updateEntryType:(long long)a0;
- (void)updateEditVideoEntrance:(unsigned long long)a0;
- (void).cxx_destruct;

@end
