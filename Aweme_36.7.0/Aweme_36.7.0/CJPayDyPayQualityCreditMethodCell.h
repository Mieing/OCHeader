@class UIView, NSString, NSArray, UIImageView, CJPayStyleCheckMark, CJPayCoupleLabelView, UILabel, CJPayDyPayQuailtyMethodCreditPayCollectionView;
@protocol CJPayBytePayCreditPayMethodModel;

@interface CJPayDyPayQualityCreditMethodCell : CJPayStyleBaseListCellView <CJPayBaseLoadingProtocol>

@property (retain, nonatomic) UIImageView *creditIconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UILabel *descTitleLabel;
@property (retain, nonatomic) UILabel *rightTitleLabel;
@property (retain, nonatomic) UIView *disableView;
@property (retain, nonatomic) CJPayStyleCheckMark *confirmImageView;
@property (retain, nonatomic) UIImageView *rightArrowImage;
@property (retain, nonatomic) CJPayCoupleLabelView *voucherView;
@property (retain, nonatomic) CJPayDyPayQuailtyMethodCreditPayCollectionView *collectionView;
@property (copy, nonatomic) NSArray<CJPayBytePayCreditPayMethodModel> *creditPayMethods;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindViewModel:(id)a0;
- (void)p_reloadContentWithViewModel:(id)a0;
- (void)p_updateLayoutWithViewModel:(id)a0;
- (BOOL)p_needShowRightArrowForModel:(id)a0;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)startLoading;
- (void)stopLoading;
- (void)setupUI;
- (void)didSelect;

@end
