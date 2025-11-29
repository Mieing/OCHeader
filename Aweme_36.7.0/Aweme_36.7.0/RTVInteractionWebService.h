@protocol RTVVoipWebServiceAdapterProtocol, RxInjector, RTVInteractionMonitorInterface;

@interface RTVInteractionWebService : NSObject

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVVoipWebServiceAdapterProtocol> webServiceAccess;
@property (readonly, nonatomic) id<RTVInteractionMonitorInterface> monitor;

- (void)rxAwakeFromPropertyInjection;
- (id)__postRequestWithName:(id)a0 jsonBody:(id)a1;
- (id)sendReplyOperationRequestWith:(id)a0 toUserID:(id)a1;
- (id)ackWithSequenceID:(id)a0;
- (id)sendOperationRequestWith:(id)a0;
- (id)pullReceiveOperationsRecentlyWithRoomID:(long long)a0;
- (id)__jsonRequestWithPath:(id)a0 params:(id)a1 requestConfig:(id /* block */)a2;
- (id)__jsonRequestWithPath:(id)a0 params:(id)a1;
- (void).cxx_destruct;

@end
