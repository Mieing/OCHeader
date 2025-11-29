@class NSArray;
@protocol BDUGLuckyAppIdNotificationBlockList;

@interface BDUGLuckyNotificationConfig : BDUGLuckyBDModel

@property (copy, nonatomic) NSArray<BDUGLuckyAppIdNotificationBlockList> *appIdNotificationBlockList;
@property (nonatomic) double popupInterval;
@property (nonatomic) double maxPopupQueueLockedDuration;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
