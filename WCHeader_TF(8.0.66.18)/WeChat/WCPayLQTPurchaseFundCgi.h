@protocol WCPayLQTPurchaseFundCgiDelegate;

@interface WCPayLQTPurchaseFundCgi : WCPayBaseCgi

@property (weak, nonatomic) id<WCPayLQTPurchaseFundCgiDelegate> cgiDelegate;

- (id)initWithDelegate:(id)a0 request:(id)a1;
- (void)startSendRequest;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;

@end
