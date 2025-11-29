@class MJTemplateSession, NSMutableArray;

@interface MJTemplateSessionQueue : NSObject

@property (readonly, nonatomic) MJTemplateSession *workingSession;
@property (readonly, nonatomic) NSMutableArray *pendingSessions;
@property (readonly, nonatomic) BOOL isIdle;

- (id)init;
- (BOOL)containsSession:(id)a0;
- (BOOL)isSessionWorking:(id)a0;
- (BOOL)isSessionPending:(id)a0;
- (BOOL)addPendingSession:(id)a0;
- (BOOL)removePendingSession:(id)a0;
- (id)scheduleNextWorkingSession;
- (BOOL)releaseWorkingSession;
- (BOOL)releaseWorkingSession:(id)a0;
- (void).cxx_destruct;

@end
