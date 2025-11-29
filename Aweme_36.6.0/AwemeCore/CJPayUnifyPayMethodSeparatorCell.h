@class CJPayTextArrowView, UIImageView, UILabel, UIView, UIButton;

@interface CJPayUnifyPayMethodSeparatorCell : CJPayStyleBaseListCellView

@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIView *separatorView;
@property (retain, nonatomic) UIButton *rightBtnView;
@property (retain, nonatomic) CJPayTextArrowView *textAndArrowView;
@property (nonatomic) BOOL allowAbbreviatedPayChannelText;
@property (retain, nonatomic) UIImageView *methodIconView;
@property (retain, nonatomic) UILabel *titleLabel;

- (id)cj_performanceMonitorName;
- (void)bindViewModel:(id)a0;
- (void)p_updateContentInUnfoldStyle:(id)a0;
- (void)p_updateContentInDypayTitleStyle:(id)a0;
- (void)p_updateContentInDefaultStyle:(id)a0;
- (void)updateAbbreviatedTextWithShowConfig:(id)a0;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)setupUI;
- (void)didSelect;

@end
