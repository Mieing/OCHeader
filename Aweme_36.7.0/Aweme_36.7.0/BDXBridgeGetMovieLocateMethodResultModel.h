@class NSString, BDXBridgeGetMovieLocateCheckPermission, BDXBridgeGetMovieLocateGetCurrentGCJLocation;

@interface BDXBridgeGetMovieLocateMethodResultModel : BDXBridgeModel

@property (copy, nonatomic) NSString *city_code;
@property (copy, nonatomic) NSString *city_name;
@property (copy, nonatomic) NSString *sort_by;
@property (retain, nonatomic) BDXBridgeGetMovieLocateCheckPermission *checkPermission;
@property (retain, nonatomic) BDXBridgeGetMovieLocateGetCurrentGCJLocation *getCurrentGCJLocation;

+ (id)checkPermissionJSONTransformer;
+ (id)getCurrentGCJLocationJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
