@class NSNumber, NSDictionary, BDXBridgePoiUploadFileVideoConfig;

@interface BDXBridgePoiUploadFileMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *maxImageCount;
@property (retain, nonatomic) NSNumber *isUseCamera;
@property (retain, nonatomic) NSNumber *isUseImageEdit;
@property (nonatomic) BOOL needMusic;
@property (retain, nonatomic) NSNumber *showQuickShoot;
@property (retain, nonatomic) NSNumber *showQuickAlbum;
@property (retain, nonatomic) NSNumber *hideEditPage;
@property (retain, nonatomic) NSNumber *useOpenCreation;
@property (retain, nonatomic) NSNumber *supportVideo;
@property (copy, nonatomic) NSDictionary *logParams;
@property (retain, nonatomic) BDXBridgePoiUploadFileVideoConfig *videoConfig;
@property (nonatomic) long long defaultTab;

+ (id)requiredKeyPaths;
+ (id)defaultTabJSONTransformer;
+ (id)videoConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
