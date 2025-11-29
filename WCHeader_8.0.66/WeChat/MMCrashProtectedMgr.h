@class NSRecursiveLock, NSString, NSMutableDictionary, NSMutableArray;

@interface MMCrashProtectedMgr : MMRootService <MMServiceProtocol> {
    BOOL m_isDebuging;
    BOOL m_stopRemovingUnsedCPKey;
    BOOL m_isInBackground;
    BOOL m_isLastTimeCrashedBySpecialCharacter;
    NSMutableArray *m_currRunloopsCPKeys;
    NSMutableDictionary *m_currIncreaseCPKeys;
    NSMutableDictionary *m_chatRoomCrashCountDict;
    NSRecursiveLock *m_lock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isMemoryMappedKVValid;
+ (BOOL)isCrashBySpecialCharacter;
+ (void)clearFlag;

- (void)onSingalCrash:(struct __siginfo { int x0; int x1; int x2; int x3; unsigned int x4; int x5; void *x6; union sigval { int x0; void *x1; } x7; long long x8; unsigned long long x9[7]; } *)a0;
- (id)init;
- (BOOL)isLastTimeCrashedBySpecialCharacter;
- (id)hasCrashMemoryMappedKV;
- (id)mayCrashMemoryMappedKV;
- (id)reportedCPKeyMemoryMappedKV;
- (void)checkDataValid;
- (void)checkMayCrashAndMarkAsHasCrash;
- (void)checkHasCrashAndDoReportJob;
- (BOOL)isUnsafeWithKey:(id)a0;
- (BOOL)isChatRoomUnsafe:(id)a0;
- (void)increaseCrashCountWithKey:(id)a0;
- (void)decreaseCrashCountWithKey:(id)a0;
- (void)clearCrashCountWithKey:(id)a0;
- (void)decreaseCurrIncreaseCPKeysWithout:(id)a0;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)onServiceTerminate;
- (void)onExit;
- (void)doCleaningJob;
- (void)stopCleaning;
- (void)removeInfoWithKey:(id)a0 threadId:(unsigned long long)a1;
- (id)lastCPKey:(unsigned long long)a0;
- (void).cxx_destruct;

@end
