@class WCPaySendBindCardAwardCgiRequest;
@protocol WCPaySendBindCardAwardCgiDelegate;

@interface WCPaySendBindCardAwardCgi : WCPayBaseTenPayCgi

@property (retain, nonatomic) WCPaySendBindCardAwardCgiRequest *m_queryRequest;
@property (weak, nonatomic) id<WCPaySendBindCardAwardCgiDelegate> m_delegate;

- (id)init;
- (void)startRequest;
- (void)failWithError:(id)a0;
- (void)didGetTenPayResponse:(id)a0;
- (void)didGetTenPayError:(id)a0;
- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;

@end
