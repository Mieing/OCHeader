@class NSNumber, NSString, BDXBridgeLifePictureLocationInfoLocation;

@interface BDXBridgeLifePictureLocationInfoResource : BDXBridgeModel

@property (retain, nonatomic) NSNumber *fileType;
@property (copy, nonatomic) NSString *localId;
@property (retain, nonatomic) BDXBridgeLifePictureLocationInfoLocation *location;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
