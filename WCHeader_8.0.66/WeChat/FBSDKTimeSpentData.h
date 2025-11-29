@class NSString;

@interface FBSDKTimeSpentData : NSObject {
    BOOL _isCurrentlyLoaded;
    BOOL _shouldLogActivateEvent;
    BOOL _shouldLogDeactivateEvent;
    long long _secondsSpentInCurrentSession;
    long long _timeSinceLastSuspend;
    int _numInterruptionsInCurrentSession;
    long long _lastRestoreTime;
    long long _lastSuspendTime;
    NSString *_sessionID;
}

+ (void)suspend;
+ (void)restore:(BOOL)a0;
+ (id)singleton;
+ (void)setSourceApplication:(id)a0 openURL:(id)a1;
+ (void)setSourceApplication:(id)a0 isFromAppLink:(BOOL)a1;
+ (id)getSourceApplication;
+ (void)resetSourceApplication;
+ (void)registerAutoResetSourceApplication;

- (void)instanceSuspend;
- (void)instanceRestore:(BOOL)a0;
- (id)appEventsParametersForActivate;
- (id)appEventsParametersForDeactivate;
- (void).cxx_destruct;

@end
