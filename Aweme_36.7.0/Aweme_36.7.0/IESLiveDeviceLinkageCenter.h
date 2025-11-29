@class NSMutableDictionary;

@interface IESLiveDeviceLinkageCenter : NSObject

@property (retain, nonatomic) NSMutableDictionary *eventProcessor;

- (void)onReceiveFrontierMessage:(id)a0;
- (void)addEventProcessor:(id /* block */)a0 event:(id)a1;
- (void)sendSubscribeRequestWithEvent:(id)a0 completion:(id /* block */)a1;
- (void)sendUnSubscribeRequestWithEvent:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)_sendRequest:(id)a0 completion:(id /* block */)a1;
- (void)dealloc;
- (void)removeEventProcessor:(id)a0;

@end
