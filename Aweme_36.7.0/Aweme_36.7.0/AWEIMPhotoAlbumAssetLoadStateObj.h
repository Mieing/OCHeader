@class NSString, AVAsset, NSData, NSError, UIImage, PHAsset;

@interface AWEIMPhotoAlbumAssetLoadStateObj : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) BOOL finish;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSData *imageData;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) BOOL isLivePhoto;
@property (retain, nonatomic) AVAsset *videoAsset;
@property (retain, nonatomic) UIImage *videoCoverImage;
@property (retain, nonatomic) PHAsset *asset;
@property (nonatomic) long long type;
@property (nonatomic) BOOL needSecondaryRefresh;
@property (readonly, copy, nonatomic) NSString *logID;

- (void).cxx_destruct;

@end
