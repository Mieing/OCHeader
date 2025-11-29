@class BDXBridgeCommentOpenHunterCommentImagePanelLongPressPanelConfig, NSString, NSDictionary, BDXBridgeCommentOpenHunterCommentImagePanelTrackParams, NSArray, NSNumber, BDXBridgeCommentOpenHunterCommentImagePanelImagePageConfig;

@interface BDXBridgeCommentOpenHunterCommentImagePanelMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *locatePosition;
@property (retain, nonatomic) NSNumber *hLocatePosition;
@property (copy, nonatomic) NSString *commentData;
@property (copy, nonatomic) NSDictionary *imageData;
@property (retain, nonatomic) BDXBridgeCommentOpenHunterCommentImagePanelTrackParams *trackParams;
@property (retain, nonatomic) NSArray *mediaData;
@property (retain, nonatomic) BDXBridgeCommentOpenHunterCommentImagePanelImagePageConfig *imagePageConfig;
@property (retain, nonatomic) BDXBridgeCommentOpenHunterCommentImagePanelLongPressPanelConfig *longPressPanelConfig;

+ (id)requiredKeyPaths;
+ (id)mediaDataJSONTransformer;
+ (id)imagePageConfigJSONTransformer;
+ (id)longPressPanelConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)trackParamsJSONTransformer;

- (void).cxx_destruct;

@end
