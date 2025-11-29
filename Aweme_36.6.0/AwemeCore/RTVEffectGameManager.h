@class NSString;
@protocol RTVEffectGameWebService, RTVXRControllerInjector;

@interface RTVEffectGameManager : NSObject <RTVEffectGameManager>

@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, nonatomic) id<RTVEffectGameWebService> webService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rtv_awakeFromControllerInjector;
- (id)gameListWithPanel:(id)a0;
- (id)preparePageWithRequest:(id)a0;
- (id)invokeGameWithCreateModel:(id)a0;
- (id)reportGameWithReadyModel:(id)a0;
- (id)changeGameWithChangeModel:(id)a0;
- (id)terminateGameWithTerminateModel:(id)a0;
- (void).cxx_destruct;

@end
