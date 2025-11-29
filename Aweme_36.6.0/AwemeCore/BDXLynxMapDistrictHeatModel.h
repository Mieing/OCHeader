@class NSNumber, NSString, BDXLynxMapDistrictInfo;

@interface BDXLynxMapDistrictHeatModel : BDXLynxMapBridgeModel

@property (copy, nonatomic) NSNumber *geoNameID;
@property (copy, nonatomic) NSString *geoName;
@property (copy, nonatomic) BDXLynxMapDistrictInfo *districtInfo;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
