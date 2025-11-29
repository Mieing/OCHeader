@class NSString, CJPayCombinePayLimitModel;

@interface CJPayFrontCashierResultModel : NSObject

@property (copy, nonatomic) NSString *tradeStatus;
@property (copy, nonatomic) NSString *processInfoStr;
@property (nonatomic) long long closeAfterTime;
@property (retain, nonatomic) CJPayCombinePayLimitModel *limitModel;
@property (copy, nonatomic) NSString *bankCardId;
@property (copy, nonatomic) NSString *combineType;

- (void).cxx_destruct;

@end
