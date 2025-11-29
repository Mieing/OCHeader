@protocol WCPayBizOcrImageCgiDelegate;

@interface WCPayBizOcrImageCgi : WCPayBaseCgi

@property (weak) id<WCPayBizOcrImageCgiDelegate> m_delegate;

- (id)initWithDelegate:(id)a0;
- (void)startRequest:(id)a0;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;

@end
