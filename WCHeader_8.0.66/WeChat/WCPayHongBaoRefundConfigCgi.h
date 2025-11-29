@protocol WCPayHongBaoRefundConfigCgiDelegate;

@interface WCPayHongBaoRefundConfigCgi : WCPayBaseCgi {
    id<WCPayHongBaoRefundConfigCgiDelegate> m_delegate;
}

- (void)startRequest;
- (id)initWithDelegate:(id)a0;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;

@end
