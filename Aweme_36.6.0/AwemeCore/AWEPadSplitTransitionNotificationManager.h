@protocol AWEPadSplitTransitionNotificationManagerDelegate;

@interface AWEPadSplitTransitionNotificationManager : NSObject

@property (nonatomic) BOOL popFromMediaFeedVC;
@property (weak, nonatomic) id<AWEPadSplitTransitionNotificationManagerDelegate> delegate;

- (void)viewControllerTransitionNotification:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)addObservers;

@end
