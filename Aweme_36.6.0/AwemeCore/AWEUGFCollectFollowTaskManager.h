@class NSString, AWEUGFCoinFollowTaskModel;

@interface AWEUGFCollectFollowTaskManager : NSObject <AWEUGFCollectFollowTaskManagerProtocol>

@property (retain, nonatomic) AWEUGFCoinFollowTaskModel *taskModel;
@property (copy, nonatomic) NSString *currentPendantID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)trackLogWithKey:(id)a0 message:(id)a1;
- (void)getNextTaskInfoDelayTime;
- (BOOL)isFeedTab;
- (void)trackFollowFCollectClick:(id)a0;
- (void)startShowFeedFamiliarCard;
- (void)trackFollowFCollectShow:(id)a0;
- (id)fcollectFollowTaskGoldImage;
- (void)taskFinishedWithGoldMount:(long long)a0 followed:(BOOL)a1;
- (id)getCurrentPendantID;
- (void)dealGetTaskInfoData:(id)a0 error:(id)a1;
- (void)getNextTaskInfo;
- (void)addTaskWithTopic:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
