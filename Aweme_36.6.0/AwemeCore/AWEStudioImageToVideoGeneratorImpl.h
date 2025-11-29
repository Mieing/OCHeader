@class NLEInterface_OC, NSString, AWEStudioImageToVideoConfig, NLEModel_OC;

@interface AWEStudioImageToVideoGeneratorImpl : NSObject <IESEditorLoggerDelegate, AWEStudioImageToVideoGenerator>

@property (retain, nonatomic) NLEInterface_OC *nle;
@property (retain, nonatomic) NLEModel_OC *model;
@property (retain, nonatomic) AWEStudioImageToVideoConfig *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)placeholderImagePath;
+ (id)placeholderVideoPath;
+ (id)exportFilePathWithConfig:(id)a0;

- (void)runWithConfig:(id)a0;
- (BOOL)checkInputConfig;
- (void)p_reportFailWithError:(id)a0;
- (void)p_reportProgress:(double)a0;
- (void)p_startGenerateVideoV2;
- (void)p_startGenerateVideo;
- (BOOL)copyImageAndEffectInfo;
- (void)p_initNLE;
- (BOOL)p_setupMainTrack;
- (void)p_setupEffectTrack;
- (void)p_startExportVideo;
- (void)p_reportSuccessWithVideoPath:(id)a0 videoDuration:(id)a1;
- (void)p_reportSuccessWithVideoPath:(id)a0;
- (void)IESEditorlogToLocal:(id)a0 andLevel:(long long)a1;
- (void).cxx_destruct;
- (void)cancel;

@end
