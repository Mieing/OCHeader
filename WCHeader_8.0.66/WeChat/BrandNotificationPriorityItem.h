@interface BrandNotificationPriorityItem : NSObject

@property (nonatomic) BOOL priorityShowSwitch;
@property (nonatomic) unsigned int priorityShowExposureTimeInMs;
@property (nonatomic) unsigned int priorityShowExposureCount;
@property (nonatomic) unsigned int priorityShowWithinUnreadCount;

- (BOOL)checkShouldShowPriorityBrandNotificationMsgWithExposureTimeInMs:(unsigned int)a0 andExposureCount:(unsigned int)a1 andUnreadCount:(unsigned int)a2;

@end
