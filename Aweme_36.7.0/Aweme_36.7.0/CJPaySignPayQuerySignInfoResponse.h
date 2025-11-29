@class NSString, NSDictionary, CJPaySignPayTemplateInfo, NSArray;
@protocol CJPayMemAgreementModel;

@interface CJPaySignPayQuerySignInfoResponse : CJPayIntergratedBaseResponse

@property (nonatomic) long long tradeAmount;
@property (nonatomic) long long promotionAmount;
@property (nonatomic) long long realTradeAmount;
@property (copy, nonatomic) NSString *promotionDesc;
@property (retain, nonatomic) CJPaySignPayTemplateInfo *signTemplateInfo;
@property (copy, nonatomic) NSString *nextDeductDate;
@property (copy, nonatomic) NSString *userAccount;
@property (nonatomic) BOOL hasBankCard;
@property (copy, nonatomic) NSDictionary *protocolGroupNames;
@property (copy, nonatomic) NSArray<CJPayMemAgreementModel> *protocolInfo;
@property (copy, nonatomic) NSString *guideMessage;
@property (copy, nonatomic) NSString *deductOrderUrl;
@property (copy, nonatomic) NSString *dypayReturnUrl;
@property (copy, nonatomic) NSString *deductMethodDesc;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (id)toSignModel;
- (void).cxx_destruct;

@end
