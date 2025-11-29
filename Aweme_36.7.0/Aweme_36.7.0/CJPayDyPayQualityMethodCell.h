@class CJPayStyleCheckMark, CJPayCoupleLabelView, UIImageView, NSString, UILabel, UIView, MASConstraint;

@interface CJPayDyPayQualityMethodCell : CJPayStyleBaseListCellView <CJPayBaseLoadingProtocol>

@property (retain, nonatomic) UIImageView *bankIconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) CJPayCoupleLabelView *voucherView;
@property (retain, nonatomic) UIView *rightDomainView;
@property (retain, nonatomic) UIView *disableView;
@property (retain, nonatomic) CJPayStyleCheckMark *confirmImageView;
@property (retain, nonatomic) UIImageView *rightArrowImage;
@property (retain, nonatomic) UILabel *rightTipsMsgLabel;
@property (retain, nonatomic) UILabel *descTitleLabel;
@property (retain, nonatomic) MASConstraint *titleLabelTopBaseContainerViewConstraint;
@property (retain, nonatomic) MASConstraint *titleLabelCenterYBaseContainerViewConstraint;
@property (retain, nonatomic) MASConstraint *titleLabelRightBaseContainerViewConstraint;
@property (retain, nonatomic) MASConstraint *titleLabelRightCombineBaseContainerViewConstraint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindViewModel:(id)a0;
- (void)p_reloadContentWithViewModel:(id)a0;
- (void)p_updateLayoutWithViewModel:(id)a0;
- (BOOL)p_titleLabelWillTruncated;
- (BOOL)p_needShowRightArrowForModel:(id)a0;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)startLoading;
- (void)stopLoading;
- (void)setupUI;
- (void)didSelect;

@end
