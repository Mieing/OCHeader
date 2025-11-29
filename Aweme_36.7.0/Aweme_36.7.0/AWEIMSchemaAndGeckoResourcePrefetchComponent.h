@class NSString, AWEIMComponentManager;

@interface AWEIMSchemaAndGeckoResourcePrefetchComponent : AWEIMComponentBase <AWEIMComponentManagerDependency, AWEIMComponentContainer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEIMComponentManager *componentManager;

+ (id)componentWithContext:(id)a0;

- (id)componentContext;
- (id)componentsNameArrayWithContext:(id)a0;
- (void)hostVC_afterFirstRender;
- (void)prefetchGeckoResourceIfNeeded;
- (void)prefetchSchemaComponentResourceIfNeeded;
- (void).cxx_destruct;

@end
