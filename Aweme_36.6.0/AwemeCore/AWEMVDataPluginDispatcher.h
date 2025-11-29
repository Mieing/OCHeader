@class NSMapTable, AWEMVChannelPageContext, NSString, AWEMVWeakArray;
@protocol AWEMVDataControllerProtocol;

@interface AWEMVDataPluginDispatcher : NSObject <AWEMVDataPluginProtocol>

@property (weak, nonatomic) id<AWEMVDataControllerProtocol> dataController;
@property (retain, nonatomic) AWEMVWeakArray *plugins;
@property (readonly, nonatomic) NSMapTable *caches;
@property (weak, nonatomic) AWEMVChannelPageContext *mvContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldInterceptFetchWithContext:(id)a0 completion:(id /* block */)a1;
- (BOOL)shouldInterceptResponseCompletion:(id /* block */)a0 responseModel:(id)a1 context:(id)a2;
- (id)initWithDataController:(id)a0 context:(id)a1;
- (void)addPlugins:(id)a0;
- (id)pluginsByProtocol:(id)a0;
- (id)pluginsBySelector:(SEL)a0;
- (id)pluginByProtocol:(id)a0;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;

@end
