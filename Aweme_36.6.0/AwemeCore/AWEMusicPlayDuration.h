@class AWEMusicService, AWEMusicPlayerModel;

@interface AWEMusicPlayDuration : NSObject

@property (nonatomic) double playingDuration;
@property (weak, nonatomic) AWEMusicService *player;
@property (nonatomic) BOOL eventBackgroundPlay;
@property (retain, nonatomic) AWEMusicPlayerModel *tempCurrentModel;

- (void)receiveNotes:(id)a0;
- (void)audioOver;
- (void)audioPlay;
- (void)playStatusChanged:(long long)a0 model:(id)a1;
- (void).cxx_destruct;
- (void)reset;
- (id)initWithPlayer:(id)a0;
- (void)setupNotifications;

@end
