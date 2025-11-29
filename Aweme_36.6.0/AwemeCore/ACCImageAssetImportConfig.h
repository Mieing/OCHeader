@class NSValue, NSString, NSArray, UIImage, PHAsset, NSURL, AWEAssetModel;

@interface ACCImageAssetImportConfig : NSObject

@property (readonly, nonatomic) BOOL isLivePhoto;
@property (retain, nonatomic) AWEAssetModel *livePhotoAsset;
@property (retain, nonatomic) NSString *projectUUIDString;
@property (retain, nonatomic) PHAsset *inputPHAsset;
@property (retain, nonatomic) NSString *inputRemoteURL;
@property (retain, nonatomic) NSString *inputPath;
@property (nonatomic) BOOL isOnlinePhoto;
@property (copy, nonatomic) NSArray *videoSourceURLs;
@property (copy, nonatomic) NSArray *imageURLs;
@property (retain, nonatomic) AWEAssetModel *photoAsset;
@property (retain, nonatomic) UIImage *inputImage;
@property (retain, nonatomic) NSString *outputPath;
@property (retain, nonatomic) NSString *outputCompressedImagePath;
@property (copy, nonatomic) NSURL *videoFileDir;
@property (retain, nonatomic) NSValue *expectedSizeValue;
@property (nonatomic) BOOL highPriority;
@property (nonatomic) long long debugIndex;

+ (id)normalImageTask;
+ (id)livePhotoImageTask;

- (id)initWithIsLivePhoto:(BOOL)a0;
- (void).cxx_destruct;

@end
