@protocol WCPayBusiF2FSucPageCgiDelegate;

@interface WCPayBusiF2FSucPageCgi : WCPayBaseCgi

@property (weak, nonatomic) id<WCPayBusiF2FSucPageCgiDelegate> m_cgiDelegate;

- (id)initWithDelegate:(id)a0;
- (void)startRequest:(id)a0;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;

@end
