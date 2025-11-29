@class IESLLTempoEffectManager, IESLLTempoContext, IESLLTempoRunLoopDispatch, IESLLTempoOpenTree, NSObject;
@protocol IESLLTempoTemplateRenderDelegate, OS_dispatch_semaphore;

@interface IESLLTempoTemplateRender : NSObject

@property (weak, nonatomic) IESLLTempoContext *context;
@property (retain, nonatomic) IESLLTempoOpenTree *currentTree;
@property (retain, nonatomic) IESLLTempoOpenTree *wipTree;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;
@property (retain, nonatomic) IESLLTempoEffectManager *effectManager;
@property (retain, nonatomic) IESLLTempoRunLoopDispatch *runLoopDispatch;
@property (weak, nonatomic) id<IESLLTempoTemplateRenderDelegate> delegate;

- (id)viewWithIdSelector:(id)a0;
- (void)loadAnimation;
- (void)loadData:(id)a0 globalProps:(id)a1;
- (void)preloadData:(id)a0 globalProps:(id)a1;
- (void)updateData:(id)a0 globalProps:(id)a1 componentID:(id)a2;
- (void)performWorkOnRoot;
- (void)createWipTreeWithEffectMap:(id)a0;
- (void)sizeChangeCallbackWithNode:(id)a0;
- (void)__invokeUIWithActionArr:(id)a0 callback:(id /* block */)a1;
- (void)invokeUIWithIdSelector:(id)a0 methodName:(id)a1 methodParams:(id)a2 callback:(id /* block */)a3;
- (void)callJSOnDestroy;
- (void)invokeUIWithActionArr:(id)a0 callback:(id /* block */)a1;
- (void)loadAllNodeAnimation;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)dealloc;

@end
