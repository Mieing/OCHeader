@class PrepareIncomeEncashResponse, PrepareIncomeEncashRequest;
@protocol WCCoinPrepareIncomeEncashCgiDelegate;

@interface WCCoinPrepareIncomeEncashCgi : WCBaseCgi

@property (retain, nonatomic) PrepareIncomeEncashRequest *request;
@property (retain, nonatomic) PrepareIncomeEncashResponse *response;
@property (weak, nonatomic) id<WCCoinPrepareIncomeEncashCgiDelegate> delegate;

- (id)init;
- (void)start;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
