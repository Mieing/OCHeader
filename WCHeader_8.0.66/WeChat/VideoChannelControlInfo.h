@class VideoChannelTimelineInfo, VideoChannelTopBarInfo;

@interface VideoChannelControlInfo : WXPBGeneratedMessage

@property (nonatomic) int switchOption;
@property (retain, nonatomic) VideoChannelTopBarInfo *topBarInfo;
@property (retain, nonatomic) VideoChannelTimelineInfo *timelineNotifyInfo;

+ (void)initialize;

@end
