@class NSString, NSMutableArray, RecommendReasonConfig;

@interface FinderLvChannelItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *channelName;
@property (retain, nonatomic) NSMutableArray *object;
@property (retain, nonatomic) NSString *fromSessionId;
@property (nonatomic) unsigned int channelStyle;
@property (nonatomic) unsigned long long channelId;
@property (nonatomic) unsigned int channelType;
@property (retain, nonatomic) NSString *channelIdStr;
@property (retain, nonatomic) NSString *richTextChannelName;
@property (retain, nonatomic) RecommendReasonConfig *recommendReasonConf;

+ (void)initialize;

@end
