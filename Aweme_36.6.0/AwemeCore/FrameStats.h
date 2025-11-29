@interface FrameStats : NSObject

@property (nonatomic) long long frameReceiveTime;
@property (nonatomic) long long frameStartTime;
@property (nonatomic) long long frameRenderTime;
@property (nonatomic) long long seiDetectId;
@property (nonatomic) long long seiDetectStartTime;
@property (nonatomic) long long seiDetectEndTime;

@end
