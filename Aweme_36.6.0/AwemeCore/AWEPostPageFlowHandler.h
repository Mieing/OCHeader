@class NSString;
@protocol AWEPostPageContext, AWEPostPageFlowServiceDependencies;

@interface AWEPostPageFlowHandler : NSObject <AWEPostPageFlowService>

@property (retain, nonatomic) id<AWEPostPageFlowServiceDependencies> dependencies;
@property (readonly, nonatomic) id<AWEPostPageContext> context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindServices:(id)a0;
- (void)p_storeContext;
- (void)storeContextForBack;
- (void)storeContextForCancel:(id /* block */)a0;
- (void)storeContextForExit:(id /* block */)a0;
- (void).cxx_destruct;

@end
