@class NSString;

@interface RecPluginMsg : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *conversationTips;
@property (retain, nonatomic) NSString *redPointMsgId;
@property (nonatomic) unsigned int redPointExpireTime;
@property (nonatomic) unsigned int needCacheResult;

+ (void)initialize;

@end
