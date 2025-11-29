@class MMFinderLiveTaskId, MMFinderLiveNotifyGiftNotificationView, NSMutableArray, FinderJumpInfo;

@interface MMFinderLiveNotifyGiftNotificationDisplayLogic : NSObject

@property (retain, nonatomic) MMFinderLiveNotifyGiftNotificationView *mainView;
@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) NSMutableArray *pendingQueue;
@property (retain, nonatomic) FinderJumpInfo *curDisplayItem;
@property (nonatomic) BOOL enableDisplay;
@property (nonatomic) BOOL needHidden;
@property (copy, nonatomic) id /* block */ displayBlock;

- (id)initWithNotificationView:(id)a0 taskId:(id)a1;
- (void)appendNotifyGiftNotification:(id)a0;
- (void)updateNotificationViewEnableDisplay:(BOOL)a0;
- (void)updateMainViewHidden:(BOOL)a0;
- (void)updateMainViewDisplay;
- (void)checkDisplay;
- (void)delayFadeout;
- (void).cxx_destruct;

@end
