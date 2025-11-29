@protocol WCRedEnvelopesGetShowResourcesCgiDelegate;

@interface WCRedEnvelopesGetShowResourcesCgi : WCPayBaseCgi {
    id<WCRedEnvelopesGetShowResourcesCgiDelegate> m_delegate;
}

- (id)initWithDelegate:(id)a0;
- (void)startWithRequest:(id)a0;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;
- (unsigned long long)getCgiNewDNSBusinessType;
- (void).cxx_destruct;

@end
