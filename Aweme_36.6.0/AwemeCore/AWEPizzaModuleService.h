@class NSString;

@interface AWEPizzaModuleService : HTSService <AWEPizzaModuleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)generateEngineWithDomainName:(id)a0 config:(id)a1;
- (BOOL)pizzaFrameForbid;
- (Class)pizzaLaunchTask;

@end
