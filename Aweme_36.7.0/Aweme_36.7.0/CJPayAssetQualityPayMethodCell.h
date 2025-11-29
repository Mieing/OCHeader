@class UIView, NSString, CJPayMultifunctionalAttributeLabel, CJPayStandardTagContainerView, UIImageView, CJPayStyleCheckMark, MASConstraint, CJPayMethodCellTagView, UILabel, CJPayAssetQualityPayMethodCollectionView;

@interface CJPayAssetQualityPayMethodCell : CJPayStyleBaseListCellView <CJPayBaseLoadingProtocol>

@property (retain, nonatomic) UIImageView *methodIconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) CJPayMultifunctionalAttributeLabel *descTitleLabel;
@property (retain, nonatomic) CJPayMethodCellTagView *voucherTagView1;
@property (retain, nonatomic) CJPayMethodCellTagView *voucherTagView2;
@property (retain, nonatomic) CJPayStandardTagContainerView *voucherTagContainer;
@property (retain, nonatomic) UIView *rightDomainView;
@property (retain, nonatomic) CJPayStyleCheckMark *confirmImageView;
@property (retain, nonatomic) UIImageView *rightArrowImage;
@property (retain, nonatomic) UILabel *rightTipsMsgLabel;
@property (retain, nonatomic) CJPayAssetQualityPayMethodCollectionView *subAssetsCollectionView;
@property (retain, nonatomic) MASConstraint *titleLabelTopBaseContainerViewConstraint;
@property (retain, nonatomic) MASConstraint *titleLabelCenterYBaseContainerViewConstraint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindViewModel:(id)a0;
- (void)p_reloadContentWithViewModel:(id)a0;
- (void)p_updateLayoutWithViewModel:(id)a0;
- (void)p_setupUIComponentWithModel:(id)a0;
- (void)p_callBackSelectedPayMethod:(id)a0;
- (id)p_configDescTitleLabel:(id)a0 showDescTitle:(BOOL)a1 enable:(BOOL)a2;
- (BOOL)p_needShowRightArrow:(id)a0;
- (BOOL)p_titleLabelWillTruncated;
- (void)p_trackEventName:(id)a0 params:(id)a1;
- (void)p_tapIconTipsImageView;
- (id)p_combineDetailAmountstr:(id)a0;
- (void)p_resetVoucherTag:(BOOL)a0;
- (void)p_trackVoucherTagShow;
- (id)p_configVoucherTagView:(id)a0 showVoucherTag:(BOOL)a1 voucherTagWrapLine:(BOOL)a2 cellWidth:(double)a3 layoutConfig:(id)a4 voucherList:(id)a5;
- (void)p_tapSubtitle:(id)a0;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)startLoading;
- (void)stopLoading;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupUI;
- (void)didSelect;

@end
