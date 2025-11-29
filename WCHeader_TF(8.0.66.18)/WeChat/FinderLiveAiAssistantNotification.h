@class NSString, FinderJumpInfo;

@interface FinderLiveAiAssistantNotification : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *id;
@property (nonatomic) unsigned long long seq;
@property (retain, nonatomic) NSString *notificationContent;
@property (retain, nonatomic) FinderJumpInfo *jumpInfo;
@property (retain, nonatomic) NSString *buttonContent;
@property (nonatomic) unsigned int showTime;
@property (nonatomic) BOOL autoPopup;
@property (nonatomic) unsigned int notificationType;

+ (void)initialize;

- (id)liveJumpInfo;
- (BOOL)isFirstTimeInfo;

@end
