@class NSString;

@interface TIMXPBNChannelHeartBeatRequestBody : GPBMessage

@property (copy, nonatomic) NSString *channelId;
@property (nonatomic) BOOL hasChannelId;

+ (id)descriptor;

@end
