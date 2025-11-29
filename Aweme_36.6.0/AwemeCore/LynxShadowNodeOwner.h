@class LynxLayoutTick, NSMutableDictionary, LynxLayoutNodeManager, LynxUIContext, LynxUIOwner, NSMutableSet, LynxComponentScopeRegistry;
@protocol LynxShadowNodeDelegate;

@interface LynxShadowNodeOwner : NSObject {
    LynxUIOwner *_uiOwner;
    NSMutableDictionary *_nodeHolder;
    NSMutableSet *_tagSet;
    LynxComponentScopeRegistry *_componentRegistry;
    LynxLayoutNodeManager *_layoutNodeManager;
    BOOL _destroyed;
    id<LynxShadowNodeDelegate> _delegate;
    float _rootWidth;
    float _rootHeight;
}

@property (readonly) LynxLayoutTick *layoutTick;
@property (readonly, weak, nonatomic) LynxUIContext *uiContext;

- (float)rootHeight;
- (void)destroySelf;
- (id)nodeWithSign:(long long)a0;
- (long long)createNodeWithSign:(long long)a0 tagName:(id)a1 props:(id)a2 eventSet:(id)a3 lepusEventSet:(id)a4 isParentInlineContainer:(BOOL)a5;
- (void)insertNode:(long long)a0 toParent:(long long)a1 atIndex:(long long)a2;
- (void)removeNode:(long long)a0 fromParent:(long long)a1 atIndex:(long long)a2;
- (void)moveNode:(long long)a0 inParent:(long long)a1 fromIndex:(long long)a2 toIndex:(long long)a3;
- (void)destroyNode:(long long)a0;
- (void)updateNodeWithSign:(long long)a0 props:(id)a1 eventSet:(id)a2 lepusEventSet:(id)a3;
- (void)didLayoutStartOnNode:(long long)a0;
- (void)didUpdateLayoutLeft:(double)a0 top:(double)a1 width:(double)a2 height:(double)a3 onNode:(long long)a4;
- (void)updateRootSize:(float)a0 height:(float)a1;
- (void)initLayoutNodeManager:(void *)a0;
- (void)didLayoutStartRecursivelyOnNode:(id)a0;
- (id)initWithUIOwner:(id)a0 layoutTick:(id)a1 isAsyncLayout:(BOOL)a2;
- (void)setLayoutTick:(id)a0;
- (void)didLayoutFinished;
- (void).cxx_destruct;
- (id)init;
- (void)destroy;
- (void)setDelegate:(id)a0;
- (float)rootWidth;

@end
