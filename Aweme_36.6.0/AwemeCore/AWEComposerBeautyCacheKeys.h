@class NSString;

@interface AWEComposerBeautyCacheKeys : NSObject

@property (copy, nonatomic) NSString *effectSetCachePrefix;
@property (copy, nonatomic) NSString *categoryCachePrefix;
@property (copy, nonatomic) NSString *selectedChildCategoryCachePrefix;
@property (copy, nonatomic) NSString *effectConfigurationPrefix;
@property (copy, nonatomic) NSString *effectAppliedEffectsCacheKey;
@property (copy, nonatomic) NSString *categorySwitchOnKey;
@property (copy, nonatomic) NSString *appliedFilterPlaceHolder;
@property (copy, nonatomic) NSString *appliedFilterIDKey;
@property (copy, nonatomic) NSString *consecutiveRecognizedAsFemaleCountKey;
@property (copy, nonatomic) NSString *panelLastSelectedTabIDKey;
@property (copy, nonatomic) NSString *businessName;
@property (readonly, copy, nonatomic) NSString *selectedTimeStampKey;

- (id)initWithBusinessName:(id)a0;
- (id)p_cacheKey:(id)a0 withPrefix:(id)a1;
- (void).cxx_destruct;

@end
