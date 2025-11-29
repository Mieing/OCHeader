@class NSMutableArray, NSString, NSObject, AWEIMUserDatabase;
@protocol OS_dispatch_queue;

@interface AWEIMDBUserChecker : NSObject <AWEIMBatchFetchUserSessionDelegate>

@property (weak, nonatomic) AWEIMUserDatabase *database;
@property (retain, nonatomic) NSMutableArray *fetchUsersSessions;
@property (nonatomic) BOOL enableClearUserData;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *checkerQueue;
@property (nonatomic) BOOL isWCDBToTwo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateFollowUsersForFullUpdate;
- (void)deleteUsersBeyoundMinute:(long long)a0;
- (void)checkpointIfNeed;
- (void)executeCheckpoint;
- (void)batchFetchUserSessionDidFinished:(id)a0;
- (void)preparCheckerAction;
- (void)deleteErrorDataIfNeed;
- (unsigned long long)p_expireTimestampForMinute:(long long)a0;
- (id)p_needUpdateFollowUsersBeyoundUpdateTimeMinute:(long long)a0;
- (void)excuteCheckPointOtherDBWalWithCurrentUid:(id)a0;
- (id)findFilesWithExtension:(id)a0 inDirectory:(id)a1;
- (BOOL)p_checkFileExistsAtPath:(id)a0;
- (id)initWithDB:(id)a0;
- (void).cxx_destruct;

@end
