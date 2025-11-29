@class NSPointerArray, NSMapTable, NSRecursiveLock;

@interface ALMVideoPlayerPoolManager : NSObject

@property (retain, nonatomic) NSPointerArray *players;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) NSMapTable *playerStates;
@property (nonatomic) long long playerLimit;
@property (readonly, nonatomic) BOOL enabled;
@property (nonatomic) BOOL enableIdleTimerByPlayerWrapper;

+ (id)sharedInstance;

- (void)recordPlayer:(id)a0 playState:(long long)a1;
- (BOOL)playerNotUsed:(id)a0;
- (void)enqueue:(id)a0;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (id)init;
- (void)dealloc;
- (void)dequeue:(id)a0;

@end
