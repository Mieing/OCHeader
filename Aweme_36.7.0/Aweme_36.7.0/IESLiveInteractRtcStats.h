@interface IESLiveInteractRtcStats : NSObject

@property (nonatomic) unsigned long long duration;
@property (nonatomic) double fps;
@property (nonatomic) double bitrate;

- (id)description;

@end
