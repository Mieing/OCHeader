@class NSString, WCPayBindCardInfo;

@interface WCPayFetchBalanceReport : NSObject

@property (retain, nonatomic) NSString *reportSessionId;
@property (retain, nonatomic) WCPayBindCardInfo *defaultCardBinInfo;

- (id)init;
- (void)reportActionId:(unsigned int)a0 cardBinInfo:(id)a1;
- (void).cxx_destruct;

@end
