@class NSMutableArray;

@interface ChannelInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *channelList;
@property (nonatomic) unsigned int defaultChannelId;

+ (void)initialize;

@end
