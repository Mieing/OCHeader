@class NSString, NSURL, UIImage, AVURLAsset, AWEAssetModel;

@interface AWECutSameMaterialAssetModel : NSObject

@property (retain, nonatomic) AWEAssetModel *aweAssetModel;
@property (copy, nonatomic) NSURL *currentImageFileURL;
@property (retain, nonatomic) UIImage *currentImage;
@property (copy, nonatomic) NSString *currentImageName;
@property (nonatomic) struct CGSize { double width; double height; } currentImageSize;
@property (copy, nonatomic) NSURL *processedImageFileURL;
@property (retain, nonatomic) UIImage *processedImage;
@property (copy, nonatomic) NSString *processedImageName;
@property (nonatomic) struct CGSize { double width; double height; } processedImageSize;
@property (retain, nonatomic) AVURLAsset *processAsset;
@property (nonatomic) int requestId;
@property (nonatomic) double avCompressProgress;
@property (nonatomic) BOOL isReady;
@property (nonatomic) BOOL needReverse;

- (void).cxx_destruct;

@end
