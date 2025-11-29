@class NSNumber;

@interface BDXBridgeOpenCardOCRMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *card_type;
@property (retain, nonatomic) NSNumber *direction;
@property (retain, nonatomic) NSNumber *ban_scan;
@property (retain, nonatomic) NSNumber *ban_camera;
@property (retain, nonatomic) NSNumber *ban_album;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
