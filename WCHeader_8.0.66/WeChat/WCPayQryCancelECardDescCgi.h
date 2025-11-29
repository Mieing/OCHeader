@class QryCancelECardDescReq;
@protocol WCPayQryCancelECardDescCgiDelegate;

@interface WCPayQryCancelECardDescCgi : WCPayBaseCgi

@property (retain, nonatomic) QryCancelECardDescReq *request;
@property (weak, nonatomic) id<WCPayQryCancelECardDescCgiDelegate> delegate;

- (id)init;
- (void)startRequest;
- (void)failWithECardCgiError:(id)a0;
- (void)cacheResponse:(id)a0;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;

@end
