@class NSSet, NSString;

@interface AWEIMLPOSetting : HTSService <AWEIMLPOSetting>

@property (readonly, copy, nonatomic) NSSet *lowPowFeatures;
@property (readonly, copy, nonatomic) NSSet *allFeatures;
@property (readonly, copy, nonatomic) NSSet *lowPowModeBlockFeature;
@property (readonly, nonatomic) unsigned long long lowPowOptimizeStrategy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (BOOL)featureAllowedToEnableWithKey:(id)a0;
- (BOOL)featureEnableWithKey:(id)a0;
- (BOOL)featureEnableWithKey:(id)a0 defaultValue:(BOOL)a1;
- (BOOL)__isValidWithFeatureKey:(id)a0;
- (id)__featureABValueForKey:(id)a0;
- (BOOL)__isLowPowDevice;
- (id)__transformArrayToSet:(id)a0;
- (void).cxx_destruct;

@end
