@protocol RTVVoipWebServiceAdapterProtocol, RxInjector, RTVFeedMonitorInterface;

@interface RTVFeedWebService : NSObject

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVVoipWebServiceAdapterProtocol> webServiceAccess;
@property (readonly, nonatomic) id<RTVFeedMonitorInterface> monitor;

- (void)rxAwakeFromPropertyInjection;
- (id)__getRequestWithName:(id)a0 queryItems:(id)a1;
- (id)__postRequestWithName:(id)a0 jsonBody:(id)a1;
- (id)activeInteractionWindow:(BOOL)a0 withRoomID:(id)a1;
- (id)pullFeedShareWithRoomID:(id)a0 roomType:(long long)a1;
- (id)requestHotFeedWithRoomID:(id)a0;
- (id)dispatchRequestWithType:(long long)a0 RoomID:(id)a1 roomType:(long long)a2 data:(id)a3;
- (id)__JSONWithApiName:(id)a0 params:(id)a1 needIgnoreTips:(BOOL)a2;
- (id)__businessErrorWithError:(id)a0;
- (id)__JSONWithApiName:(id)a0 params:(id)a1;
- (void).cxx_destruct;

@end
