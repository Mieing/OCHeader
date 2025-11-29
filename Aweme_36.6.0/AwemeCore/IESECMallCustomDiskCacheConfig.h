@class NSArray, NSString;

@interface IESECMallCustomDiskCacheConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL mallDiskEnable;
@property (nonatomic) int mallDiskAgeLimit;
@property (nonatomic) int mallDiskSizeLimit;
@property (nonatomic) int mallBackupDiskSizeLimit;
@property (nonatomic) int mallBackupDiskAgeLimit;
@property (copy, nonatomic) NSArray *mallBackupBizTags;
@property (copy, nonatomic) NSArray *rules;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)rulesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
