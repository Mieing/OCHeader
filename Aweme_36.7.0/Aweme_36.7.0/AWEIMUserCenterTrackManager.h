@class NSObject, NSTimer, HMDThreadSafeDictionary;
@protocol OS_dispatch_queue;

@interface AWEIMUserCenterTrackManager : NSObject

@property (retain, nonatomic) HMDThreadSafeDictionary *callCountDict;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *trackerQueue;
@property (retain, nonatomic) NSTimer *checkTimer;

+ (void)hitCache:(BOOL)a0;
+ (id)sharedInstance;

- (void)p_uploadApiDrawCallInfoIfNeed;
- (void)p_activateCheckTimer;
- (void)p_deactivateCheckTimer;
- (void)checkerTimerAction;
- (void)p_mergeDrawCallToFile;
- (void).cxx_destruct;
- (id)init;

@end
