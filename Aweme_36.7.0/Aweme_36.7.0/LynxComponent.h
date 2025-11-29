@class NSMutableArray;

@interface LynxComponent : NSObject

@property (weak, nonatomic) id parent;
@property (readonly, nonatomic) NSMutableArray *children;

- (void)removeChild:(id)a0 atIndex:(long long)a1;
- (void)propsDidUpdate;
- (void)onNodeReady;
- (void)didAddSubComponent:(id)a0;
- (void)willMoveToSuperComponent:(id)a0;
- (void)didMoveToSuperComponet;
- (void)willRemoveComponent:(id)a0;
- (void)animationPropsDidUpdate;
- (void)transformPropsDidUpdate;
- (void)onNodeRemoved;
- (void)onNodeReload;
- (void).cxx_destruct;
- (id)init;
- (void)insertChild:(id)a0 atIndex:(long long)a1;

@end
