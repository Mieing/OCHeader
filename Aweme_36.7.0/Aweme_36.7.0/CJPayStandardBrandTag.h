@class UIStackView, CAShapeLayer, UIImageView, UILabel;

@interface CJPayStandardBrandTag : CJPayStandardTagItem

@property (retain, nonatomic) CAShapeLayer *voucherBorderLayer;
@property (retain, nonatomic) UIStackView *verticalSeparateStackView;
@property (retain, nonatomic) UILabel *leftTextLabel;
@property (retain, nonatomic) UILabel *rightTextLabel;
@property (retain, nonatomic) UIImageView *leftImageView;
@property (retain, nonatomic) UIImageView *rightImageView;

- (id)p_createVoucherBorderLayer;
- (void)refreshContentViewWithTagModel:(id)a0;
- (void)p_configLeftContentItemsWithLabelModel:(id)a0;
- (void)p_configRightContentItemsWithLabelModel:(id)a0;
- (void)p_updateSubViewsStyle;
- (void)p_updateSeparateLineColor;
- (void)p_updateTextLabelTextColor;
- (id)p_createPointView;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
