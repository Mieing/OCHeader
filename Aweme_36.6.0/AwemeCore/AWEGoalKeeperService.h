@class AWEGoalKeeperReporter, NSMutableDictionary, NSString, NSLock, NSMutableArray;

@interface AWEGoalKeeperService : HTSService <AWEGoalKeeperServiceProtocol>

@property (retain, nonatomic) NSMutableArray *goalKeeperWindow;
@property (retain, nonatomic) NSLock *lock;
@property (nonatomic) long long windowLength;
@property (nonatomic) BOOL blockedMonitorEnabled;
@property (retain, nonatomic) NSMutableArray *dislikeRecords;
@property (retain, nonatomic) NSMutableArray *dislikeRecordsCount;
@property (retain, nonatomic) NSMutableDictionary *blockedAuthorAndCount;
@property (retain, nonatomic) NSLock *dislikeLock;
@property (retain, nonatomic) NSLock *blockedLock;
@property (retain, nonatomic) AWEGoalKeeperReporter *reporter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)service;
+ (BOOL)enabled;

- (void)recordDislikeModel:(id)a0;
- (void)__appendItemWithModel:(id)a0;
- (void)__checkSequenceRulesWithModel:(id)a0;
- (void)__checkContentExpiredWithModel:(id)a0;
- (void)__checkDislikedItemAppearedAgain:(id)a0;
- (void)__checkBlockedAuthorDisplayedAgain:(id)a0;
- (void)__removeDislikeRecordWithTargetInterval:(long long)a0;
- (void)checkRulesWithModel:(id)a0;
- (void)checkColdLaunchFirstModel:(id)a0;
- (void)recordBlockedAuthorID:(id)a0 isBlocked:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;

@end
