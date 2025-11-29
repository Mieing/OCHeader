@protocol GetCoverSetRedDotInfoCgiDelegate;

@interface GetCoverSetRedDotInfoCgi : WCPayBaseCgi

@property (weak, nonatomic) id<GetCoverSetRedDotInfoCgiDelegate> m_delegate;

- (void)startRequest;
- (id)initWithDelegate:(id)a0;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (unsigned long long)getCgiNewDNSBusinessType;
- (void).cxx_destruct;

@end
