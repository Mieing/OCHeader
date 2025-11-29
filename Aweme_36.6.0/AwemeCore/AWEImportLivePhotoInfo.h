@class NSURL, PHLivePhoto;

@interface AWEImportLivePhotoInfo : NSObject

@property (retain, nonatomic) PHLivePhoto *livePhoto;
@property (retain, nonatomic) NSURL *videoURL;
@property (retain, nonatomic) NSURL *imageURL;

- (void).cxx_destruct;

@end
