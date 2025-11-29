@class NSString, BDXBridgeFormatOpenARCameraMusicParam, NSArray;

@interface BDXBridgeFormatOpenARCameraMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *avatarUid;
@property (copy, nonatomic) NSString *tabName;
@property (copy, nonatomic) NSString *trackInfo;
@property (retain, nonatomic) BDXBridgeFormatOpenARCameraMusicParam *musicParam;
@property (retain, nonatomic) NSArray *subTabList;

+ (id)requiredKeyPaths;
+ (id)musicParamJSONTransformer;
+ (id)subTabListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
