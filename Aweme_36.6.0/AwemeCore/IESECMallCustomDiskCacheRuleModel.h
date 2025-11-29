@class NSString, NSArray, NSDictionary;

@interface IESECMallCustomDiskCacheRuleModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *diskCache;
@property (copy, nonatomic) NSArray *bizTags;
@property (copy, nonatomic) NSArray *sceneTags;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *pattern;
@property (copy, nonatomic) NSDictionary *backupDiskCacheMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
