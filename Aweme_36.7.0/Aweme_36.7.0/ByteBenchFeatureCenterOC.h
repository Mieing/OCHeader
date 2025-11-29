@class NSMutableSet;

@interface ByteBenchFeatureCenterOC : NSObject

@property (retain, nonatomic) NSMutableSet *eventSet;

+ (void)setFloatValue:(id)a0 value:(float)a1 group:(id)a2;
+ (void)setStringValue:(id)a0 value:(id)a1 group:(id)a2;
+ (void)setEventSource:(id)a0 param:(id)a1;
+ (void)registerFeatureProcessConfig:(id)a0;
+ (void)registerFeatureComponent:(id)a0;
+ (void)updateFeatureStringValue:(id)a0 forKey:(id)a1;
+ (void)updateFeatureDoubleValue:(double)a0 forKey:(id)a1;
+ (void)registerFeaturePool:(id)a0 poolName:(id)a1;
+ (void)unregisterFeaturePool:(id)a0;
+ (void)unregisterFeaturePool:(id)a0 levelName:(id)a1;
+ (id)sharedInstance;

- (void)configEventFilter;
- (void).cxx_destruct;
- (id)init;

@end
