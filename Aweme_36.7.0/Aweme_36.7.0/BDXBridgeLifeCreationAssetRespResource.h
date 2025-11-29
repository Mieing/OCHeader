@class NSNumber, NSString;

@interface BDXBridgeLifeCreationAssetRespResource : BDXBridgeModel

@property (retain, nonatomic) NSNumber *fileType;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *assetId;
@property (copy, nonatomic) NSString *cover;
@property (retain, nonatomic) NSNumber *duration;
@property (copy, nonatomic) NSString *longitude;
@property (copy, nonatomic) NSString *latitude;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
