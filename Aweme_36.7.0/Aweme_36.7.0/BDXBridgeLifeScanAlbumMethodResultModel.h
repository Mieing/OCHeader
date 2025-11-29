@class NSNumber, NSArray;

@interface BDXBridgeLifeScanAlbumMethodResultModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *result;
@property (retain, nonatomic) NSArray *localIds;

+ (id)localIdsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
