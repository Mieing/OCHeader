@class UILabel, IESLLPOIRateComposedLabel, YYLabel;

@interface IESLLPOIRateComposedContainerView : UIView

@property (retain, nonatomic) IESLLPOIRateComposedLabel *rateLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UILabel *goodsLabel;
@property (retain, nonatomic) YYLabel *tagLabel;
@property (nonatomic) unsigned long long scene;

- (void)configWithRateGrade:(id)a0 rateContent:(id)a1 rateOrder:(id)a2 rateType:(unsigned long long)a3;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)reset;
- (id)initWithScene:(unsigned long long)a0;

@end
