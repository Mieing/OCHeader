@class NSString, NSMutableDictionary;
@protocol IMBPublicServiceDispatcher;

@interface MBExternalFinderLive : MMUserService <MMServiceProtocol>

@property (weak, nonatomic) id<IMBPublicServiceDispatcher> dispatcher;
@property (retain, nonatomic) NSMutableDictionary *playerItemsMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerFinderLiveTexture:(id)a0 withId:(long long)a1 extraData:(id)a2 dispatcher:(id)a3 retBlock:(id /* block */)a4;
- (void)unregisterFinderLiveTexture:(id)a0 withId:(long long)a1 retBlock:(id /* block */)a2;
- (void)startPlay:(long long)a0 retBlock:(id /* block */)a1;
- (void)stopPlay:(long long)a0 retBlock:(id /* block */)a1;
- (void)clean;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void).cxx_destruct;

@end
