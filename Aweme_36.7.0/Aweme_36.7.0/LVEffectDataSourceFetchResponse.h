@class NSArray, NSError;

@interface LVEffectDataSourceFetchResponse : NSObject

@property (retain, nonatomic) NSArray *effects;
@property (retain, nonatomic) NSError *error;

+ (void)registerEffectNotFoundEstimatorClass:(Class)a0;
+ (id)p_effectNotFoundEstimatorClasses;
+ (id)responseWithEffects:(id)a0 error:(id)a1;
+ (id)responseWithEffects:(id)a0;
+ (void)unregisterEffectNotFoundEstimatorClass:(Class)a0;
+ (id)responseWithError:(id)a0;

- (id)initWithEffects:(id)a0 error:(id)a1;
- (BOOL)isEffectNotFoundError;
- (void).cxx_destruct;

@end
