@class LiveKTVScorerInitParam, NSRecursiveLock, MMFinderLiveKSKitMusicSong;
@protocol MMFinderLiveKTVScorerDelegate;

@interface MMFinderLiveKTVBaseScorer : NSObject

@property (readonly, nonatomic) BOOL debugDumpSwitch;
@property (nonatomic) struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *recordDumpFile;
@property (retain, nonatomic) LiveKTVScorerInitParam *settingParam;
@property (retain, nonatomic) MMFinderLiveKSKitMusicSong *song;
@property (nonatomic) BOOL initSucc;
@property (nonatomic) BOOL isFinishScoring;
@property (copy, nonatomic) id /* block */ finishScoreCompletion;
@property (retain, nonatomic) NSRecursiveLock *audioScoreLock;
@property (weak, nonatomic) id<MMFinderLiveKTVScorerDelegate> scorerDelegate;
@property (readonly, nonatomic) BOOL isStart;

- (id)initWithParam:(id)a0;
- (void)initDefaultDatas;
- (void)dealloc;
- (BOOL)startScoreWithSong:(id)a0;
- (BOOL)stopScore;
- (void)process:(id)a0;
- (BOOL)finishScore:(id /* block */)a0;
- (id)parseMusicNotes;
- (void)enableRatioReduce:(BOOL)a0;
- (void)setKeyShift:(int)a0;
- (BOOL)checkNeedIgnoreFrameProcess:(id)a0;
- (void)onSongStartScore;
- (void)onSongStopScore;
- (void)createRecordDumpFile;
- (void)closeRecordDumpFile;
- (void)debug_dump:(char *)a0 size:(int)a1;
- (void).cxx_destruct;

@end
