@interface BDAirPlayPlayerState : NSObject

@property (nonatomic) float playbackSpeed;
@property (nonatomic) long long lastPositionUpdateTime;
@property (nonatomic) long long lastPosition;
@property (nonatomic) long long duration;
@property (nonatomic) BOOL isPlaying;

@end
