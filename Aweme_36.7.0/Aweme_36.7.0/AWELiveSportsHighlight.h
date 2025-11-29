@class NSURL, UIImage, NSString;

@interface AWELiveSportsHighlight : NSObject

@property (retain, nonatomic) NSURL *destinationURL;
@property (retain, nonatomic) UIImage *downloadedImage;
@property (copy, nonatomic) NSString *remoteVideoURLString;
@property (copy, nonatomic) NSURL *remoteVideoDownloadURL;
@property (copy, nonatomic) NSString *currentPlayingURLKey;
@property (retain, nonatomic) NSURL *remoteImageDownloadURL;
@property (retain, nonatomic) NSString *multiTabID;
@property (retain, nonatomic) NSString *raceCollectionItemId;

- (void).cxx_destruct;

@end
