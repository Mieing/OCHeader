@class NSString, BDXBridgeLifeCreationAssetVideoConfig, NSArray, BDXBridgeLifeCreationAssetTrack, NSNumber, NSDictionary;

@interface BDXBridgeLifeCreationAssetMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *maxAssetCount;
@property (copy, nonatomic) NSString *cameraTips;
@property (retain, nonatomic) NSNumber *requestLocationInfo;
@property (retain, nonatomic) BDXBridgeLifeCreationAssetTrack *track;
@property (retain, nonatomic) BDXBridgeLifeCreationAssetVideoConfig *videoConfig;
@property (retain, nonatomic) NSArray *instances;
@property (copy, nonatomic) NSDictionary *logParams;
@property (nonatomic) long long assetType;
@property (nonatomic) long long defaultTab;

+ (id)requiredKeyPaths;
+ (id)trackJSONTransformer;
+ (id)instancesJSONTransformer;
+ (id)assetTypeJSONTransformer;
+ (id)defaultTabJSONTransformer;
+ (id)videoConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
