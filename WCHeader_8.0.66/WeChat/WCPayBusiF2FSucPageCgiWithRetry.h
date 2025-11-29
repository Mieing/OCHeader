@class BusiF2FSucPageReq, NSString, WCPayBusiF2FSucPageCgi;
@protocol WCPayBusiF2FSucPageCgiDelegate;

@interface WCPayBusiF2FSucPageCgiWithRetry : NSObject <WCPayBusiF2FSucPageCgiDelegate>

@property (weak) id<WCPayBusiF2FSucPageCgiDelegate> m_delegate;
@property (retain) WCPayBusiF2FSucPageCgi *m_cgi;
@property BOOL m_delayStart;
@property unsigned int m_firstDelay;
@property unsigned int m_retryDelay;
@property unsigned int m_maxRetryCount;
@property (retain) BusiF2FSucPageReq *m_request;
@property unsigned int m_currentRetryCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (void)startRequest:(id)a0 delayStart:(BOOL)a1 firstDelay:(unsigned int)a2 retryDelay:(unsigned int)a3 maxRetryCount:(unsigned int)a4;
- (void)delayStartRequest;
- (void)onWCPayBusiF2FSucPageCgiResp:(id)a0;
- (void)onWCPayBusiF2FSucPageCgiError:(id)a0;
- (void).cxx_destruct;

@end
