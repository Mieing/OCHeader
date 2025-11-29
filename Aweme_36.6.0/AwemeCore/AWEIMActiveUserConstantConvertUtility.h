@class NSDictionary;

@interface AWEIMActiveUserConstantConvertUtility : NSObject

@property (copy) NSDictionary *enum_forceFetchSourceKey;
@property (copy) NSDictionary *enum_loopFetchSourceKey;
@property (copy) NSDictionary *fetchSourceKey_enum;

+ (unsigned long long)sourceTypeFromFetchSourceKey:(id)a0;
+ (id)forceFetchSourceKeyFromSourceTypeEnum:(unsigned long long)a0;
+ (id)loopFetchSourceKeyFromSourceTypeEnum:(unsigned long long)a0;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;

@end
