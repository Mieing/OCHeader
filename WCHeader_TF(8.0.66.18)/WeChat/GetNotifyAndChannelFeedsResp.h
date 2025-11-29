@class TimelineNotifyInfo, NSString, BaseResponse;

@interface GetNotifyAndChannelFeedsResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) TimelineNotifyInfo *timelineNotifyInfo;
@property (retain, nonatomic) NSString *channelFeeds;
@property (nonatomic) BOOL isEntryOpen;

+ (void)initialize;

@end
