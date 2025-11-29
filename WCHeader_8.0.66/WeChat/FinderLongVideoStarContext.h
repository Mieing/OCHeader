@class NSString;

@interface FinderLongVideoStarContext : WXPBGeneratedMessage

@property (nonatomic) int listType;
@property (nonatomic) int startPlayPosition;
@property (retain, nonatomic) NSString *feedId;
@property (retain, nonatomic) NSString *feedNonceId;
@property (retain, nonatomic) NSString *feedSessionBuffer;
@property (retain, nonatomic) NSString *channelName;
@property (nonatomic) unsigned int channelStyle;
@property (nonatomic) unsigned int channelType;
@property (retain, nonatomic) NSString *channelIdStr;
@property (retain, nonatomic) NSString *channelFromSessionId;
@property (retain, nonatomic) NSString *itemKey;

+ (void)initialize;

@end
