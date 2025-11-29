@class NSTimer;

@interface IESLiveAnchorAliveModule : IESLiveAnchorExecutionModule

@property (retain, nonatomic) NSTimer *aliveTimer;

- (void)stopAliveTimer;
- (void)startAliveTimer;
- (void)liveRoomWillDealloc;
- (void).cxx_destruct;
- (void)setup;

@end
