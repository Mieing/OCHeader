@class AVAsset, NSString, UIImage, PHAsset, NSNumber;

@interface APCDTOEditorResourceExtension : AWEBaseBizConfigModel <MTLJSONSerializing>

@property (copy, nonatomic) NSNumber *livePhotoImageDuration;
@property (nonatomic) BOOL ignoreMergeDurationLimitation;
@property (copy, nonatomic) NSNumber *fixedDuration;
@property (copy, nonatomic) NSNumber *fps;
@property (copy, nonatomic) NSNumber *forceImportLivePhotoPHAssetAsPhoto;
@property (retain, nonatomic) PHAsset *albumPHAsset;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) AVAsset *asset;
@property (copy, nonatomic) NSString *aigcMark;
@property (copy, nonatomic) NSString *assetId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;
- (BOOL)hasResource;

@end
