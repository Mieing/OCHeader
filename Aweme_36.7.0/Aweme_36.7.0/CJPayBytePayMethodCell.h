@class UIView, CJPayStandardProtocolLabel, NSString, UIImageView, CJPayCoupleLabelView, CJPaySubPayTypeIconTipModel, CJPayMethodCellTagView, UILabel;

@interface CJPayBytePayMethodCell : CJPayMethodTableViewCell <CJPayBaseLoadingProtocol>

@property (retain, nonatomic) UIView *topLineView;
@property (retain, nonatomic) UILabel *rightMsgLabel;
@property (retain, nonatomic) CJPayCoupleLabelView *voucherLabelView;
@property (retain, nonatomic) CJPayMethodCellTagView *discountView;
@property (retain, nonatomic) CJPayMethodCellTagView *cardBinView;
@property (retain, nonatomic) UIImageView *rightArrowImage;
@property (retain, nonatomic) UIImageView *iconImgView;
@property (retain, nonatomic) CJPaySubPayTypeIconTipModel *iconTip;
@property (retain, nonatomic) UILabel *tipsMsgLabel;
@property (retain, nonatomic) CJPayStandardProtocolLabel *subProtocolLabel;
@property (nonatomic) double titleBottomBaseContentOffset;
@property (copy, nonatomic) id /* block */ clickSubProtocolBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)calHeight:(id)a0;
+ (BOOL)p_hasProtocolSubTitleWithBizModel:(id)a0;
+ (id)p_protocolSubTitleWithBizModel:(id)a0;
+ (BOOL)p_staticHasVoucherWithBizModel:(id)a0;
+ (double)p_subProtocolHeight:(id)a0;

- (void)standardProtocolLabelDidSelectedLinkUrlString:(id)a0;
- (BOOL)p_tagsOverMaxPx:(id)a0 maxWidth:(double)a1 textSize:(double)a2 height:(double)a3;
- (BOOL)p_hasVoucherWithBizModel:(id)a0;
- (void)p_setUpSubTitleUI:(id)a0;
- (void)p_setupSubProtocolUI:(id)a0;
- (void)p_newCustomerUpdatetipsLabel:(id)a0 subPayModel:(id)a1;
- (void)p_tapIncomePayAboutImageView;
- (void)standardProtocolLabelDidSelectedNonLinkStr;
- (void).cxx_destruct;
- (void)startLoading;
- (void)stopLoading;
- (void)setupUI;
- (void)updateContent:(id)a0;

@end
