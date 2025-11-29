@class NSString, NSMutableArray, RecommendReasonConfig;

@interface MegaVideoChannel : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *channelName;
@property (retain, nonatomic) NSMutableArray *feeds;
@property (retain, nonatomic) NSString *fromSessionId;
@property (nonatomic) unsigned int channelStyle;
@property (nonatomic) unsigned long long channelId;
@property (nonatomic) unsigned int channelType;
@property (nonatomic) unsigned int indexOfPageWhichContainsChannel;
@property (retain, nonatomic) NSString *channelIdStr;
@property (retain, nonatomic) NSString *richTextChannelName;
@property (retain, nonatomic) RecommendReasonConfig *recommendReasonConf;

+ (void)initialize;

@end
