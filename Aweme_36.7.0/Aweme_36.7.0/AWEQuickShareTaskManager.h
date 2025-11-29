@class NSString, NSDictionary, NSMutableArray, AWEQuickShareTaskLandingConfig;

@interface AWEQuickShareTaskManager : NSObject <AWEQuickShareTaskDelegate, AWEPublishTaskMessage, DUXInAppNotificationViewDelegate>

@property (retain, nonatomic) NSMutableArray *taskArray;
@property (retain, nonatomic) NSDictionary *trackParams;
@property (retain, nonatomic) AWEQuickShareTaskLandingConfig *currentLandingConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)task:(id)a0 didEndWithResult:(long long)a1 error:(id)a2;
- (void)landingWithTask:(id)a0;
- (void)notificationDidDismiss:(id)a0;
- (void)notificationDidTapInteractiveComponent:(id)a0;
- (void)cancelTaskWithCreationID:(id)a0;
- (void)taskDidFail:(id)a0 withError:(id)a1;
- (void)showInAppDuxNotificationWithTask:(id)a0;
- (void)finishTaskCreationID:(id)a0;
- (void)trackWithPublishModel:(id)a0;
- (void)taskDidFinish:(id)a0 withResult:(id)a1;
- (id)prepareAndStartTaskWithShareToStoryModel:(id)a0;
- (id)prepareTaskWithShareToStoryModel:(id)a0;
- (void)startTaskWithShareToStoryModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
