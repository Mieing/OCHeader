@protocol WCPayLQTCloseFundAccountCgiDelegate;

@interface WCPayLQTCloseFundAccountCgi : WCPayBaseCgi

@property (weak, nonatomic) id<WCPayLQTCloseFundAccountCgiDelegate> cgiDelegate;

- (id)initWithdelegate:(id)a0 request:(id)a1;
- (void)startSendRequest;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;

@end
