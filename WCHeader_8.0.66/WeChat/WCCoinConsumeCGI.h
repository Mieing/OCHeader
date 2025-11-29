@class ConsumeWecoinRequest, ConsumeWecoinResponse;
@protocol WCCoinConsumeCGIDelegate;

@interface WCCoinConsumeCGI : WCBaseCgi

@property (retain, nonatomic) ConsumeWecoinRequest *request;
@property (retain, nonatomic) ConsumeWecoinResponse *response;
@property (weak, nonatomic) id<WCCoinConsumeCGIDelegate> delegate;

- (id)init;
- (void)start;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
