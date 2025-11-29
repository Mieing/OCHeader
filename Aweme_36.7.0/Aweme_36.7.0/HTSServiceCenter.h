@class NSRecursiveLock, NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface HTSServiceCenter : NSObject {
    NSMutableDictionary *p_hashService;
    NSMutableDictionary *p_hashProtocolService;
    NSMutableDictionary *p_hashProtocolInstance;
    NSMutableDictionary *p_hashProtocolScope;
    NSRecursiveLock *p_lock;
    NSString *bundleName;
    Class block_cls;
}

@property (class, nonatomic) BOOL debugAssertOn;

@property (copy, nonatomic) NSArray *targetStringArray;
@property (copy, nonatomic) NSDictionary *abTestConfig;

+ (id)abConfig;
+ (id)abConfig;
+ (BOOL)getSwitchWithKey:(id)a0;
+ (id)defaultCenter;

- (void)bindClass:(Class)a0 toProtocol:(id)a1;
- (void)unbindProtocol:(id)a0;
- (id)getProtocolService:(id)a0;
- (id)convertAndCheckForClassNameFromStandardProtocolName:(id)a0;
- (Class)swiftClassForClassName:(id)a0;
- (void)bindBlock:(id /* block */)a0 toProtocol:(id)a1;
- (BOOL)__isEmptyString:(id)a0;
- (int)__checkScopeType:(id)a0;
- (id)__convertAndCheckForClassNameFromStandardProtocolName:(id)a0;
- (Class)__swiftClassForClassName:(id)a0;
- (int)__getScopeType:(id)a0;
- (Class)__convertDIClass:(id)a0;
- (BOOL)__isConformsScopeDI:(Class)a0;
- (id)__getMultipleInstanceProtocolName:(id)a0;
- (id)__getSingleInstanceProtocolName:(id)a0;
- (id)__getWeakSingletonInstanceProtocolName:(id)a0;
- (BOOL)__isSupportScopeScenarios:(id)a0;
- (id)__getInstanceProtocol:(id)a0;
- (void)registABTestConfig:(id /* block */)a0;
- (Class)getStatelessProtocolService:(id)a0;
- (Class)getClassFromProtocol:(id)a0;
- (void)callEnterForeground;
- (void)callEnterBackground;
- (void)callTerminate;
- (void)callServiceMemoryWarning;
- (void)callClearData;
- (void).cxx_destruct;
- (void)removeService:(Class)a0;
- (id)init;
- (void)dealloc;
- (id)getService:(Class)a0;

@end
