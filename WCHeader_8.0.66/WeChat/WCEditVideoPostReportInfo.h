@class NSString;

@interface WCEditVideoPostReportInfo : NSObject

@property (nonatomic) BOOL isStoryPortraitVideo;
@property (copy, nonatomic) NSString *storyHorizenVideoMd5;
@property (copy, nonatomic) NSString *originVideoPath;
@property (nonatomic) double originVideoDuration;
@property (nonatomic) double editedVideoDuration;

- (void).cxx_destruct;

@end
