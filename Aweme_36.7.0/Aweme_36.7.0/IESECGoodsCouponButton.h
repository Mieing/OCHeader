@class CAShapeLayer, IESECCouponButtonModel, IESECContentEdgeInsetLabel;

@interface IESECGoodsCouponButton : IESECButton

@property (retain, nonatomic) IESECContentEdgeInsetLabel *leftLabel;
@property (retain, nonatomic) CAShapeLayer *dashline;
@property (nonatomic) double buttonHeight;
@property (nonatomic) double textPadding;
@property (nonatomic) long long textFont;
@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) IESECCouponButtonModel *couponModel;
@property (nonatomic) BOOL hasSpecialConfig;

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })defaultEdgeInsets;
- (void)resetButtonWithReputationConfig:(id)a0;
- (double)defaultButtonHeight;
- (void)updateButtonSizeAndEdgeInsetsWithText:(id)a0;
- (id /* block */)attributedStringMakerBlockWithElements:(id)a0 fontSize:(long long)a1 color:(id)a2;
- (void)setLeftLabelWithText:(id)a0 color:(id)a1 fontSize:(long long)a2;
- (void)setRightLabelWithText:(id)a0 color:(id)a1 fontSize:(long long)a2;
- (BOOL)existLeftContent;
- (void)setSplitLineWithConfig:(id)a0;
- (void)setRightIconWithModel:(id)a0;
- (void)updateButtonSizeAndEdgeInsetsWithElements:(id)a0;
- (void)updateImagePosition;
- (void).cxx_destruct;
- (double)defaultTextPadding;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (long long)defaultTextFont;

@end
