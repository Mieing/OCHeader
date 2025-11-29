@protocol WCRedEnvelopesGetRedPacketPreviewCgiDelegate;

@interface WCRedEnvelopesGetRedPacketPreviewCgi : WCPayBaseCgi {
    id<WCRedEnvelopesGetRedPacketPreviewCgiDelegate> m_delegate;
}

- (id)initWithDelegate:(id)a0;
- (void)startWithRequest:(id)a0;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (unsigned long long)getCgiNewDNSBusinessType;
- (void).cxx_destruct;

@end
