@class NSString, UIImageView, CJPaySubPayTypeIconTipModel, UILabel;

@interface CJPayBytePayMethodSecondaryCell : CJPayMethodSecondaryCellView <CJPayBaseLoadingProtocol>

@property (retain, nonatomic) UIImageView *iconImgView;
@property (retain, nonatomic) CJPaySubPayTypeIconTipModel *iconTip;
@property (retain, nonatomic) UILabel *rightMsgLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)calHeight:(id)a0;
+ (BOOL)p_isDiscountLineBreakWithBizModel:(id)a0;
+ (BOOL)p_isDisplayDiscountLabel:(id)a0;

- (void)p_tapIncomePayAboutImageView;
- (void)p_refreshVoucherLabel:(id)a0;
- (void)p_refreshDiscountView:(id)a0;
- (void).cxx_destruct;
- (void)startLoading;
- (void)stopLoading;
- (void)setupUI;
- (void)updateContent:(id)a0;

@end
