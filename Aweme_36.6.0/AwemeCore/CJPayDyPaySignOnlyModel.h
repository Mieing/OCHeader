@class CJPaySignDeductMethodModel, NSString, CJPayAppUserInfo, NSURL, CJPayServiceDescPopup, NSDictionary, CJPayRecommendUserInfo, CJPayCommonProtocolModel, CJPayDyPayPromotionVoucherInfo, CJPayCreditRiskFundModel, NSNumber;

@interface CJPayDyPaySignOnlyModel : NSObject

@property (nonatomic) unsigned long long screenStyle;
@property (copy, nonatomic) NSString *creditPageStyle;
@property (retain, nonatomic) NSURL *logoURL;
@property (copy, nonatomic) NSString *serviceName;
@property (retain, nonatomic) CJPayCreditRiskFundModel *riskFund;
@property (copy, nonatomic) NSString *serviceShortDesc;
@property (retain, nonatomic) CJPayServiceDescPopup *serviceDescPopup;
@property (copy, nonatomic) NSString *merchantLogoURL;
@property (copy, nonatomic) NSString *merchantNameTitle;
@property (copy, nonatomic) NSString *merchantName;
@property (copy, nonatomic) NSString *serviceDescribeTitle;
@property (copy, nonatomic) NSString *serviceDescribe;
@property (nonatomic) BOOL serviceDescSupportFold;
@property (copy, nonatomic) NSString *displayMessageTitle;
@property (copy, nonatomic) NSString *maskMessage;
@property (copy, nonatomic) NSString *clearMessage;
@property (copy, nonatomic) NSString *openUserTitle;
@property (retain, nonatomic) CJPayAppUserInfo *currentAppUserInfo;
@property (retain, nonatomic) CJPayRecommendUserInfo *recommendUserInfo;
@property (retain, nonatomic) CJPaySignDeductMethodModel *deductMethodModel;
@property (nonatomic) BOOL isHiddenMethodSelected;
@property (copy, nonatomic) NSString *serviceDescImg;
@property (nonatomic) BOOL isUseVoucherNewStyle;
@property (copy, nonatomic) NSString *bubbleStr;
@property (nonatomic) BOOL isNeedArrow;
@property (copy, nonatomic) NSString *confirmSignButtonStr;
@property (retain, nonatomic) CJPayCommonProtocolModel *protocolModel;
@property (copy, nonatomic) NSString *protocolShowPosition;
@property (retain, nonatomic) CJPayDyPayPromotionVoucherInfo *promotionVoucherInfo;
@property (copy, nonatomic) NSDictionary *promotionVoucherInfoDic;
@property (nonatomic) double timeLimit;
@property (copy, nonatomic) NSDictionary *lynxCardTrackerParams;
@property (retain, nonatomic) NSNumber *headerViewTopContentViewMargin;
@property (nonatomic) BOOL isDetailViewNeedScroll;
@property (nonatomic) BOOL isHiddenWaterMarkView;
@property (copy, nonatomic) id /* block */ clickServiceDescTips;
@property (copy, nonatomic) id /* block */ clickDetail;
@property (copy, nonatomic) id /* block */ clickBubble;
@property (copy, nonatomic) id /* block */ clickConfirmBtn;
@property (copy, nonatomic) id /* block */ clickProtocol;
@property (copy, nonatomic) id /* block */ openProtocolWithGroupId;
@property (copy, nonatomic) id /* block */ checkBoxClickBlock;
@property (copy, nonatomic) id /* block */ clickExpand;
@property (copy, nonatomic) id /* block */ changeAccountBlock;
@property (copy, nonatomic) id /* block */ technicalTrackerBlock;

- (BOOL)p_isMatchRiskFundStyle;
- (BOOL)needShowProtocol;
- (void)p_setupCreditSignContentViewModel:(id)a0;
- (void)p_setupSignOnlyContentViewModel:(id)a0;
- (id)p_buildDeductMethodModelWithResponse:(id)a0;
- (void).cxx_destruct;
- (id)initWithResponse:(id)a0;

@end
