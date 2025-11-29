@protocol WCPayT2BCDeleteRecordCgiDelegate;

@interface WCPayT2BCDeleteRecordCgi : WCPayBaseCgi {
    id<WCPayT2BCDeleteRecordCgiDelegate> m_delegate;
}

- (id)initWithDelegate:(id)a0;
- (void)startRequest:(id)a0;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;

@end
