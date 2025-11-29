@class NSMutableDictionary;
@protocol TSPKLock;

@interface TSPKMediaNotificationObserver : NSObject

@property (retain, nonatomic) id<TSPKLock> lock;
@property (retain, nonatomic) NSMutableDictionary *mutableInfo;

+ (id)getInfoWithDataType:(id)a0;
+ (id)sharedObserver;
+ (void)setup;

- (void)addNotifications;
- (void)handleAudioSessionInterruptionNotification:(id)a0;
- (id)getInfoWithDataType:(id)a0;
- (void)handleRuntimeErrorNotification:(id)a0;
- (void)handleDidStartRunningNotification:(id)a0;
- (void)handleDidStopRunningNotification:(id)a0;
- (void)handleInterruptedNotification:(id)a0;
- (void)handleInterruptionEndedNotification:(id)a0;
- (void)handleAudioSessionMediaServicesWereResetNotification:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setup;
- (void)handleAudioSessionMediaServicesWereLostNotification:(id)a0;

@end
