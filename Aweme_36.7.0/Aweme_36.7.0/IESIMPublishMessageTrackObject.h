@class NSString;

@interface IESIMPublishMessageTrackObject : NSObject

@property (copy, nonatomic) NSString *stage;
@property (copy, nonatomic) NSString *chatType;
@property (nonatomic) long long msgCount;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) double imageScale;
@property (nonatomic) double fps;
@property (nonatomic) double bitrate;
@property (nonatomic) double scrollTimePerPage;
@property (nonatomic) double duration;
@property (nonatomic) double totalDuration;
@property (nonatomic) BOOL isSuccess;
@property (nonatomic) BOOL isAutoPublish;
@property (copy, nonatomic) NSString *failureReason;
@property (nonatomic) double beginPost;
@property (nonatomic) double processStartTime;
@property (copy, nonatomic) NSString *memoryWariningReason;

- (id)trackParam;
- (id)initWithStage:(id)a0 chatType:(id)a1 msgCount:(long long)a2 imageSize:(struct CGSize { double x0; double x1; })a3;
- (void).cxx_destruct;

@end
