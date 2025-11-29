@class UIControl, UIStackView, UIImageView, UIView, UILabel, BDPCDDynamicCardDashedLineView;

@interface AWEECOMIMDynamicStepperView : AWEECOMIMDynamicCardBaseElementView

@property (retain, nonatomic) UIControl *tapControl;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) BDPCDDynamicCardDashedLineView *tipLineView;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UIView *titleView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *distinctLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UILabel *timeLabel;

+ (struct CGSize { double x0; double x1; })sizeWithElementModel:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1;
+ (double)heightWithElementModel:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1;
+ (double)designHeightWithDescLineNum:(unsigned long long)a0;

- (void)updateWithElememtModel:(id)a0;
- (double)heightWithElementModel:(id)a0;
- (void)setDescLineNumber:(unsigned long long)a0;
- (unsigned long long)descLineNumber;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
