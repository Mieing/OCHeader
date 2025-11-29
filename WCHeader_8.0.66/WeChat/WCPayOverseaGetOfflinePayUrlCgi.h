@protocol WCPayOverseaGetOfflinePayUrlCgiDelegate;

@interface WCPayOverseaGetOfflinePayUrlCgi : WCPayBaseCgi {
    id<WCPayOverseaGetOfflinePayUrlCgiDelegate> m_delegate;
}

@property (nonatomic) BOOL didResponse;

- (id)initWithDelegate:(id)a0;
- (void)startRequest;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;
- (void)cacheResponse:(id)a0;
- (void).cxx_destruct;

@end
