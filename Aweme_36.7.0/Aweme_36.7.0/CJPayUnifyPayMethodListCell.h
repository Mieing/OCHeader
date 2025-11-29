@class UIView, CJPayUnifyPayMethodCollectionView, NSString, CJPayStandardTagContainerView, CJPayMultifunctionalAttributeLabel, UIImageView, CJPayStyleCheckMark, MASConstraint, UILabel;

@interface CJPayUnifyPayMethodListCell : CJPayStyleBaseListCellView <CJPayBaseLoadingProtocol>

@property (retain, nonatomic) UIImageView *methodIconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) CJPayStandardTagContainerView *voucherTagContainer;
@property (retain, nonatomic) CJPayMultifunctionalAttributeLabel *descTitleLabel;
@property (retain, nonatomic) UIImageView *iconTipsImageView;
@property (retain, nonatomic) UIView *rightDomainView;
@property (retain, nonatomic) CJPayStyleCheckMark *confirmImageView;
@property (retain, nonatomic) UIImageView *rightArrowImage;
@property (retain, nonatomic) UILabel *rightTipsMsgLabel;
@property (retain, nonatomic) CJPayUnifyPayMethodCollectionView *subAssetsCollectionView;
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
- (id)p_configDescTitleLabel:(id)a0 showDescTitle:(BOOL)a1 enable:(BOOL)a2;
- (BOOL)p_needShowRightArrow:(id)a0;
- (BOOL)p_titleLabelWillTruncated;
- (void)p_trackEventName:(id)a0 params:(id)a1;
- (void)p_tapIconTipsImageView;
- (id)p_combineDetailAmountstr:(id)a0;
- (void)p_trackVoucherTagShow;
- (void)p_callBackSelectedPayMethod:(id)a0 fromSubAsset:(BOOL)a1 trackParams:(id)a2;
- (id)p_determineSelectedSubAssetConfig:(id)a0 parentConfig:(id)a1;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)startLoading;
- (void)stopLoading;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupUI;
- (void)didSelect;

@end
