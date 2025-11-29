@class UIStackView, CJPayOutDisplayInfoModel, UIImageView, CJPayButton, UIView, CJPayLabel, NSDictionary;

@interface CJPayChoosedPayMethodViewV3 : UIView

@property (nonatomic) BOOL isCombinedPay;
@property (nonatomic) BOOL isChangePayTypeDisabled;
@property (nonatomic) BOOL isNeedHideCreditDescRegion;
@property (nonatomic) BOOL canChangeCombineStatus;
@property (nonatomic) BOOL isNeedHideRecommendView;
@property (retain, nonatomic) UIView *normalPayMethodView;
@property (retain, nonatomic) UIView *combinePayDetailView;
@property (retain, nonatomic) UIView *creditPayDetailView;
@property (retain, nonatomic) UIView *recommendView;
@property (retain, nonatomic) CJPayLabel *payTitleLabel;
@property (retain, nonatomic) UIImageView *payDescIconImageView;
@property (retain, nonatomic) CJPayLabel *payDescLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) CJPayLabel *creditPayDescLabel;
@property (retain, nonatomic) CJPayLabel *creditPayDetailLabel;
@property (retain, nonatomic) CJPayLabel *recommendMethodTitle;
@property (retain, nonatomic) UIImageView *recommendIcon;
@property (retain, nonatomic) CJPayButton *recommendButton;
@property (retain, nonatomic) CJPayLabel *combineBalanceTitleLabel;
@property (retain, nonatomic) CJPayLabel *combineBalanceDescPayLabel;
@property (retain, nonatomic) CJPayLabel *combineBalanceDescLabel;
@property (retain, nonatomic) CJPayLabel *combineBankTitleLabel;
@property (retain, nonatomic) CJPayLabel *combineBankDescPayLabel;
@property (retain, nonatomic) CJPayLabel *combineBankDescLabel;
@property (retain, nonatomic) UIImageView *combineBankArrowImageView;
@property (retain, nonatomic) UIStackView *payMethodStackView;
@property (retain, nonatomic) UIView *normalPayClickView;
@property (retain, nonatomic) UIView *combinePayClickView;
@property (retain, nonatomic) CJPayOutDisplayInfoModel *outDisplayInfoModel;
@property (nonatomic) BOOL useNewCreditDescription;
@property (copy, nonatomic) id /* block */ clickedPayMethodBlock;
@property (copy, nonatomic) id /* block */ clickedCombineBankPayMethodBlock;
@property (copy, nonatomic) id /* block */ clickedRecommendBlock;
@property (copy, nonatomic) NSDictionary *voucherSwell;

- (void)p_setupViews;
- (void)hideRecommendViewInstantly;
- (void)p_recommendButtonTapped;
- (void)p_updateClickViewConstraint;
- (void)p_setupUIForRecommendView;
- (void)p_updateNormalClickViewConstraint;
- (void)p_updateCombineClickViewConstraint;
- (void)p_normalPayMethodViewTapped;
- (void)p_combinePayMethodViewTapped;
- (void)p_setupUIForNormal;
- (void)p_setupUIForCombinedPay;
- (void)p_updateCombineContentView:(id)a0;
- (void)p_updateNormalContentView:(id)a0;
- (void)p_setupUIForCreditPay;
- (void)setCombinePayDetailViewHidden:(BOOL)a0;
- (void)p_updateRecommendView:(id)a0 configs:(id)a1;
- (void)p_updateCombineLabelText:(id)a0 label:(id)a1;
- (id)initIsCombinePay:(BOOL)a0 isChangePayTypeDisabled:(BOOL)a1 isNeedHideCreditDescRegion:(BOOL)a2 canChangeCombineStatus:(BOOL)a3;
- (void)updateContentWithChannelConfigs:(id)a0 withRecommendModel:(id)a1;
- (void)updatePayTypeTitle:(id)a0;
- (void)updateExpandCombineMsgFirst:(id)a0 second:(id)a1;
- (void).cxx_destruct;

@end
