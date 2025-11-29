@class NSString, FinderRedDotCtrlInfo;

@interface FinderWxPrivateMsgCount : WXPBGeneratedMessage

@property (nonatomic) unsigned int newNotificationCount;
@property (retain, nonatomic) NSString *latestNotificationBriefing;
@property (nonatomic) unsigned int latestNotificationTime;
@property (retain, nonatomic) FinderRedDotCtrlInfo *ctrlInfo;

+ (void)initialize;

@end
