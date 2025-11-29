@class BusiF2FGetFavorReq;
@protocol WCPayBusiF2FGetFavorCgiDelegate;

@interface WCPayBusiF2FGetFavorCgi : WCPayBaseCgi

@property (weak, nonatomic) id<WCPayBusiF2FGetFavorCgiDelegate> m_cgiDelegate;
@property (retain) BusiF2FGetFavorReq *m_nextRequest;
@property BOOL m_isLoading;
@property double m_interval;

- (id)initWithDelegate:(id)a0 interval:(double)a1;
- (BOOL)isLoading;
- (void)start;
- (void)startNextRequest:(id)a0;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;
- (void)delayStartRequest;
- (void).cxx_destruct;

@end
