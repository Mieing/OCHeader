@class TTNetworkManager, NSString;
@protocol RxInjector;

@interface RTVHTTPClient : NSObject <RxHTTPClient>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) TTNetworkManager *networkManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (id)sendAsynchronousRequest:(id)a0 queue:(id)a1;
- (void).cxx_destruct;

@end
