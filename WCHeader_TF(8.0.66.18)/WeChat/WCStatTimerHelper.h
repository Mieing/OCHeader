@interface WCStatTimerHelper : MMObject {
    BOOL _bHadAddObserver;
    unsigned long long _u64ActiveTime;
    unsigned long long _u64TotalTime;
}

- (id)init;
- (void)dealloc;
- (void)tryAddObserver;
- (void)removeObserver;
- (void)reset;
- (void)resetActiveTime;
- (void)clearActiveTime;
- (void)resetTotalTime;
- (void)onWillEnterForeground;
- (void)onDidEnterBackground;
- (void)calculateTotalTime;
- (void)start;
- (unsigned long long)endAndReturnTimeInMs;

@end
