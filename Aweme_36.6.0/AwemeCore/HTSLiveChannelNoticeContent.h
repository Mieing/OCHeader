@class NSString;

@interface HTSLiveChannelNoticeContent : IESLivePBBaseMessage

@property (nonatomic) long long channelId;
@property (nonatomic) int action;
@property (copy, nonatomic) NSString *extraInfo;

+ (id)descriptor;

@end
