@class NSString, NSURL;

@interface AWEPlaylistVideoGenerateInfo : NSObject

@property (copy, nonatomic) NSString *taskId;
@property (retain, nonatomic) NSURL *videoUrl;
@property (copy, nonatomic) NSString *videoPath;
@property (copy, nonatomic) NSString *musicId;
@property (nonatomic) double startTime;

- (void).cxx_destruct;

@end
