@class NSMapTable;

@interface KindaModule : NSObject {
    NSMapTable *viewModuleMap;
    NSMapTable *nativeModuleMap;
}

- (id)init;
- (void)configureModule;
- (void)onAppCreate;
- (void)registerView:(id)a0 _class:(Class)a1;
- (void)registerNativeModule:(id)a0 _class:(Class)a1;
- (void)initModuleInner;
- (void).cxx_destruct;

@end
