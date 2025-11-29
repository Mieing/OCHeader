@protocol WCRedEnvelopesGetTimeLimitPromoCgiDelegate;

@interface WCRedEnvelopesGetTimeLimitPromoCgi : WCPayBaseCgi {
    id<WCRedEnvelopesGetTimeLimitPromoCgiDelegate> m_delegate;
}

+ (id)GetLastTimeLimitPromoResponse;

- (void)startWithRequest:(id)a0;
- (id)initWithDelegate:(id)a0;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void)saveTimeLimitPromotion:(id)a0;
- (unsigned long long)getCgiNewDNSBusinessType;
- (void).cxx_destruct;

@end
