@class UIView, NSString, NSArray, UIImageView, CJPayStyleCheckMark, CJPayBytePayMethodCreditPayCollectionView, MASConstraint, CJPayMethodCellTagView, UILabel;
@protocol CJPayBytePayCreditPayMethodModel;

@interface CJPayDyPayCreditMethodCell : CJPayStyleBaseListCellView <CJPayBaseLoadingProtocol>

@property (retain, nonatomic) UIImageView *creditIconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UILabel *descTitleLabel;
@property (retain, nonatomic) UIView *bubbleBGView;
@property (retain, nonatomic) UILabel *bubbleLabel;
@property (retain, nonatomic) UILabel *rightTitleLabel;
@property (retain, nonatomic) UIView *disableView;
@property (retain, nonatomic) CJPayStyleCheckMark *confirmImageView;
@property (retain, nonatomic) UIImageView *rightArrowImage;
@property (retain, nonatomic) CJPayMethodCellTagView *discountView1;
@property (retain, nonatomic) CJPayMethodCellTagView *discountView2;
@property (retain, nonatomic) CJPayBytePayMethodCreditPayCollectionView *collectionView;
@property (copy, nonatomic) NSArray<CJPayBytePayCreditPayMethodModel> *creditPayMethods;
@property (retain, nonatomic) MASConstraint *discountTagTopBaseTitleBottomConstraint;
@property (retain, nonatomic) MASConstraint *discountTagTopBaseDescBottomConstraint;
@property (retain, nonatomic) MASConstraint *descBottomBaseSuperViewBottomConstraint;
@property (retain, nonatomic) MASConstraint *descTopBaseTagViewBottomConstraint;
@property (retain, nonatomic) MASConstraint *descTopBaseTitleBottomConstraint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindViewModel:(id)a0;
- (void)p_reloadContentWithViewModel:(id)a0;
- (void)p_updateLayoutWithViewModel:(id)a0;
- (BOOL)p_isPayAgainViewSource;
- (void)p_decideBubbleViewShow;
- (void).cxx_destruct;
- (void)startLoading;
- (void)stopLoading;
- (void)layoutSubviews;
- (void)setupUI;
- (void)didSelect;

@end
