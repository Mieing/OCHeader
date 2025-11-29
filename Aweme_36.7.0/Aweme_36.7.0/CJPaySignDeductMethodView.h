@class UIStackView, CJPaySignDeductMethodModel, UIImageView, CJPayMultifunctionalAttributeLabel, UILabel, UIView;

@interface CJPaySignDeductMethodView : UIView

@property (retain, nonatomic) UILabel *deductMethodTitleLabel;
@property (retain, nonatomic) UIView *deductContentView;
@property (retain, nonatomic) UIStackView *deductTitleStackView;
@property (retain, nonatomic) UILabel *deductTitlePrefixLabel;
@property (retain, nonatomic) UIImageView *deductIconImageView;
@property (retain, nonatomic) UILabel *deductTitleLabel;
@property (retain, nonatomic) CJPayMultifunctionalAttributeLabel *subDeductTitleLabel;
@property (retain, nonatomic) UIImageView *deductArrowImageView;
@property (retain, nonatomic) CJPaySignDeductMethodModel *model;
@property (copy, nonatomic) id /* block */ payMethodClick;

- (void)updateWithDeductMethodModel:(id)a0;
- (void)p_arrowClick;
- (id)initWithModel:(id)a0;
- (void)setupConstraints;
- (void).cxx_destruct;
- (void)setupUI;

@end
