@protocol WCCoinGetIncomePageInfoCgiDelegate;

@interface WCCoinGetIncomePageInfoCgi : WCBaseCgi

@property (weak, nonatomic) id<WCCoinGetIncomePageInfoCgiDelegate> delegate;

- (id)init;
- (void)start;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
