@class NSDictionary, NSString;

@interface TMBPEAModule : TMModule <TMBPEAService>

@property (retain, nonatomic) NSDictionary *modules;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_setupConfig;
- (void)setupPresetAuthMap:(id)a0;
- (void)setupPresetLimitConfig:(id)a0;
- (id)_bpeaConfig;
- (id)_allModuleClasses;
- (id)configFromDict:(id)a0 withClass:(Class)a1;
- (void)setupAPIControlConfig;
- (void).cxx_destruct;
- (void)updateWithConfig:(id)a0;
- (void)start;

@end
