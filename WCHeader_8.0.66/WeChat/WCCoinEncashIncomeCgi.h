@class EncashIncomeResponse, EncashIncomeRequest;
@protocol WCCoinEncashIncomeCgiDelegate;

@interface WCCoinEncashIncomeCgi : WCBaseCgi

@property (retain, nonatomic) EncashIncomeRequest *request;
@property (retain, nonatomic) EncashIncomeResponse *response;
@property (weak, nonatomic) id<WCCoinEncashIncomeCgiDelegate> delegate;

- (id)init;
- (void)start;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
