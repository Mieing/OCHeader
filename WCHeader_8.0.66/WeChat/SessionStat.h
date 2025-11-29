@interface SessionStat : WXPBGeneratedMessage

@property (nonatomic) unsigned int stayDuration;
@property (nonatomic) unsigned int unreadDuration;
@property (nonatomic) unsigned int totalUnreadCount;
@property (nonatomic) unsigned int latestMsgType;
@property (nonatomic) unsigned int indexInSessionList;
@property (nonatomic) unsigned int massSendUnreadCount;
@property (nonatomic) unsigned int templateUnreadCount;

+ (void)initialize;

@end
