@interface WCADVideoPlayInfo : NSObject

@property (nonatomic) int playCount;
@property (nonatomic) unsigned long long startPlayTime;
@property (nonatomic) unsigned long long endPlayTime;
@property (nonatomic) unsigned long long playTotalTime;
@property (nonatomic) unsigned long long videoTotalTime;
@property (nonatomic) long long playMode;
@property (nonatomic) long long playOrientation;
@property (nonatomic) unsigned long long currentPlaybackTime;
@property (nonatomic) unsigned long long totalPlaybackTime;

- (id)init;
- (void)mergeTotalPlaybackTime;
- (unsigned long long)fetchTotalPlaybackTime;

@end
