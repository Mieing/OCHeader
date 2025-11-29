@class LMImageQualityImage, NSString, NSArray, LMImageQualityVideo, NSDictionary;

@interface LMImageQualityTrackSceneEditInfo : NSObject {
    void /* function */ creationId;
    void /* function */ uuid;
    void /* function */ assetUUID;
    void /* function */ attachedInfos;
    void /* function */ nonFastImportError;
    void /* function */ downgradeReason;
    void /* function */ downgradeReasonInfo;
    void /* function */ effectInfo;
    void /* unknown type, empty encoding */ contentType;
    void /* unknown type, empty encoding */ hdImageInfo;
    void /* unknown type, empty encoding */ isWaitingHDShootImage;
    void /* unknown type, empty encoding */ isWaitingUHDImportResource;
}

@property (class, nonatomic, readonly) NSString *isEditKey;

@property (nonatomic, readonly) NSString *originalResolution;
@property (nonatomic, readonly) NSString *originalBitrate;
@property (nonatomic, readonly) NSString *originalFileSize;
@property (nonatomic, readonly) NSString *sourceResolution;
@property (nonatomic, readonly) NSString *sourceBitrate;
@property (nonatomic, readonly) NSString *sourceFileSize;
@property (nonatomic, readonly) NSString *sourceFilePath;
@property (nonatomic, readonly) NSString *isFastImportTrackString;
@property (nonatomic, readonly) NSString *isEditTrackString;
@property (nonatomic, readonly) NSString *materialType;
@property (nonatomic) BOOL isFormTakeAfter;
@property (nonatomic, copy) NSString *creationId;
@property (nonatomic, copy) NSString *uuid;
@property (nonatomic, copy) NSString *assetUUID;
@property (nonatomic, copy) NSArray *attachedInfos;
@property (nonatomic) struct CGSize { double x0; double x1; } phAssetSize;
@property (nonatomic) struct CGSize { double x0; double x1; } phPairedVideoAssetSize;
@property (nonatomic) struct CGSize { double x0; double x1; } importSize;
@property (nonatomic, retain) LMImageQualityImage *originalImageInfo;
@property (nonatomic, retain) LMImageQualityImage *uhdImageInfo;
@property (nonatomic, retain) LMImageQualityImage *sourceImageInfo;
@property (nonatomic, retain) LMImageQualityImage *replacedSourceImageInfo;
@property (nonatomic, retain) LMImageQualityImage *compressedImageInfo;
@property (nonatomic, retain) LMImageQualityImage *coverImageInfo;
@property (nonatomic) struct CGSize { double x0; double x1; } exportSizeAB;
@property (nonatomic) struct CGSize { double x0; double x1; } exportFromSize;
@property (nonatomic) struct CGSize { double x0; double x1; } exportSizeSet;
@property (nonatomic, retain) LMImageQualityVideo *originalVideoInfo;
@property (nonatomic, retain) LMImageQualityVideo *sourceVideoInfo;
@property (nonatomic) BOOL isFastImport;
@property (nonatomic, copy) NSString *nonFastImportError;
@property (nonatomic) struct CGSize { double x0; double x1; } previewSizeAB;
@property (nonatomic) struct CGSize { double x0; double x1; } previewSizeSet;
@property (nonatomic) struct CGSize { double x0; double x1; } previewSizeRuntime;
@property (nonatomic) long long index;
@property (nonatomic, copy) NSString *downgradeReason;
@property (nonatomic, copy) NSDictionary *downgradeReasonInfo;
@property (nonatomic) BOOL isEdit;
@property (nonatomic) BOOL hasTemplate;
@property (nonatomic, copy) NSDictionary *effectInfo;
@property (nonatomic) long long contentTypeObjc;
@property (nonatomic) double multiToOneSourceVq;

- (void)replaceSourceImage:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)updateValue:(id)a0 forKey:(id)a1;

@end
