@class NSString, NSDictionary;

@interface IESForestPreloadConfig : NSObject

@property (copy, nonatomic) NSString *mainUrl;
@property (nonatomic) unsigned long long renderType;
@property (copy, nonatomic) NSDictionary *subResources;

+ (id)configWithDictionary:(id)a0 andMainUrl:(id)a1;
+ (unsigned long long)renderTypeWithStringType:(id)a0;
+ (id)subResourcesWithDictionary:(id)a0;
+ (id)preloadOrderedTypes;
+ (id)search_preloadConfigWithDynamicComponents:(id)a0;

- (id)subResourceConfigs;
- (void).cxx_destruct;

@end
