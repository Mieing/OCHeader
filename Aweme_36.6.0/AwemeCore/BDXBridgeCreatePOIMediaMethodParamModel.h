@class BDXBridgeCreatePOIMediaEditConfig, BDXBridgeCreatePOIMediaVideoToken, NSNumber, BDXBridgeCreatePOIMediaAlbumConfig;

@interface BDXBridgeCreatePOIMediaMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *maxVideoDuration;
@property (retain, nonatomic) NSNumber *minVideoDuration;
@property (retain, nonatomic) NSNumber *cameraPosition;
@property (nonatomic) BOOL supportVideo;
@property (nonatomic) BOOL enableBeauty;
@property (nonatomic) BOOL enableFilter;
@property (nonatomic) BOOL enableEffect;
@property (retain, nonatomic) BDXBridgeCreatePOIMediaEditConfig *editConfig;
@property (retain, nonatomic) BDXBridgeCreatePOIMediaAlbumConfig *albumConfig;
@property (retain, nonatomic) BDXBridgeCreatePOIMediaVideoToken *videoToken;

+ (id)requiredKeyPaths;
+ (id)editConfigJSONTransformer;
+ (id)albumConfigJSONTransformer;
+ (id)videoTokenJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
