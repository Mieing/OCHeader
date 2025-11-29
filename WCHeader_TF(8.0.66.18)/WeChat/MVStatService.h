@class NSString, MVStat22259;

@interface MVStatService : MMUserService <MMServiceProtocol>

@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSString *playSameSongSessionId;
@property (copy, nonatomic) NSString *editSessionId;
@property (retain, nonatomic) MVStat22259 *editInfo;
@property (nonatomic) double lastTotalDuration;
@property (nonatomic) double lastStartTimestamp;
@property (retain, nonatomic) NSString *musicId;
@property (nonatomic) BOOL needRefreshSameSongSessionidAfterMusicStop;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)refreshSessionIdWithMusicId:(id)a0;
- (void)enterPlayer;
- (void)exitPlayer;
- (void)beginEditWithMusicInfo:(id)a0 songId:(id)a1 partNum:(int)a2 createType:(unsigned long long)a3;
- (void)onMusicPlayWithMusicid:(id)a0;
- (void)onMusicPause;
- (void)onMusicStop;
- (unsigned int)totalMusicPlayDurationWhenEnterWithMusicid:(id)a0;
- (unsigned int)totalMusicPlayDurationWhenExitWithMusicid:(id)a0;
- (unsigned int)p_totalMusicPlayDuration;
- (void).cxx_destruct;

@end
