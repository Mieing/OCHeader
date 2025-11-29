@class HTSVideoData, VECompileSession, VEEditorSession, NLEMediaWrapper, IESMMTransProcessData;

@interface NLEExportSession : NSObject

@property (retain, nonatomic) HTSVideoData *veVideoData;
@property (retain, nonatomic) VEEditorSession *veEditor;
@property (retain, nonatomic) VECompileSession *compileSession;
@property (retain, nonatomic) NLEMediaWrapper *nleMediaWrapper;
@property (nonatomic) BOOL useVEPublic;
@property (nonatomic) BOOL audioExportCancelled;
@property (copy, nonatomic) id /* block */ commitBlock;
@property (retain, nonatomic) IESMMTransProcessData *processConfig;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (copy, nonatomic) id /* block */ encodeDataCallback;

+ (id)exportErrorDomain;

- (void)cancelTranscode;
- (void)transcodeWithCompleteBlock:(id /* block */)a0;
- (void)p_updateVideoDataWithCompletion:(id /* block */)a0;
- (id)initWithNLEMediaWrapper:(id)a0;
- (id)initWithNLEMedia:(id)a0;
- (id)initWithVideoData:(id)a0 editor:(id)a1;
- (id)getExportVideoPath;
- (void)publicExportWithConfig:(id)a0 transParam:(id)a1 exportFilePath:(id)a2 completeBlock:(id /* block */)a3;
- (void)restartReverseAsset:(id /* block */)a0;
- (void)restartCurrentEditorReverseAssetWithSize:(struct CGSize { double x0; double x1; })a0 completion:(id /* block */)a1;
- (id)effectProcess;
- (void)setupTranscodeConfig:(id)a0 effectUnit:(id)a1;
- (void)publicExportWithConfig:(id)a0 transParam:(id)a1 completeBlock:(id /* block */)a2;
- (BOOL)compileFinished;
- (BOOL)isPreUploadableWithTransConfig:(id)a0 videoProcess:(id)a1;
- (void)updateVEEditor:(id)a0;
- (void)setCompileCompleteBeforeDestoryBlock:(id /* block */)a0;
- (void)pauseCompile;
- (void)resumeCompile;
- (void)enableCompileSpeedControl:(BOOL)a0;
- (BOOL)isCompileReencode:(id)a0;
- (id)getAudioMatrixResult;
- (id)getDenoiseSnrResults;
- (void).cxx_destruct;
- (void)cancel:(id /* block */)a0;

@end
