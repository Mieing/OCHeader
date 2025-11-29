@class NSString;

@interface AWECodeGenAssetModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *assetId;
@property (copy, nonatomic) NSString *modelVersion;
@property (nonatomic) BOOL c1500Uploaded;
@property (nonatomic) BOOL captionGenerated;
@property (nonatomic) BOOL isSensitive;
@property (nonatomic) int assetType;
@property (nonatomic) long long duration;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
