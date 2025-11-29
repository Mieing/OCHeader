@class NSString;
@protocol RTVJetWebAccessInterface, RxInjector, RTVVoipNetworkSettingManagerInterface, RTVHttpWebServiceAccessProtocol;

@interface RTVVoipWebServiceAccessAdapter : NSObject <RTVVoipWebServiceAdapterProtocol>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVHttpWebServiceAccessProtocol> httpWebService;
@property (readonly, nonatomic) id<RTVJetWebAccessInterface> webAccess;
@property (readonly, nonatomic) id<RTVVoipNetworkSettingManagerInterface> settingManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (id)GETRequestWithName:(id)a0 queryItems:(id)a1;
- (id)POSTRequestWithName:(id)a0 queryItems:(id)a1 JSONBody:(id)a2;
- (id)POSTRequestWithName:(id)a0 queryItems:(id)a1 data:(id)a2 contentType:(id)a3;
- (id)JSONWithURLRequest:(id)a0;
- (id)GETRequestWithURL:(id)a0 queryItems:(id)a1;
- (id)POSTRequestWithURL:(id)a0 queryItems:(id)a1 JSONBody:(id)a2;
- (id)setupJSONRequestSerializerWithRequest:(id)a0;
- (id)setupJSONFormRequestSerializerWithRequest:(id)a0;
- (BOOL)webSocketRequestEnable;
- (id)setupRequestHeaderForColdRequest:(id)a0 isManulRequest:(BOOL)a1;
- (id)__JSONFromData:(id)a0;
- (void).cxx_destruct;

@end
