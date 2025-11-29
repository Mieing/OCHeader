@class NSString;

@interface BDXBridgeLifeCreationAssetResource : BDXBridgeModel

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *assetId;
@property (nonatomic) long long fileType;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
