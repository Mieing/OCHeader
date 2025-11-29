@class NSMutableArray, NSRecursiveLock;

@interface BDATC2SChecker : NSObject

@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) NSMutableArray *logQueue;

+ (id)sharedChecker;

- (void)matchingFailedLogWithLogModel:(id)a0 result:(long long)a1 shouldSend:(long long)a2 realSend:(long long)a3;
- (void)check3sLaterWithModel:(id)a0;
- (BOOL)isValidLog:(id)a0;
- (void)matchEventTrackWithValidLog:(id)a0;
- (void)matchEventTrack:(id)a0;
- (void)C2S_processAlert:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
