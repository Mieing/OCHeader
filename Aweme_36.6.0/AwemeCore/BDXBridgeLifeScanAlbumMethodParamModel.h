@class NSString, NSNumber, BDXBridgeLifeScanAlbumTimeRange;

@interface BDXBridgeLifeScanAlbumMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *action;
@property (retain, nonatomic) NSNumber *count;
@property (retain, nonatomic) NSNumber *needResInfo;
@property (retain, nonatomic) NSNumber *fileType;
@property (retain, nonatomic) BDXBridgeLifeScanAlbumTimeRange *timeRange;

+ (id)requiredKeyPaths;
+ (id)timeRangeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
