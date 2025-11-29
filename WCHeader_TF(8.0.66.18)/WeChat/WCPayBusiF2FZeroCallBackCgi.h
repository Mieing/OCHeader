@protocol WCPayBusiF2FZeroCallBackCgiDelegate;

@interface WCPayBusiF2FZeroCallBackCgi : WCPayBaseCgi

@property (weak, nonatomic) id<WCPayBusiF2FZeroCallBackCgiDelegate> m_cgiDelegate;

- (id)initWithDelegate:(id)a0;
- (void)startRequest:(id)a0;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;

@end
