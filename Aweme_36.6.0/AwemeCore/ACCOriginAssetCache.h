@class NSString, ACCPHAssetMeta;

@interface ACCOriginAssetCache : AWEBaseBizConfigModel

@property (retain, nonatomic) ACCPHAssetMeta *phAssetMeta;
@property (copy, nonatomic) NSString *sandboxPath;
@property (nonatomic) double lastAccessDate;

+ (id)phAssetMetaJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
