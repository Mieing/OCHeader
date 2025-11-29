@class NSPointerArray, NSLock;

@interface AWEAudioFocusManager : NSObject

@property (retain, nonatomic) NSPointerArray *listeners;
@property (retain, nonatomic) NSLock *lock;

+ (void)startPlay:(id)a0;
+ (void)stopPlay:(id)a0;
+ (void)pauseAllAndRemoveRemoteControl;
+ (BOOL)isPlaying;
+ (void)removePlayer:(id)a0;
+ (id)sharedManager;
+ (void)addPlayer:(id)a0;
+ (void)pauseAll;

- (void)removeRemoteControlCommand;
- (id)convertType:(id)a0;
- (void)startPlay:(id)a0;
- (void)stopPlay:(id)a0;
- (void).cxx_destruct;
- (BOOL)isPlaying;
- (id)init;
- (void)removePlayer:(id)a0;
- (void)setup;
- (void)addPlayer:(id)a0;

@end
