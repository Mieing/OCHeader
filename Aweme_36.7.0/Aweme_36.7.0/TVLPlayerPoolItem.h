@class NSLock, TVLPlayer, NSTimer;

@interface TVLPlayerPoolItem : NSObject {
    NSLock *_freeLock;
    TVLPlayer *_player;
    NSTimer *_deallocTimer;
    long long _delayTime;
}

- (void)freePlayer;
- (id)initWithPlayer:(id)a0 delayTime:(long long)a1;
- (void)deallocTimeBlock;
- (void).cxx_destruct;

@end
