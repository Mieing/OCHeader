@class NSString, NLEBingoManager, NLEInterface_OC, IESMMBingoManager;
@protocol AWEStudioMusicModelProtocol;

@interface ACCEditBingoManager : NSObject

@property (retain, nonatomic) IESMMBingoManager *veManager;
@property (retain, nonatomic) NLEBingoManager *nleManager;
@property (copy, nonatomic) NSString *draftFolder;
@property (retain, nonatomic) NLEInterface_OC *nle;
@property (nonatomic) double bingoBeginTime;
@property (nonatomic) double bingoDuration;
@property (retain, nonatomic) id<AWEStudioMusicModelProtocol> music;

+ (void)insertVideo:(id)a0 clipRange:(id)a1 toVideoData:(id)a2;
+ (void)insertPic:(id)a0 duration:(float)a1 transform:(id)a2 toVideoData:(id)a3;
+ (void)deleteAsset:(id)a0 toVideeeoData:(id)a1;
+ (void)moveAssetFromIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1 videoData:(id)a2;
+ (void)setClipRange:(id)a0 forAssetAtIndex:(unsigned long long)a1 videoData:(id)a2;
+ (void)setRotateType:(id)a0 forAssetAtIndex:(unsigned long long)a1 videoData:(id)a2;
+ (void)setRate:(double)a0 forAssetAtIndex:(unsigned long long)a1 videoData:(id)a2;
+ (id)makeItemWithVideoData:(id)a0;
+ (void)setTransformInfo:(id)a0 forAssetAtIndex:(unsigned long long)a1 videoData:(id)a2;
+ (id)syncExtraKeysWhiteList;
+ (id)nleVideoDataWithBingoResult:(id)a0 draftFolder:(id)a1;

- (void)setStoredBeats:(id)a0 completion:(id /* block */)a1;
- (void)changeMusic:(double)a0 duration:(double)a1 completion:(id /* block */)a2;
- (void)insertVideo:(id)a0 pos:(int)a1 completion:(id /* block */)a2;
- (void)insertPic:(id)a0 picDuration:(float)a1 pos:(int)a2 completion:(id /* block */)a3;
- (void)deleteVideoWithPos:(long long)a0 completion:(id /* block */)a1;
- (void)moveVideoInPos:(long long)a0 toPos:(long long)a1 completion:(id /* block */)a2;
- (void)getRandomReslove:(id /* block */)a0;
- (void)getReslove:(id /* block */)a0;
- (void)generateVideo:(id)a0 range:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 interval:(double)a2 progress:(id /* block */)a3 completion:(id /* block */)a4;
- (void)cancleGenerateVideo:(id)a0;
- (id)makeItemWithVideodata:(id)a0;
- (int)saveInterimScoresToFile:(id)a0;
- (int)checkScoreFile:(id)a0;
- (id)initWithVideoData:(id)a0 draftFolder:(id)a1;
- (void)setBingoNLEModel:(id /* block */)a0;
- (void)commitNLEModel:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
