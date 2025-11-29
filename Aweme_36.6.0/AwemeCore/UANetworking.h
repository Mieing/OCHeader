@class NSString, NSOperationQueue;

@interface UANetworking : NSObject <UAServiceNetwork>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSOperationQueue *networkQueue;

- (id /* block */)taskCallbackForType:(BOOL)a0 request:(id)a1 redirection:(id /* block */)a2 completion:(id /* block */)a3;
- (void)startNetworkInService:(id)a0 forType:(BOOL)a1 request:(id)a2 completion:(id /* block */)a3;
- (void)startNetworkInService:(id)a0 forType:(BOOL)a1 request:(id)a2 configuration:(id)a3 completion:(id /* block */)a4;
- (void)startTask:(BOOL)a0 withRequest:(id)a1 configuration:(id)a2 redirection:(id /* block */)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;
- (id)init;
- (void)cancel;

@end
