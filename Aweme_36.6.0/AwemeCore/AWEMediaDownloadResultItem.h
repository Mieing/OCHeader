@class NSString, NSArray, UIImage, NSError, NSURL, NSDictionary;

@interface AWEMediaDownloadResultItem : NSObject

@property (nonatomic) long long result;
@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) NSString *errorMessage;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSURL *sandboxFileURL;
@property (retain, nonatomic) NSURL *videoAssetURL;
@property (retain, nonatomic) NSURL *videoALAssetURL;
@property (copy, nonatomic) NSArray *clips;
@property (copy, nonatomic) NSDictionary *clipsUseCacheMap;
@property (copy, nonatomic) NSDictionary *livePhotoImageURLsForSlides;
@property (copy, nonatomic) NSDictionary *livePhotoVideoURLsForSlides;

- (void).cxx_destruct;

@end
