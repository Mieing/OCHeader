@class WXPNetworkServiceImpl;

@interface WXPLiteAppNetworkService : NSObject

@property (retain, nonatomic) WXPNetworkServiceImpl *networkService;

- (id)init;
- (id)getBaseRequest:(int)a0;
- (void)request:(id)a0 data:(id)a1 callback:(id /* block */)a2;
- (void)onRequestError:(id)a0 callback:(id /* block */)a1;
- (void)onRequestCompleteWithErrType:(int)a0 responseData:(id)a1 extraInfo:(id)a2 callback:(id /* block */)a3;
- (void).cxx_destruct;

@end
