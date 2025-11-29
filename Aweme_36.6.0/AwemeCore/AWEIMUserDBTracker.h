@class NSTimer, HMDThreadSafeDictionary, NSObject, AWEIMUserDBIOTracker;
@protocol OS_dispatch_queue;

@interface AWEIMUserDBTracker : NSObject

@property (retain, nonatomic) HMDThreadSafeDictionary *callCountDict;
@property (nonatomic) BOOL enableTrackScene;
@property (nonatomic) BOOL enableTrackFullUpdate;
@property (nonatomic) BOOL enableTrackCallAPI;
@property (nonatomic) BOOL enableALogSaveUser;
@property (retain, nonatomic) NSTimer *checkTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *trackerQueue;
@property BOOL hasSetup;
@property (retain, nonatomic) AWEIMUserDBIOTracker *ioTracker;

+ (void)trackScene:(id)a0 status:(long long)a1 info:(id)a2;
+ (void)hitCache:(BOOL)a0;
+ (void)trackFullUpdateDiffCount:(long long)a0;
+ (void)trackCleanExpireUsersCount:(long long)a0;
+ (void)trackCleanErrorUsersCount:(long long)a0 findCount:(long long)a1 scene:(id)a2;
+ (void)trackInitCorrupt:(long long)a0 status:(long long)a1;
+ (void)trackOneUserReadScene:(long long)a0;
+ (void)drawCall:(long long)a0;
+ (void)alogSaveUsers:(id)a0 isSuccess:(BOOL)a1 from:(long long)a2 owner:(id)a3;
+ (id)sharedInstance;
+ (void)setup;

- (void)p_setup;
- (void)p_uploadApiDrawCallInfoIfNeed;
- (void)p_activateCheckTimer;
- (void)p_deactivateCheckTimer;
- (void)checkerTimerAction;
- (void)p_mergeDrawCallToFile;
- (id)p_trackerDirPath;
- (void)p_openTrackerTimerIfNeed;
- (void)p_openReadTrackerIfNeed;
- (void).cxx_destruct;
- (id)init;

@end
