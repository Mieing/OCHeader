@class QryAutoPlanOrderListReq;
@protocol WCPayQryLqtAutoPlanOrderListCgiDelegate;

@interface WCPayQryLqtAutoPlanOrderListCgi : WCPayBaseCgi

@property (weak) id<WCPayQryLqtAutoPlanOrderListCgiDelegate> m_delegate;
@property (retain) QryAutoPlanOrderListReq *planDetailReq;

- (void)clearDelegate;
- (unsigned long long)reqLimit;
- (id)init;
- (void)startRequest:(id)a0 delegate:(id)a1;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;

@end
