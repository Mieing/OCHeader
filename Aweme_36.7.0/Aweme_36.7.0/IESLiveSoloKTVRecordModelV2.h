@class IESLiveSoloKTVApi, NSString, IESSoloKTVTuningViewModel, HTSEventContext, IESSoloKTVDraftMainModel, IESSoloKTVMusicManager, IESSoloKTVResourceManager, IESLiveSoloKTVEditModelV2, IESSoloKTVAudioRecordManager, IESLiveKtvSongStruct;

@interface IESLiveSoloKTVRecordModelV2 : NSObject

@property (retain, nonatomic) IESLiveSoloKTVApi *api;
@property (nonatomic) double recordStartTime;
@property (nonatomic) double downloadStartTime;
@property (nonatomic) int source;
@property (retain, nonatomic) IESLiveKtvSongStruct *currentSong;
@property (retain, nonatomic) IESSoloKTVDraftMainModel *draftModel;
@property (retain, nonatomic) IESSoloKTVAudioRecordManager *recordManager;
@property (retain, nonatomic) IESSoloKTVResourceManager *resourceManager;
@property (nonatomic) long long downloadState;
@property (retain, nonatomic) IESSoloKTVTuningViewModel *tuningViewModel;
@property (retain, nonatomic) IESLiveSoloKTVEditModelV2 *editModel;
@property (nonatomic) long long sessionId;
@property (nonatomic) BOOL needShowSkip;
@property (nonatomic) double currentPlayTime;
@property (nonatomic) BOOL autoStartRecord;
@property (copy, nonatomic) NSString *enterSource;
@property (copy, nonatomic) NSString *pageFrom;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (weak, nonatomic) IESSoloKTVMusicManager *musicManager;
@property (nonatomic) BOOL notFirstShowPanel;
@property (nonatomic) double recordStartTS;
@property (nonatomic) double recordDuration;
@property (nonatomic) double downloadTime;
@property (nonatomic) BOOL isHighRiskPlaying;
@property (copy, nonatomic) id /* block */ onPlayEnd;
@property (copy, nonatomic) id /* block */ onPlayingTimeChanged;
@property (copy, nonatomic) id /* block */ onSongDurationChanged;

- (id)initWithSong:(id)a0 source:(int)a1 enterSource:(id)a2;
- (void)releaseByteAudio;
- (void)pauseRecordFromResign:(BOOL)a0 completion:(id /* block */)a1;
- (BOOL)canOpenEarReturn;
- (void)updateEarReturn:(BOOL)a0;
- (void)fetchAndDownloadData:(id /* block */)a0 completion:(id /* block */)a1 allCompletion:(id /* block */)a2;
- (BOOL)isFirstPartDownloaded;
- (BOOL)isResourceDownloaded;
- (BOOL)userOrigin;
- (void)switchOrigin:(BOOL)a0 completion:(id /* block */)a1;
- (void)requestStartKTV:(id /* block */)a0;
- (void)restart:(id /* block */)a0 completion:(id /* block */)a1;
- (void)fillEndInfo:(id)a0;
- (void)requestEndKTV:(double)a0 completion:(id /* block */)a1;
- (void)resumeRecordWithDelay:(double)a0 fromResign:(BOOL)a1 completion:(id /* block */)a2;
- (void)trackRecordManagerState:(long long)a0;
- (void)downloadRecordData:(id /* block */)a0 completion:(id /* block */)a1 allCompletion:(id /* block */)a2;
- (void)fetchRecordData:(id /* block */)a0;
- (void)requestTemplateList:(id /* block */)a0;
- (void)dispatchDownloadState:(int)a0 userOrigin:(BOOL)a1 song:(id)a2 video:(id)a3 error:(id)a4 completion:(id /* block */)a5;
- (void)trackDownloadUserWaitingTime:(double)a0;
- (void)downloadRetry:(long long)a0 userOrigin:(BOOL)a1 completion:(id /* block */)a2 allCompletion:(id /* block */)a3;
- (id)clipLyricsWithStartTime:(double)a0 endTime:(double)a1 lyricModel:(id)a2;
- (void)trackStartSingState;
- (void)saveAudioToDraft:(id)a0 startTime:(double)a1 duration:(double)a2;
- (void).cxx_destruct;
- (void)seekTo:(double)a0;

@end
