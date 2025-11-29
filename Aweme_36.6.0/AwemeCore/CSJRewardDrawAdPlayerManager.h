@class NSMutableArray;

@interface CSJRewardDrawAdPlayerManager : NSObject

@property (retain, nonatomic) NSMutableArray *playersIdle;
@property (retain, nonatomic) NSMutableArray *playersUsing;

+ (id)sharedInstance;

- (void)releasePlayer:(id)a0;
- (void)deallocAllPlayers;
- (void).cxx_destruct;
- (id)playerWithPlayerItem:(id)a0;

@end
