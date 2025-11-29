@class AVAsset, EditVideoBGMPlayer, NSString, NSMutableArray, RecommendedMusicInfo;

@interface EditVideoMusicController : MMObject <EditVideoBGMPlayerDelegate, WCAudioModuleDelegate> {
    BOOL _isBGMPlaying;
    NSString *_audioModuleIdentifier;
}

@property (retain, nonatomic) AVAsset *avAsset;
@property (retain, nonatomic) NSMutableArray *previewImages;
@property (retain, nonatomic) NSMutableArray *images;
@property (nonatomic) unsigned long long previousRequestId;
@property (retain, nonatomic) EditVideoBGMPlayer *bgmPlayer;
@property (retain, nonatomic) NSMutableArray *musicList;
@property (retain, nonatomic) NSMutableArray *musicUpdateBlocks;
@property (copy, nonatomic) id /* block */ playerReadyToPlayBlock;
@property (copy, nonatomic) id /* block */ playerPlayToEndBlock;
@property (copy, nonatomic) id /* block */ playerTimeControlStatusChangeBlock;
@property (nonatomic) unsigned long long entranceType;
@property (nonatomic) unsigned long long preferDuration;
@property (retain, nonatomic) RecommendedMusicInfo *patMusicInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)musicBussidWithEntranceType:(unsigned long long)a0;

- (id)initWithAvAsset:(id)a0;
- (id)initWithImageDataArray:(id)a0;
- (id)initWithImages:(id)a0;
- (void)addMusicUpdateBlock:(id /* block */)a0;
- (void)fetchMusicAutoPlay:(BOOL)a0;
- (void)playLocalMusic:(BOOL)a0;
- (int)getMusicBusinessId;
- (void)processGetMusicsResp:(unsigned long long)a0 andMusics:(id)a1 play:(BOOL)a2;
- (void)playMusicAtIndex:(unsigned long long)a0;
- (void)playMusic:(id)a0;
- (void)pause;
- (void)clearPlayer;
- (void)resume;
- (void)resumeIfNeed;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })currentPlayerTime;
- (double)currentPlayerItemDuration;
- (long long)currentPlayerTimeControlStatus;
- (void)seekToTime:(double)a0;
- (void)replayMusic;
- (void)addMusic:(id)a0 atIndex:(unsigned long long)a1;
- (void)onEditVideoBGMPlayerReadyToPlay;
- (void)onEditVideoBGMPlayerPlaytoEnd;
- (void)onEditVideoBGMPlayerTimeControlStatusChange:(long long)a0;
- (unsigned int)getNetWorkType;
- (void)kvReportBgmDataWithMusicIndex:(unsigned long long)a0 isMusicOn:(BOOL)a1;
- (void)audioModuleInterruptionBegin:(id)a0 param:(id)a1;
- (void)audioModuleInterruptionEnd:(id)a0 param:(id)a1;
- (void)_activeAudioModule;
- (void)_deactiveAudioModule;
- (id)_getAudioModuleIdentifier;
- (void).cxx_destruct;

@end
