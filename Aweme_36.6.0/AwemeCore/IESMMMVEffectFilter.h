@class IESMMAudioBeatTracking, IESMMEffectConfig, NSObject;
@protocol OS_dispatch_semaphore;

@interface IESMMMVEffectFilter : HTSGLFilter

@property (nonatomic) void *renderMangerHandle;
@property (nonatomic) void *IESGpuProcessMsg;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *operateSemaphore;
@property (weak, nonatomic) IESMMAudioBeatTracking *beatTrackingData;
@property (nonatomic) BOOL enableAgfxContext;
@property (readonly, nonatomic) IESMMEffectConfig *config;
@property (copy, nonatomic) id /* block */ IESMMEffectMsgBlock;

+ (long long)paraseContentFile:(id)a0;
+ (id)getMVResourceInfo:(id)a0;

- (void)setExtraParams:(id)a0;
- (id)initWithConfig:(id)a0 context:(id)a1;
- (void)releaseRenderManager;
- (void)p_initEffectSDK;
- (int)p_setBeatTrackingAlgorithmData:(id)a0;
- (float)durationWithVideo:(id)a0;
- (int)convert:(id)a0 start:(double)a1 duraion:(double)a2 info:(struct bef_mv_info_st { struct bef_mv_template_resource_descriptor_st *x0; int x1; struct bef_mv_resolution_st { int x0; int x1; } x2; int x3; struct bef_mv_resource_audio_effect_base_info_st { int x0; char *x1; float x2; float x3; } x4; struct bef_mv_still_time_info_st { int x0; double *x1; double *x2; } x5; } *)a3 audioType:(int)a4;
- (int)bef_effect_mv_seek:(double)a0 input_resource:(id)a1 resourcecount:(int)a2 outputFramebuffer:(id)a3;
- (id)setMV:(id)a0 userResourses:(id)a1 userSelectMusic:(id)a2 start:(double)a3 duration:(double)a4 error:(id *)a5;
- (id)userSelectMusic:(id)a0 start:(double)a1 duration:(double)a2 error:(id *)a3;
- (id)getMVExportData;
- (id)getCurrentAlgorithmConfigs;
- (void)setServerAlgorithmResults:(id)a0;
- (void)setBeatTrackingAlgorithmData:(id)a0;
- (void)setVariableDuration:(float)a0;
- (void)setResourceDuration:(float *)a0 count:(int)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
