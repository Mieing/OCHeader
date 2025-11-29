@interface TTVideoEnginePlayDuration : NSObject

@property (nonatomic) long long state;
@property (nonatomic) double playedDuration;
@property (nonatomic) double startPlayTime;
@property (nonatomic) double lastPlayedDuration;

- (double)getPlayedDuration;
- (double)getLastRegionPlayedDuration;
- (void)clear;
- (id)init;
- (void)stop;
- (void)start;
- (void)reset;

@end
