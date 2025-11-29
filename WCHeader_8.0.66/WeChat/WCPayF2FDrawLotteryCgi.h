@protocol WCPayF2FDrawLotteryCgiDelegate;

@interface WCPayF2FDrawLotteryCgi : WCPayBaseCgi {
    id<WCPayF2FDrawLotteryCgiDelegate> m_delegate;
}

- (void)startRequest:(id)a0;
- (void)startRequestWithoutNotify:(id)a0;
- (id)initWithDelegate:(id)a0;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;

@end
