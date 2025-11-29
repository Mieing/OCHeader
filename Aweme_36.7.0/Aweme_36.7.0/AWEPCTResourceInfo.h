@class AVAsset, NSString, UIImage, PHAsset, NSNumber;

@interface AWEPCTResourceInfo : MTLModel

@property (nonatomic) long long fileType;
@property (copy, nonatomic) NSNumber *forceImportLivePhotoPHAssetAsPhoto;
@property (retain, nonatomic) PHAsset *inputPHAsset;
@property (retain, nonatomic) UIImage *inputImage;
@property (retain, nonatomic) AVAsset *inputAsset;
@property (copy, nonatomic) NSString *remoteUrl;
@property (copy, nonatomic) NSString *localPath;
@property (copy, nonatomic) NSString *livePhotoVideoPath;
@property (copy, nonatomic) NSString *cacheKey;
@property (copy, nonatomic) NSString *assetId;

- (void).cxx_destruct;

@end
