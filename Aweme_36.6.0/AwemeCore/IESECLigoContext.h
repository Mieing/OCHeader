@class IESECLigoEventHandler, NSMutableDictionary, IESECEventPublisher, NSString;
@protocol IESECLigoComponentsHandler;

@interface IESECLigoContext : IESECContext <IESECComponentManagerViewModel>

@property (retain, nonatomic) NSMutableDictionary *globalParamsDic;
@property (retain, nonatomic) IESECLigoEventHandler *eventHandler;
@property (retain, nonatomic) NSMutableDictionary *serviceCenter;
@property (weak, nonatomic) id<IESECLigoComponentsHandler> componentsHandler;
@property (retain, nonatomic) IESECEventPublisher *globalParamsDicDidChangeEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)publishEvent:(id)a0 params:(id)a1;
- (void)putLigoGlobalParamsConstantObject:(id)a0 forKey:(id)a1;
- (id)getLigoGlobalParamsNumberValueForKey:(id)a0;
- (id)getLigoGlobalParamsDictionaryValueForKey:(id)a0;
- (void)putLigoGlobalParamsVariableObject:(id /* block */)a0 forKey:(id)a1;
- (void)clearGlobalParamsWithKey:(id)a0;
- (void)clearComponentsWithRegionName:(id)a0;
- (void)clearGlobalParams;
- (id)getLigoGlobalParamsStringValueForKey:(id)a0;
- (id)getLigoComponentWithLocalRegionName:(id)a0;
- (void)removeServiceFromComponent:(id)a0;
- (void)clearLigoComponentsDic;
- (void)subscriberOpenMessage:(id)a0 messageClass:(Class)a1;
- (void)appendService:(id)a0 fromComponent:(id)a1;
- (id)getLigoGlobalParamsObjectWithKey:(id)a0;
- (BOOL)getLigoGlobalParamsBoolValueForKey:(id)a0;
- (id)getLigoGlobalParamsArrayValueForKey:(id)a0;
- (void)clearAllDicData;
- (void)requestLoadBusinessDefineComponent:(id)a0;
- (id)requestUnLoadBusinessDefineComponent:(id)a0;
- (id)requestGetAbilityBusinessDefineComponent:(id)a0;
- (void).cxx_destruct;
- (void)registerEvent:(id)a0;
- (id)init;

@end
