@class NSSet, NSMutableDictionary;

@interface LynxComponentScopeRegistry : NSObject

@property (retain, nonatomic) NSMutableDictionary *uiClasses;
@property (retain, nonatomic) NSMutableDictionary *shadowNodeClasses;
@property (readonly, nonatomic) NSSet *allRegisteredComponent;

+ (void)tryRegisterBuiltInClasses;
+ (void)registerBuiltInBehaviors:(id)a0;

- (void)registerUI:(Class)a0 withName:(id)a1;
- (void)registerShadowNode:(Class)a0 withName:(id)a1;
- (Class)uiClassWithName:(id)a0 accessible:(BOOL *)a1;
- (Class)shadowNodeClassWithName:(id)a0 accessible:(BOOL *)a1;
- (void)makeIntoGloabl;
- (void).cxx_destruct;
- (id)init;

@end
