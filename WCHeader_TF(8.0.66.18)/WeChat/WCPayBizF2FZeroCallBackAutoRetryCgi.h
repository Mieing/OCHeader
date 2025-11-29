@class WCPayBusiF2FZeroCallBackCgi, BusiF2FZeroCallBackReq, NSString;
@protocol WCPayBusiF2FZeroCallBackCgiDelegate;

@interface WCPayBizF2FZeroCallBackAutoRetryCgi : NSObject <WCPayBusiF2FZeroCallBackCgiDelegate>

@property (nonatomic) unsigned int m_retryTimes;
@property (nonatomic) double m_retryInterval;
@property (weak, nonatomic) id<WCPayBusiF2FZeroCallBackCgiDelegate> m_cgiDelegate;
@property (retain, nonatomic) WCPayBusiF2FZeroCallBackCgi *m_zeroPayCgi;
@property (retain, nonatomic) BusiF2FZeroCallBackReq *m_request;
@property (nonatomic) unsigned int m_currentRetryTimes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0 retryTimes:(unsigned int)a1 retryInterval:(unsigned int)a2;
- (void)startRequest:(id)a0;
- (void)startFirstRequest;
- (void)startRetryRequest;
- (void)onWCPayBusiF2FZeroCallBackCgiResp:(id)a0;
- (void)onWCPayBusiF2FZeroCallBackCgiError:(id)a0;
- (void).cxx_destruct;

@end
