@class NSURL;

@interface AWEShareVideoToStoryCheckedVideoAssetModel : NSObject

@property (retain, nonatomic) NSURL *videoURL;
@property (nonatomic) BOOL isValid;
@property (nonatomic) double duration;
@property (nonatomic) double videoTrackDuration;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) double fps;
@property (nonatomic) double bitrate;

- (void).cxx_destruct;
- (id)description;

@end
