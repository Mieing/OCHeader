@class NSString, UIImage, AVURLAsset, PHLivePhoto;

@interface AWEIMEditedAssetModel : NSObject

@property (retain, nonatomic) NSString *filePath;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) AVURLAsset *urlAsset;
@property (nonatomic) long long videoDuration;
@property (nonatomic) BOOL isConvertToVideo;
@property (copy, nonatomic) NSString *checkText;
@property (nonatomic) BOOL isLivePhoto;
@property (retain, nonatomic) PHLivePhoto *editedLivePhoto;
@property (copy, nonatomic) NSString *livePhotoPairedVideoUrl;
@property (copy, nonatomic) NSString *livePhotoPairedImageUrl;

- (void).cxx_destruct;

@end
