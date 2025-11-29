@class NSString;
@protocol RTVVoipWebServiceAdapterProtocol, RTVEffectGameMonitor, RTVXRControllerInjector;

@interface RTVEffectGameWebService : NSObject <RTVEffectGameWebService>

@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, nonatomic) id<RTVVoipWebServiceAdapterProtocol> webServiceAccess;
@property (readonly, nonatomic) id<RTVEffectGameMonitor> monitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rtv_awakeFromControllerInjector;
- (id)gameListWithPanel:(id)a0;
- (id)preparePageWithRequest:(id)a0;
- (id)invokeGameWithCreateRequest:(id)a0;
- (id)reportGameWithReadyRequest:(id)a0;
- (id)changeGameWithChangeRequest:(id)a0;
- (id)terminateGameWithTerminateRequest:(id)a0;
- (id)__performRequestWithString:(id)a0 andParams:(id)a1;
- (void).cxx_destruct;

@end
