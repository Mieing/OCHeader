@class UIStackView, UIImageView, CAShapeLayer, UILabel, MASConstraint, CJPayDyPayHPVoucherTagConfigModel;

@interface CJPayDyPayHPVoucherTagView : UIView

@property (retain, nonatomic) CJPayDyPayHPVoucherTagConfigModel *configModel;
@property (retain, nonatomic) UILabel *leftLabel;
@property (retain, nonatomic) UIImageView *leftImageView;
@property (retain, nonatomic) UILabel *rightLabel;
@property (retain, nonatomic) UIStackView *verticalSeparateStackView;
@property (retain, nonatomic) MASConstraint *rightLabelBaseLeftLabelConstraint;
@property (retain, nonatomic) MASConstraint *rightLabelBaseLeftImgViewConstraint;
@property (retain, nonatomic) MASConstraint *rightLabelBaseSelfViewConstraint;
@property (retain, nonatomic) CAShapeLayer *voucherBcgLayer;
@property (retain, nonatomic) CAShapeLayer *voucherBcgSeparateLineLayer;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastWindowFrame;

- (id)initWithConfigModel:(id)a0;
- (void)updateWithConfigModel:(id)a0;
- (BOOL)p_isLeftImageStyle;
- (BOOL)p_isLeftTextStyle;
- (id)createVoucherBcgLayer;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
