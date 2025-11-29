@class NSString, NSArray, CJPayTypeVoucherMsgV2Model, CJPayDefaultChannelShowConfig;

@interface CJPayChannelBizModel : NSObject

@property (nonatomic) long long index;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *discountStr;
@property (copy, nonatomic) NSString *cardBindVoucherStr;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSArray *dynamicSubTitle;
@property (copy, nonatomic) NSString *subTitleColorStr;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *channelStr;
@property (copy, nonatomic) NSString *reasonStr;
@property (copy, nonatomic) NSString *rightDiscountStr;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) CJPayDefaultChannelShowConfig *channelConfig;
@property (nonatomic) BOOL isConfirmed;
@property (nonatomic) BOOL hasConfirmBtnWhenUnConfirm;
@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL hasSub;
@property (nonatomic) BOOL isNoActive;
@property (copy, nonatomic) NSString *limitMsgStr;
@property (copy, nonatomic) NSString *WithDrawMsgStr;
@property (nonatomic) unsigned long long comeFromSceneType;
@property (copy, nonatomic) NSString *code;
@property (copy, nonatomic) NSString *tipsMsg;
@property (nonatomic) BOOL isChooseMethodSubPage;
@property (nonatomic) BOOL isLineBreak;
@property (nonatomic) BOOL isDefaultBytePay;
@property (nonatomic) BOOL showCombinePay;
@property (nonatomic) BOOL isCombinePayBackToHomePage;
@property (nonatomic) BOOL isCombinePay;
@property (nonatomic) unsigned long long combineType;
@property (nonatomic) BOOL isEcommercePay;
@property (nonatomic) BOOL isPaymentForOuterApp;
@property (nonatomic) BOOL isIntegerationChooseMethodSubPage;
@property (readonly, nonatomic) BOOL isUnionBindCard;
@property (nonatomic) BOOL isDYRecommendPayAgain;
@property (nonatomic) BOOL isFromCombinePay;
@property (copy, nonatomic) NSString *homePageShowStyle;
@property (nonatomic) BOOL useSubPayListVoucherMsg;
@property (copy, nonatomic) NSArray *subPayTypeData;
@property (copy, nonatomic) NSString *primaryCombinePayAmount;
@property (nonatomic) BOOL isNeedTopLine;
@property (copy, nonatomic) NSString *selectPageGuideText;
@property (nonatomic) unsigned long long voucherMsgV2Type;
@property (retain, nonatomic) CJPayTypeVoucherMsgV2Model *voucherMsgV2Model;

- (id)toMethodInfoTracker;
- (BOOL)isDisplayCreditPayMetheds;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isEqual:(id)a0;

@end
