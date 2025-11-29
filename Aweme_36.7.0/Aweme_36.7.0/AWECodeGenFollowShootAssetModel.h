@class NSString;

@interface AWECodeGenFollowShootAssetModel : AWEBaseDataModel

@property (nonatomic) long long materialType;
@property (copy, nonatomic) NSString *materialData;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
