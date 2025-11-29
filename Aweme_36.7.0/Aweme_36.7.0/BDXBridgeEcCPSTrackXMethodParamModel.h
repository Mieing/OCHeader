@class NSString;

@interface BDXBridgeEcCPSTrackXMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *cpsTrack;
@property (copy, nonatomic) NSString *roomID;
@property (copy, nonatomic) NSString *productID;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
