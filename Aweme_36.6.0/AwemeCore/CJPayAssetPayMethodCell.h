@class UIView, NSString, CJPayMultifunctionalAttributeLabel, UIImageView, CJPayStyleCheckMark, UIButton, CJPayAssetPayMethodCollectionView, CJPayMethodCellTagView, MASConstraint, UILabel, CJPaySelectionItemView;

@interface CJPayAssetPayMethodCell : CJPayStyleBaseListCellView <CJPayBaseLoadingProtocol>

@property (retain, nonatomic) UIImageView *methodIconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIButton *installmentAssetButton;
@property (retain, nonatomic) CJPayMultifunctionalAttributeLabel *descTitleLabel;
@property (retain, nonatomic) CJPayMethodCellTagView *voucherTagView1;
@property (retain, nonatomic) CJPayMethodCellTagView *voucherTagView2;
@property (retain, nonatomic) UIView *bubbleBGView;
@property (retain, nonatomic) UILabel *bubbleLabel;
@property (retain, nonatomic) UIImageView *iconTipsImageView;
@property (retain, nonatomic) UIView *rightDomainView;
@property (retain, nonatomic) CJPayStyleCheckMark *confirmImageView;
@property (retain, nonatomic) UIImageView *rightArrowImage;
@property (retain, nonatomic) UILabel *rightTipsMsgLabel;
@property (retain, nonatomic) CJPayAssetPayMethodCollectionView *subAssetsCollectionView;
@property (retain, nonatomic) CJPaySelectionItemView *selectionItemView;
@property (retain, nonatomic) MASConstraint *titleLabelTopBaseContainerViewConstraint;
@property (retain, nonatomic) MASConstraint *titleLabelCenterYBaseContainerViewConstraint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cj_performanceMonitorName;
- (void)bindViewModel:(id)a0;
- (void)p_reloadContentWithViewModel:(id)a0;
- (void)p_updateLayoutWithViewModel:(id)a0;
- (void)p_setupUIComponentWithModel:(id)a0;
- (void)p_configCustomSelectionStyle:(id)a0 viewModel:(id)a1;
- (id)p_combineDetailAmountStr:(id)a0;
- (void)p_updateSelectionItemWithConfig:(id)a0 isSelected:(BOOL)a1;
- (BOOL)p_isPayAgainViewSource;
- (BOOL)p_isDypayHomepageScene;
- (void)p_callBackSelectedPayMethod:(id)a0;
- (id)p_configVoucherTagView:(id)a0 showVoucherTag:(BOOL)a1 voucherList:(id)a2;
- (id)p_configDescTitleLabel:(id)a0 showDescTitle:(BOOL)a1 enable:(BOOL)a2;
- (BOOL)p_needShowRightArrow:(id)a0;
- (BOOL)p_titleLabelWillTruncated;
- (void)p_trackEventName:(id)a0 params:(id)a1;
- (void)p_decideBubbleViewShow;
- (void)p_tapIconTipsImageView;
- (void)p_clickSelectionItem:(BOOL)a0;
- (void).cxx_destruct;
- (void)startLoading;
- (void)stopLoading;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupUI;
- (void)didSelect;

@end
