@class NSString, NSTimer, MMFinderLiveTaskId, FinderLiveRedPacketInfo;

@interface MMFinderLiveRedPacketItem : NSObject

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) FinderLiveRedPacketInfo *redPacketInfo;
@property (nonatomic) long long status;
@property (nonatomic) unsigned int localRemainingTimeInterval;
@property (retain, nonatomic) NSTimer *localRemainingTimer;
@property (readonly, copy, nonatomic) NSString *observedKey;
@property (readonly, copy, nonatomic) NSString *redPacketId;
@property (readonly, nonatomic) unsigned long long beginTimeInterval;
@property (readonly, nonatomic) unsigned long long endTimeInterval;
@property (readonly, nonatomic) unsigned int remainingTimeInterval;
@property (readonly, copy, nonatomic) NSString *referredLiveMicId;
@property (readonly, copy, nonatomic) NSString *redPacketBuffer;
@property (readonly, nonatomic) BOOL isAllReceived;
@property (readonly, nonatomic) BOOL sentByAnchor;
@property (readonly, nonatomic) BOOL localRemainingTimeEnabled;

- (id)initWithTaskId:(id)a0 redPacketInfo:(id)a1;
- (void)dealloc;
- (BOOL)isAvailable;
- (BOOL)isFinished;
- (void)changeStatusToOpened;
- (BOOL)isFinishedInCurrentCycle;
- (void)changeStatusToOpenedInCurrentCycle;
- (void)resetStatusIfOpenedInCurrentCycle;
- (void)refreshStatus;
- (void)startLocalRemainingTimer;
- (void)stopLocalRemainingTimer;
- (void)updateFromRedPacketInfo:(id)a0;
- (void).cxx_destruct;

@end
