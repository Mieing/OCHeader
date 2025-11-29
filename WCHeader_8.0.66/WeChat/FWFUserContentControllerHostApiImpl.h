@class FWFInstanceManager;

@interface FWFUserContentControllerHostApiImpl : NSObject <FWFWKUserContentControllerHostApi>

@property (weak, nonatomic) FWFInstanceManager *instanceManager;

- (id)initWithInstanceManager:(id)a0;
- (id)userContentControllerForIdentifier:(long long)a0;
- (void)createFromWebViewConfigurationWithIdentifier:(long long)a0 configurationIdentifier:(long long)a1 error:(id *)a2;
- (void)addScriptMessageHandlerForControllerWithIdentifier:(long long)a0 handlerIdentifier:(long long)a1 ofName:(id)a2 error:(id *)a3;
- (void)removeScriptMessageHandlerForControllerWithIdentifier:(long long)a0 name:(id)a1 error:(id *)a2;
- (void)removeAllScriptMessageHandlersForControllerWithIdentifier:(long long)a0 error:(id *)a1;
- (void)addUserScriptForControllerWithIdentifier:(long long)a0 userScript:(id)a1 error:(id *)a2;
- (void)removeAllUserScriptsForControllerWithIdentifier:(long long)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
