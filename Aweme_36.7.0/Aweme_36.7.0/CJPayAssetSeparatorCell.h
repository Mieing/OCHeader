@class UIImageView, UILabel, UIView, CJPayTextArrowView;

@interface CJPayAssetSeparatorCell : CJPayStyleBaseListCellView

@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIView *separatorView;
@property (retain, nonatomic) CJPayTextArrowView *rightBtnView;

- (void)bindViewModel:(id)a0;
- (void)p_updateContentInUnfoldStyle:(id)a0;
- (void)p_updateContentInBizAddCardStyle:(id)a0;
- (void)p_updateContentInDypayUnfoldStyle:(id)a0;
- (void)p_updateContentInDypayTitleStyle:(id)a0;
- (void)p_updateContentInDefaultStyle:(id)a0;
- (void)p_configCustomSelectionStyle;
- (void).cxx_destruct;
- (void)setupUI;
- (void)didSelect;

@end
