@class NSString;

@interface AWERootWindowInitTask : NSObject <HTSBootTask>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (id)initWindow;
+ (Class)aAWEMainModuleServiceDOUYINSSAdapterClass;
+ (Class)aAWEMainModuleServiceDOUYINLGAdapterClass;
+ (void)rootWindowInit;
+ (Class)aAWEMainModuleServiceDOUYINDSAdapterClass;
+ (Class)aAWEMainModuleServiceDOUYINJXAdapterClass;
+ (void)reloadTabbarDefault;
+ (void)setupNetCombine;
+ (void)reloadTabbarIfHitSecondPageDispatchOpt;
+ (void)reloadTabBarWhenExternalRouterCompleteByTimer:(BOOL)a0 params:(id)a1;
+ (void)execute;

- (id)aAWEPadModuleAdapter;
- (id)aAWEMainModuleServiceDOUYINSSAdapter;
- (id)aAWEMainModuleServiceDOUYINLGAdapter;
- (id)aAWEMainModuleServiceDOUYINDSAdapter;
- (id)aAWEMainModuleServiceDOUYINJXAdapter;

@end
