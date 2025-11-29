@class UIImageView, UILabel, UIView, UIButton;

@interface CJPayAssetQualitySeparatorCell : CJPayStyleBaseListCellView

@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIView *separatorView;
@property (retain, nonatomic) UIButton *rightBtnView;
@property (retain, nonatomic) UIView *componentBgView;

- (void)bindViewModel:(id)a0;
- (void)p_updateContentInUnfoldStyle:(id)a0;
- (void)p_updateContentInBizAddCardStyle:(id)a0;
- (void)p_updateContentInDypayUnfoldStyle:(id)a0;
- (void)p_updateContentInDypayCenterStyleUnfold:(id)a0;
- (void)p_updateContentInDypayTitleStyle:(id)a0;
- (void)p_updateContentInDefaultStyle:(id)a0;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)setupUI;
- (void)didSelect;

@end
