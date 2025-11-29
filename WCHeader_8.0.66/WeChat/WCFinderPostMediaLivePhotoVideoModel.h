@class NSString;

@interface WCFinderPostMediaLivePhotoVideoModel : NSObject

@property (copy, nonatomic) NSString *path;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) unsigned long long durationMs;
@property (nonatomic) unsigned long long fileSize;

- (id)initWithLivePhotoVideoPath:(id)a0;
- (void).cxx_destruct;

@end
