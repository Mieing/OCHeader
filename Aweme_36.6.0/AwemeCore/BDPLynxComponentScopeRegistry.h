@class NSMutableDictionary;

@interface BDPLynxComponentScopeRegistry : LynxComponentScopeRegistry

@property (retain, nonatomic) NSMutableDictionary *uiClassesTimor;
@property (retain, nonatomic) NSMutableDictionary *shadowNodeClassesTimor;

- (void)registerUI:(Class)a0 withName:(id)a1;
- (void)registerShadowNode:(Class)a0 withName:(id)a1;
- (Class)uiClassWithName:(id)a0 accessible:(BOOL *)a1;
- (Class)shadowNodeClassWithName:(id)a0 accessible:(BOOL *)a1;
- (id)allRegisteredComponent;
- (void).cxx_destruct;
- (id)init;

@end
