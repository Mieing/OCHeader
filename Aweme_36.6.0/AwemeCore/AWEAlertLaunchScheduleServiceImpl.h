@class NSString, NSMutableArray;

@interface AWEAlertLaunchScheduleServiceImpl : NSObject <AWEAlertLaunchScheduleService>

@property (nonatomic) BOOL feedReadyFinished;
@property (retain, nonatomic) NSMutableArray *feedReadyDelayQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (BOOL)triggerLaunchScheduleEnable;
- (BOOL)launchProtectFinished;
- (void)runOnLaunchProtectFinish:(id /* block */)a0;
- (void)markFeedReadyFinished;
- (id)triggerLaunchScheduleConfig;
- (id)triggerLaunchScheduleExcludedList;
- (void).cxx_destruct;
- (void)setup;

@end
