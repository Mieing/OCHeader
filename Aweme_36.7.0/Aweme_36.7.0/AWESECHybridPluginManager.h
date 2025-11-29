@class NSString;

@interface AWESECHybridPluginManager : NSObject <SECHybridPluginObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hybridPluginClassDidRegistered:(Class)a0;
- (void)hybridPluginInstanceDidRegistered:(id)a0;
- (void)setupPlugins;

@end
