@class NSString;
@protocol LynxTrailServiceABExperimentProtocol;

@interface LynxTrailService : NSObject <LynxServiceTrailProtocol, LynxServiceTrailExtensionProtocol> {
    Class _abExperimentClass;
    id<LynxTrailServiceABExperimentProtocol> _abExperiment;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)lynxLazyLoad;
+ (id)__lynx_auto_register_trail_service_ab_experiment__LynxABExperiment90;
+ (id)getInstanceWithClass:(Class)a0;
+ (id)sharedInstance;

- (id)stringValueForTrailKey:(id)a0;
- (id)objectValueForTrailKey:(id)a0;
- (id)getAllValues;
- (void)parseLynxViewBuilder:(id)a0;
- (void)updateSettings:(id)a0 withTime:(long long)a1;
- (id)stringValueForTrailKeyFromLibra:(id)a0;
- (id)objectValueForTrailKeyFromLibra:(id)a0;
- (void)ensureABExperimentInstance;
- (void)registerABExperiment:(Class)a0;
- (id)stringValueForTrailKeyFromSettings:(id)a0;
- (id)objectValueForTrailKeyFromSettings:(id)a0;
- (void).cxx_destruct;

@end
