@class NSString;

@interface VoIPFirstMessageStatisticsService : MMUserService <MMServiceProtocol>

@property (nonatomic) double launchTimestamp;
@property (nonatomic) BOOL isReceivedNewsSyncMessagesOnce;
@property (nonatomic) BOOL isHandledOnce;
@property (nonatomic) int statisticsRoomId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didLaunchWhenApplicaionEnterForeground;
- (void)receiveIfIsInviteMessage:(BOOL)a0;
- (void)handleInviteMessage:(id)a0;
- (void)applicationWillSuspend;
- (id)init;
- (void)dealloc;

@end
