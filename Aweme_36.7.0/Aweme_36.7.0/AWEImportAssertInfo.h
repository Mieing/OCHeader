@class NSURL, PHAsset, PHLivePhoto;

@interface AWEImportAssertInfo : NSObject

@property (retain, nonatomic) PHLivePhoto *livePhoto;
@property (retain, nonatomic) NSURL *videoURL;
@property (retain, nonatomic) NSURL *imageURL;
@property (retain, nonatomic) PHAsset *assert;
@property (nonatomic) struct CGSize { double width; double height; } resourceSize;

- (void).cxx_destruct;

@end
