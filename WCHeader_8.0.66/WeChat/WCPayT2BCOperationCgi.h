@protocol WCPayT2BCOperationCgiDelegate;

@interface WCPayT2BCOperationCgi : WCPayBaseCgi {
    id<WCPayT2BCOperationCgiDelegate> m_delegate;
}

- (id)initWithDelegate:(id)a0;
- (void)startWithRequest;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;

@end
