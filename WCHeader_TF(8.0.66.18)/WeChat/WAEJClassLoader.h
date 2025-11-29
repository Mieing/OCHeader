@class NSMutableDictionary;

@interface WAEJClassLoader : NSObject {
    NSMutableDictionary *classCache;
}

@property (readonly, nonatomic) struct OpaqueJSClass { } *jsConstructorClass;

- (id)initWithScriptView:(id)a0 name:(id)a1;
- (void)addSubContext:(id)a0 context:(struct OpaqueJSContext { } *)a1 name:(id)a2;
- (void)dealloc;
- (id)getJSClass:(id)a0 isComponent:(BOOL)a1;
- (id)loadJSClass:(id)a0 isComponent:(BOOL)a1;

@end
