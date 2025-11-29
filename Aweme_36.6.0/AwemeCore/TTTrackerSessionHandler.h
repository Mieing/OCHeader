@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_semaphore;

@interface TTTrackerSessionHandler : NSObject {
    NSObject<OS_dispatch_semaphore> *_sessionIDLock;
    int sessionIndex;
    BOOL enteredBackground;
    BOOL launched;
}

@property (copy, nonatomic) NSString *sessionID;
@property (copy, nonatomic) NSString *lastSessionID;
@property (copy) NSString *terminateTrackID;
@property BOOL isTerminating;
@property (nonatomic) unsigned long long bgTask;
@property (retain, nonatomic) NSMutableDictionary *sessionStartedTimestamps;
@property (nonatomic) unsigned long long launchFrom;
@property (nonatomic) BOOL isBackgroundLaunching;

+ (id)sharedHandler;

- (void)restartSession;
- (void)trackerSentFinishedNotification:(id)a0;
- (void)stopSessionWithLuanchType:(unsigned long long)a0;
- (void)insertPlaceholderTerminateLog;
- (id)createSessionId;
- (void).cxx_destruct;
- (id)init;
- (void)startSession;
- (void)dealloc;
- (void)didEnterBackground:(id)a0;
- (void)willEnterForeground:(id)a0;
- (void)startSession:(BOOL)a0;
- (void)clearSession;
- (BOOL)sessionStarted;
- (void)willTerminate:(id)a0;

@end
