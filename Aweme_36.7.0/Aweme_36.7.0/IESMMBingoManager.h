@class NSString, NSMutableDictionary, IESMMAudioOnsetResult;

@interface IESMMBingoManager : IESMMObject {
    void *_handle;
}

@property (retain, nonatomic) NSString *audioPath;
@property (retain, nonatomic) NSMutableDictionary *genertors;
@property (retain, nonatomic) IESMMAudioOnsetResult *onsetResult;
@property (nonatomic) double musicStart;
@property (nonatomic) double musicDration;

+ (void)insertVideo:(id)a0 clipRange:(id)a1 toVideoData:(id)a2;
+ (void)insertPic:(id)a0 duration:(float)a1 transform:(id)a2 toVideoData:(id)a3;
+ (void)deleteAsset:(id)a0 toVideeeoData:(id)a1;
+ (void)moveAssetFromIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1 videoData:(id)a2;
+ (void)setClipRange:(id)a0 forAssetAtIndex:(unsigned long long)a1 videoData:(id)a2;
+ (void)setRotateType:(id)a0 forAssetAtIndex:(unsigned long long)a1 videoData:(id)a2;
+ (void)setRate:(double)a0 forAssetAtIndex:(unsigned long long)a1 videoData:(id)a2;
+ (id)makeItemWithVideoData:(id)a0;
+ (void)setTransformInfo:(id)a0 forAssetAtIndex:(unsigned long long)a1 videoData:(id)a2;

- (int)createHandle;
- (void)changeMusicBeatsPartitionMode:(int)a0 completion:(id /* block */)a1;
- (void)cancleAllGenerate;
- (void)setStoredBeatsWithVeBeatsPath:(id)a0 downBeatsPath:(id)a1 noStrength:(id)a2 completion:(id /* block */)a3;
- (void)setStoredBeatsWithVeBeatsPath:(id)a0 downBeatsPath:(id)a1 manMadeBeatsPath:(id)a2 completion:(id /* block */)a3;
- (BOOL)parseDownBeatsPath:(id)a0 toBeatsParam:(struct bef_bingo_VideoMontage_BeatsParams { int x0; int x1; BOOL x2; BOOL x3; float *x4; float *x5; float *x6; float *x7; int *x8; } *)a1 reslut:(struct bef_bingo_beats_file_parse_result { float *x0; unsigned long long x1; float *x2; unsigned long long x3; int *x4; unsigned long long x5; } *)a2;
- (void)freeParseResult:(struct bef_bingo_beats_file_parse_result { float *x0; unsigned long long x1; float *x2; unsigned long long x3; int *x4; unsigned long long x5; } *)a0;
- (void)convert:(id)a0 start:(double)a1 duraion:(double)a2 block:(id /* block */)a3;
- (BOOL)parseVeBeatsPath:(id)a0 toBeatsParam:(struct bef_bingo_VideoMontage_BeatsParams { int x0; int x1; BOOL x2; BOOL x3; float *x4; float *x5; float *x6; float *x7; int *x8; } *)a1 reslut:(struct bef_bingo_beats_file_parse_result { float *x0; unsigned long long x1; float *x2; unsigned long long x3; int *x4; unsigned long long x5; } *)a2;
- (void)insertRes:(id)a0 picDuration:(float)a1 pos:(int)a2 type:(int)a3 completion:(id /* block */)a4;
- (id)makeKeyWithVideoPath:(id)a0;
- (void)processImage:(id)a0 nextImage:(id)a1 time:(double)a2 videoKey:(id)a3;
- (void)getRandomResloveWithDisableZoom:(BOOL)a0 customImageFillMode:(id /* block */)a1 completion:(id /* block */)a2;
- (id)getVideoDataFromOutPut:(struct bef_bingo_VideoMontage_Output { int x0; float x1; float x2; float x3; float x4; char *x5; int x6; int x7; int x8; float x9; } *)a0 videoCount:(int)a1 customImageFillMode:(id /* block */)a2;
- (id)getAudioDurationFromOutPut:(struct bef_bingo_VideoMontage_Output { int x0; float x1; float x2; float x3; float x4; char *x5; int x6; int x7; int x8; float x9; } *)a0 videoCount:(int)a1;
- (void)setStoredBeats:(id)a0 completion:(id /* block */)a1;
- (void)changeMusic:(double)a0 duration:(double)a1 completion:(id /* block */)a2;
- (void)insertVideo:(id)a0 pos:(int)a1 completion:(id /* block */)a2;
- (void)insertPic:(id)a0 picDuration:(float)a1 pos:(int)a2 completion:(id /* block */)a3;
- (void)deleteVideoWithPos:(long long)a0 completion:(id /* block */)a1;
- (void)moveVideoInPos:(long long)a0 toPos:(long long)a1 completion:(id /* block */)a2;
- (void)getRandomReslove:(id /* block */)a0;
- (void)getAudioDurations:(id /* block */)a0;
- (void)getReslove:(id /* block */)a0;
- (void)generateVideo:(id)a0 range:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 interval:(double)a2 progress:(id /* block */)a3 completion:(id /* block */)a4;
- (void)cancleGenerateVideo:(id)a0;
- (void)chageMusicCropRation:(float)a0 completion:(id /* block */)a1;
- (id)makeItemWithVideodata:(id)a0;
- (void)rotatedVideo:(float)a0 pos:(int)a1 completion:(id /* block */)a2;
- (int)saveInterimScoresToFile:(id)a0;
- (int)checkScoreFile:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setMusic:(id)a0;
- (void)dealloc;

@end
