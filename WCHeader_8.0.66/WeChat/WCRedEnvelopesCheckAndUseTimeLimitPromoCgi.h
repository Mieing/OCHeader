@protocol WCRedEnvelopesCheckAndUseTimeLimitPromoCgiDelegate;

@interface WCRedEnvelopesCheckAndUseTimeLimitPromoCgi : WCPayBaseCgi {
    id<WCRedEnvelopesCheckAndUseTimeLimitPromoCgiDelegate> m_delegate;
}

- (void)startWithRequest:(id)a0;
- (id)initWithDelegate:(id)a0;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;
- (unsigned long long)getCgiNewDNSBusinessType;
- (void).cxx_destruct;

@end
