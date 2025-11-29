@class NSMutableArray, NSRecursiveLock;

@interface TPAudioKit : NSObject

@property (retain, nonatomic) NSMutableArray *delegateArray;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (nonatomic) BOOL initialized;

+ (id)sharedInstance;

- (id)init;
- (void)setupAudioSession;
- (void)unsetupAudioSession;
- (void)setActive:(BOOL)a0;
- (void)addInterruptionDelegate:(id)a0;
- (void)removeInterruptionDelegate:(id)a0;
- (void)handleAVAudioSessionInterruption:(id)a0;
- (void)handleTPPlayerAudioSessionInterruptionEnded:(id)a0;
- (void)handleApplicationDidBecomeActive:(id)a0;
- (void)handleInterruptionBegan;
- (void)handleInterruptionEnded;
- (void).cxx_destruct;

@end
