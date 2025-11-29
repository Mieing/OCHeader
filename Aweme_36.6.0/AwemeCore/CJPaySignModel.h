@class NSString, NSDictionary, CJPaySignPayTemplateInfo, NSArray;

@interface CJPaySignModel : NSObject

@property (nonatomic) long long tradeAmount;
@property (nonatomic) long long promotionAmount;
@property (nonatomic) long long realTradeAmount;
@property (retain, nonatomic) CJPaySignPayTemplateInfo *signTemplateInfo;
@property (copy, nonatomic) NSString *nextDeductDate;
@property (copy, nonatomic) NSString *userAccount;
@property (nonatomic) BOOL hasBankCard;
@property (copy, nonatomic) NSDictionary *protocolGroupNames;
@property (copy, nonatomic) NSArray *protocolInfo;
@property (copy, nonatomic) NSString *guideMessage;
@property (copy, nonatomic) NSString *deductMethodDesc;
@property (copy, nonatomic) NSString *promotionDesc;

- (void).cxx_destruct;

@end
