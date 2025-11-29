@class NSString;

@interface LynxModuleService : NSObject <LynxServiceModuleProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)serviceScope;
+ (id)serviceBizID;
+ (unsigned long long)serviceType;

- (void)initGlobalProps:(id)a0;
- (void)clearModuleForDestroy:(id)a0;
- (void)cloneGlobalPropsForReload:(id)a0;

@end
