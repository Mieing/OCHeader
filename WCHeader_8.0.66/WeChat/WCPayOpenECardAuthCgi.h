@class OpenECardAuthReq;
@protocol WCPayOpenECardAuthCgiDelegate;

@interface WCPayOpenECardAuthCgi : WCPayBaseCgi

@property (retain, nonatomic) OpenECardAuthReq *authRequest;
@property (weak, nonatomic) id<WCPayOpenECardAuthCgiDelegate> delegate;

- (id)init;
- (void)startRequest;
- (void)failWithECardCgiError:(id)a0;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;

@end
