@class IESMMAudioBeatTracking, NSString, NSArray, IESMMMVEffectFilter, HTSGLContext, IESMMEffectConfig;

@interface IESMMMVModel : NSObject

@property (retain, nonatomic) IESMMMVEffectFilter *effectFilter;
@property (retain, nonatomic) NSString *modelPath;
@property (retain, nonatomic) IESMMEffectConfig *config;
@property (nonatomic) struct CGSize { double width; double height; } preferResolution;
@property (retain, nonatomic) IESMMAudioBeatTracking *beatTrackingData;
@property (retain, nonatomic) HTSGLContext *context;
@property (retain, nonatomic) NSArray *resources;
@property (nonatomic) BOOL isVideoAndPicMixed;
@property (retain, nonatomic) NSString *mp3Rid;

+ (int)mvAudioConverter:(id)a0 start:(double)a1 duraion:(double)a2 audioType:(int)a3 buffer:(float **)a4;
+ (id)getMVResourceInfo:(id)a0;

- (void)setExtraParams:(id)a0;
- (BOOL)hasMV;
- (id)getCurrentAlgorithmConfigs;
- (void)setServerAlgorithmResults:(id)a0;
- (void)setBeatTrackingAlgorithmData:(id)a0;
- (void)setVariableDuration:(float)a0;
- (id)p_createDefaultEffectFilter;
- (void)setMV:(id)a0 userResourses:(id)a1 userSelectMusic:(id)a2 completion:(id /* block */)a3;
- (id)p_setMV:(id)a0 userResourses:(id)a1 userSelectMusic:(id)a2 start:(double)a3 duration:(double)a4 error:(id *)a5;
- (id)buildVideoDataWithInfo:(id)a0;
- (void)setMV:(id)a0 userResourses:(id)a1 userSelectMusic:(id)a2 start:(double)a3 duration:(double)a4 completion:(id /* block */)a5;
- (id)setMV:(id)a0 userResourses:(id)a1 userSelectMusic:(id)a2;
- (id)sortResource:(id)a0;
- (id)getUserResourceFromEffectResource:(id)a0;
- (id)getAssetWithPath:(id)a0 baseDir:(id)a1;
- (long long)getUserResourcesFillModeWithEffectResources:(id)a0;
- (void)configVolumeFilter:(id)a0;
- (void)reBuildVideoData:(id)a0 WithInfo:(id)a1;
- (void)userChangeMusic:(id)a0 start:(double)a1 duration:(double)a2 completion:(id /* block */)a3;
- (id)p_userSelectMusic:(id)a0 start:(double)a1 duration:(double)a2 error:(id *)a3;
- (void)setMV:(id)a0 userResourses:(id)a1 videoData:(id)a2 completion:(id /* block */)a3;
- (void)setMV:(id)a0 userResourses:(id)a1 completion:(id /* block */)a2;
- (id)setMV:(id)a0 userResourses:(id)a1;
- (id)makeAsset:(id)a0 toDuration:(double)a1;
- (id)getMVExportDataWithVideoData:(id)a0;
- (void)userChangeMusic:(id)a0 completion:(id /* block */)a1;
- (id)setMV:(id)a0 userResourses:(id)a1 videoData:(id)a2;
- (void)userChangePictures:(id)a0 newPictureUrls:(id)a1 completion:(id /* block */)a2;
- (void)releaseEffectFilter;
- (void *)getMVEffect;
- (void *)getMVInfo;
- (void)setResourceDurations:(id)a0;
- (void)setResolution:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
