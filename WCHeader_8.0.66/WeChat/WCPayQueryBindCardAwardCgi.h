@class WCPayQueryBindCardAwardCgiRequest;
@protocol WCPayQueryBindCardAwardCgiDelegate;

@interface WCPayQueryBindCardAwardCgi : WCPayBaseTenPayCgi

@property (retain, nonatomic) WCPayQueryBindCardAwardCgiRequest *m_queryRequest;
@property (weak, nonatomic) id<WCPayQueryBindCardAwardCgiDelegate> m_delegate;

- (id)init;
- (void)startRequest;
- (void)failWithError:(id)a0;
- (void)didGetTenPayResponse:(id)a0;
- (void)didGetTenPayError:(id)a0;
- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;

@end
