@class OpenECardReq;
@protocol WCPayOpenECardCgiDelegate;

@interface WCPayOpenECardCgi : WCPayBaseTenPayCgi

@property (retain, nonatomic) OpenECardReq *request;
@property (weak, nonatomic) id<WCPayOpenECardCgiDelegate> delegate;

- (id)init;
- (void)startRequest;
- (void)failWithECardCgiError:(id)a0;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;

@end
