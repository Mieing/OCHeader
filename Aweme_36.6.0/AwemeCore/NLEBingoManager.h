@class IESMMBingoManager, NSString, NLEMediaWrapper;

@interface NLEBingoManager : NSObject

@property (retain, nonatomic) IESMMBingoManager *veBingoManager;
@property (retain, nonatomic) NLEMediaWrapper *mediaWrapper;
@property (retain, nonatomic) NSString *musicPath;
@property (nonatomic) int nleChainSelection;

- (void)getRandomResloveWithDisableZoom:(BOOL)a0 customImageFillMode:(id /* block */)a1 completion:(id /* block */)a2;
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
- (void)getPublicRandomReslove:(id /* block */)a0;
- (void)getPublicReslove:(id /* block */)a0;
- (id)initWithNLEMediaWrapper:(id)a0;
- (id)initWithNLEMedia:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setMusic:(id)a0;

@end
