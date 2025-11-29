@class NSString;

@interface RoomEnterBackendResponse_RoomEnterBackendData : IESLivePBBaseMessage

@property (nonatomic) BOOL feedSlideGuide;
@property (nonatomic) int feedSlideGuideDisplayTime;
@property (copy, nonatomic) NSString *feedSlideGuideText;

+ (id)descriptor;

@end
