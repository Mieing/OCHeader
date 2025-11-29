@class RxWebServiceAccessConnector;
@protocol RxInjector;

@interface RxWebServiceAccess : RxWebServiceAccessBase

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) RxWebServiceAccessConnector *connector;

+ (Class)webServiceAccessConnectorClass;

- (void)rxAwakeFromPropertyInjection;
- (id)_makeURLWithName:(id)a0;
- (id)GETRequestWithName:(id)a0 queryItems:(id)a1;
- (id)POSTRequestWithName:(id)a0 queryItems:(id)a1 JSONBody:(id)a2;
- (id)POSTRequestWithName:(id)a0 queryItems:(id)a1 data:(id)a2 contentType:(id)a3;
- (id)PUTRequestWithName:(id)a0 queryItems:(id)a1 JSONBody:(id)a2;
- (id)DELETERequestWithName:(id)a0 queryItems:(id)a1;
- (void).cxx_destruct;
- (id)webServiceURL;
- (id)hostURL;

@end
