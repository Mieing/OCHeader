@class NSString, FinderLiveAppMsgPlatformReminderNotificationJumpInfo;

@interface FinderLiveAppMsgPlatformReminderNotificationInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) NSString *backgroundColor;
@property (nonatomic) unsigned int source;
@property (nonatomic) unsigned int showType;
@property (retain, nonatomic) NSString *badgeName;
@property (retain, nonatomic) FinderLiveAppMsgPlatformReminderNotificationJumpInfo *msgJumpInfo;

+ (void)initialize;

@end
