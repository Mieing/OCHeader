@class CJPayMethodCellTagView, CJPayStyleCheckMark, UIImageView, NSString, UILabel, UIView, MASConstraint;

@interface CJPayDyPayMethodCell : CJPayStyleBaseListCellView <CJPayBaseLoadingProtocol>

@property (retain, nonatomic) UIImageView *bankIconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIView *bubbleBGView;
@property (retain, nonatomic) UILabel *bubbleLabel;
@property (retain, nonatomic) CJPayMethodCellTagView *discountView;
@property (retain, nonatomic) CJPayMethodCellTagView *cardbinVoucherView;
@property (retain, nonatomic) UIView *rightDomainView;
@property (retain, nonatomic) UIView *disableView;
@property (retain, nonatomic) CJPayStyleCheckMark *confirmImageView;
@property (retain, nonatomic) UIImageView *rightArrowImage;
@property (retain, nonatomic) UILabel *rightTipsMsgLabel;
@property (retain, nonatomic) UILabel *descTitleLabel;
@property (retain, nonatomic) MASConstraint *titleLabelTopBaseContainerViewConstraint;
@property (retain, nonatomic) MASConstraint *titleLabelCenterYBaseContainerViewConstraint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindViewModel:(id)a0;
- (void)p_reloadContentWithViewModel:(id)a0;
- (void)p_updateLayoutWithViewModel:(id)a0;
- (BOOL)p_isPayAgainViewSource;
- (BOOL)p_titleLabelWillTruncated;
- (void)p_decideBubbleViewShow;
- (id)p_combineDetailAmountstr:(id)a0;
- (BOOL)p_needShowCombineDetailAmount:(id)a0;
- (BOOL)p_isAssetInCombineStatus:(id)a0;
- (id)p_discountStrWithViewModel:(id)a0;
- (BOOL)p_needShowRightArrowForModel:(id)a0;
- (void).cxx_destruct;
- (void)startLoading;
- (void)stopLoading;
- (void)layoutSubviews;
- (void)setupUI;
- (void)didSelect;

@end
