@class CgiTransferPayCheckReq;
@protocol WCPayTransferPayCheckCgiDelegate;

@interface WCPayTransferPayCheckCgi : WCPayBaseCgi

@property (weak, nonatomic) id<WCPayTransferPayCheckCgiDelegate> cgiDelegate;
@property (retain, nonatomic) CgiTransferPayCheckReq *request;

- (id)initWithDelegate:(id)a0 request:(id)a1;
- (void)startRequest;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;

@end
