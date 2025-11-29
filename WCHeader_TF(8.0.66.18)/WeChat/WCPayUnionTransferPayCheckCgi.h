@class CgiUnionTransferPayCheckReq;
@protocol WCPayUnionTransferPayCheckCgiDelegate;

@interface WCPayUnionTransferPayCheckCgi : WCPayBaseCgi {
    id<WCPayUnionTransferPayCheckCgiDelegate> m_delegate;
}

@property (retain, nonatomic) CgiUnionTransferPayCheckReq *request;

- (id)initWithDelegate:(id)a0;
- (void)startWithRequest:(id)a0;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;

@end
