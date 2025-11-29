@class UIStackView, UIView, CJPayLabel, UIImageView, UIButton, CJPayAssetRecommendView, MASConstraint, CJPayAssetCombineDetailItemView, CJPaySelectionItemView;

@interface CJPayAssetPayMethodDetailView : UIView

@property (retain, nonatomic) UIStackView *payMethodStackView;
@property (retain, nonatomic) UIView *basicDetailView;
@property (retain, nonatomic) UIView *extraDetailView;
@property (retain, nonatomic) UIView *combineDetailView;
@property (retain, nonatomic) UIView *selectionDetailView;
@property (retain, nonatomic) CJPayLabel *payMethodTitleLabel;
@property (retain, nonatomic) UIImageView *payMethodIcon;
@property (retain, nonatomic) CJPayLabel *payMethodDescLabel;
@property (retain, nonatomic) UIImageView *rightArrow;
@property (retain, nonatomic) CJPayLabel *extraDetailDescLabel;
@property (retain, nonatomic) CJPayLabel *extraDetailLabel;
@property (retain, nonatomic) CJPayAssetCombineDetailItemView *limitMethodItemView;
@property (retain, nonatomic) CJPayAssetCombineDetailItemView *choiceMethodItemView;
@property (retain, nonatomic) CJPaySelectionItemView *selectionItemView;
@property (retain, nonatomic) CJPayAssetRecommendView *recommendView;
@property (nonatomic) BOOL shouldHideRecommendView;
@property (nonatomic) BOOL isChangePayTypeDisabled;
@property (nonatomic) BOOL disableExtraDetailLabelOpt;
@property (retain, nonatomic) UIButton *normalPayClickView;
@property (retain, nonatomic) UIButton *combineChoicePayClickView;
@property (retain, nonatomic) MASConstraint *detailLabelLeftBaseSuperConstraint;
@property (retain, nonatomic) MASConstraint *detailLabelLeftBaseDescLabelConstraint;
@property (copy, nonatomic) id /* block */ clickedPayMethodBlock;
@property (copy, nonatomic) id /* block */ clickedChoicePayMethodBlock;
@property (copy, nonatomic) id /* block */ clickedRecommendViewBlock;
@property (copy, nonatomic) id /* block */ clickedSelectionItemBlock;

- (id)cj_performanceMonitorName;
- (void)hideRecommendViewInstantly;
- (id)getExtraDetailLabelText;
- (void)updateContentWithRecommendModel:(id)a0;
- (void)updateContentByChannelConfig:(id)a0 extraParams:(id)a1;
- (id)initWithChangePayTypeDisabled:(BOOL)a0;
- (void)p_updateSelectionItemWithConfig:(id)a0 isSelected:(BOOL)a1 animated:(BOOL)a2;
- (void)p_updateClickViewConstraint;
- (void)p_setupUIForBasicDetailView;
- (void)p_setupUIForExtraDetailView;
- (void)p_setupUIForCombineDetailView;
- (void)p_setupUIForRecommendView;
- (void)p_setupUIForSelectionItemView;
- (void)p_updateNormalClickViewConstraint;
- (void)p_updateCombineClickViewConstraint;
- (void)p_normalPayMethodViewTapped;
- (BOOL)p_isPressable;
- (void)p_combinePayMethodViewTapped;
- (void)updateContentByChannelConfig:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;

@end
