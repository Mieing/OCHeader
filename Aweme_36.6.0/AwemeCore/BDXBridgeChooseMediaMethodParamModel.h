@class NSNumber, BDXBridgeChooseMediaImageParams, BDXBridgeChooseMediaVideoParams;

@interface BDXBridgeChooseMediaMethodParamModel : BDXBridgeModel

@property (nonatomic) unsigned long long sourceType;
@property (nonatomic) unsigned long long cameraType;
@property (nonatomic) BOOL saveToPhotoAlbum;
@property (retain, nonatomic) NSNumber *maxCount;
@property (nonatomic) BOOL needBase64Data;
@property (nonatomic) unsigned long long mediaType;
@property (retain, nonatomic) BDXBridgeChooseMediaImageParams *imageParams;
@property (retain, nonatomic) BDXBridgeChooseMediaVideoParams *videoParams;
@property (nonatomic) unsigned long long mediaTypes;
@property (nonatomic) BOOL isNeedCut;
@property (retain, nonatomic) NSNumber *cropRatioWidth;
@property (retain, nonatomic) NSNumber *cropRatioHeight;
@property (nonatomic) BOOL needBinaryData;
@property (nonatomic) BOOL compressImage;
@property (retain, nonatomic) NSNumber *compressWidth;
@property (retain, nonatomic) NSNumber *compressHeight;
@property (retain, nonatomic) NSNumber *ignoreUserCancel;
@property (retain, nonatomic) NSNumber *fixUserCancel;

+ (id)mediaTypeJSONTransformer;
+ (id)sourceTypeJSONTransformer;
+ (id)cameraTypeJSONTransformer;
+ (id)imageParamsJSONTransformer;
+ (id)videoParamsJSONTransformer;
+ (id)mediaTypesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
