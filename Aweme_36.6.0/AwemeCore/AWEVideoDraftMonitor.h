@class NSDateFormatter, NSObject;
@protocol OS_dispatch_queue;

@interface AWEVideoDraftMonitor : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) NSDateFormatter *formatter;

+ (void)recordDraftInvisibleWithDraftIds:(id)a0;
+ (void)checkDraftLostWithVisibleDrafts:(id)a0;
+ (void)recordDraftInvisibleWithDrafts:(id)a0;
+ (void)recordDraftTimelineWithId:(id)a0 descFormat:(id)a1;
+ (id)draftTimeLineInfoWithDraftIds:(id)a0;
+ (id)userSavedKey;
+ (void)recordDraftVisibleByUserWithId:(id)a0;
+ (id)storage;
+ (id)sharedMonitor;

- (void).cxx_destruct;

@end
