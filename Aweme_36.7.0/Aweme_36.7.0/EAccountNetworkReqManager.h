@interface EAccountNetworkReqManager : NSObject

+ (id)requestSerialization:(id)a0 Param:(id)a1 httpMethod:(id)a2 timeoutInterval:(double)a3;
+ (id)getSocketRequestWithURL:(id)a0;
+ (void)JSCallClientPreLogin:(id)a0 block:(id /* block */)a1;
+ (id)getNewLogEntity;
+ (void)loadNetworkData:(id)a0 Param:(id)a1 httpMethod:(id)a2 bt:(id)a3 timeoutModel:(id)a4 responsBlack:(id /* block */)a5;
+ (void)loadNetworkDataWithWWAN:(id)a0 Param:(id)a1 httpMethod:(id)a2 bt:(id)a3 timeoutModel:(id)a4 responsBlack:(id /* block */)a5;
+ (void)preGetMobileRedirect:(id)a0 redirectReqId:(id)a1 redirectOrder:(id)a2 timeoutInterval:(double)a3 block:(id /* block */)a4;
+ (void)requestNetDataWithWWAN:(id)a0 param:(id)a1 httpMethod:(id)a2 bt:(id)a3 timeoutModel:(id)a4 responsBlack:(id /* block */)a5;

- (void)dealloc;

@end
