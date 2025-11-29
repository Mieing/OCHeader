@class PrepareWecoinConsumeRequest, PrepareWecoinConsumeResponse;
@protocol WCCoinPrepareConsumeCgiDelegate;

@interface WCCoinPrepareConsumeCgi : WCBaseCgi

@property (retain, nonatomic) PrepareWecoinConsumeRequest *request;
@property (retain, nonatomic) PrepareWecoinConsumeResponse *response;
@property (weak, nonatomic) id<WCCoinPrepareConsumeCgiDelegate> delegate;

- (id)init;
- (void)start;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
