@class NSString, NSDictionary;

@interface CJPayStayAlertForOrderModel : NSObject

@property (copy, nonatomic) NSString *tradeNo;
@property (copy, nonatomic) NSString *skipPwdDowngradeTradeNo;
@property (nonatomic) BOOL shouldShow;
@property (nonatomic) BOOL hasShow;
@property (copy, nonatomic) NSDictionary *userRetainInfo;

- (id)initWithTradeNo:(id)a0;
- (BOOL)shouldShowWithIdentifer:(id)a0;
- (BOOL)isSkipPwdDowngradeWithTradeNo:(id)a0;
- (void).cxx_destruct;

@end
