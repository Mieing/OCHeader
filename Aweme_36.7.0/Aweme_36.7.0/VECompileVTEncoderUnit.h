@class HTSVideoData, NSError, VEConfigData, NSCondition, VEMVPRenderer, NSObject, VETransData, NSMutableArray, NSString, VECompileFramebufferManager, VEFence, HTSGLContext, NSLock, VEPixelBufferCopyUtils;
@protocol OS_dispatch_queue, VEProcessSampleDelegate;

@interface VECompileVTEncoderUnit : IESMMObject <VEProcessSampleDelegate, VECompileStageProtocol, VECompileEncoderUnitProtocol> {
    struct CGSize { double width; double height; } _videoSize;
    HTSGLContext *_encoderSharedContext;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastEncodeTime;
    unsigned int _pixelFormat;
    struct unique_ptr<TELensSmartCodecAlgorithm, std::default_delete<TELensSmartCodecAlgorithm>> { struct __compressed_pair<TELensSmartCodecAlgorithm *, std::default_delete<TELensSmartCodecAlgorithm>> { struct TELensSmartCodecAlgorithm *__value_; } __ptr_; } mSmartCodecHandle;
}

@property (retain, nonatomic) VECompileFramebufferManager *framebufferManager;
@property (retain, nonatomic) HTSVideoData *videoData;
@property (retain, nonatomic) VETransData *transData;
@property (retain, nonatomic) VEConfigData *configData;
@property (nonatomic) struct OpaqueVTCompressionSession { } *videoEncodeSession;
@property (retain, nonatomic) VEMVPRenderer *textureMvpRenderer;
@property (retain, nonatomic) VEMVPRenderer *pixelbufferMvpRenderer;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } lastVideoFrameTime;
@property (nonatomic) BOOL waitForFrameAfterSeek;
@property (retain, nonatomic) NSMutableArray *latestVideoPTS;
@property (retain, nonatomic) NSLock *vPTSLock;
@property (nonatomic) long long status;
@property (nonatomic) long long inputVideoDataType;
@property (retain, nonatomic) NSCondition *pipelineResourcesCont;
@property (nonatomic) long long pipeResources;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *writerQueue;
@property (retain, nonatomic) VEFence *fenceObj;
@property (retain, nonatomic) VEPixelBufferCopyUtils *pixelBufferCopyUtils;
@property (nonatomic) BOOL encodeUseFenceRender;
@property (nonatomic) BOOL passVTEncode;
@property (nonatomic) BOOL isMultiClip;
@property (nonatomic) BOOL enableAsyncWriter;
@property (nonatomic) BOOL enableAgfxContext;
@property (nonatomic) BOOL enableEncodeFrameOpt;
@property (retain, nonatomic) NSMutableArray *splitTimePoints;
@property (weak, nonatomic) id<VEProcessSampleDelegate> downstream;
@property (nonatomic) BOOL hasDecreseFrameTimeStamp;
@property (retain, nonatomic) NSError *encoderError;
@property (retain, nonatomic) NSString *route;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long curVideoStage;
@property (nonatomic) long long curAudioStage;

- (void)vtEncodeCallback:(id)a0 sample:(struct opaqueCMSampleBuffer { } *)a1 flags:(unsigned int)a2;
- (void)initSmartCodecHandle:(id)a0;
- (BOOL)encodeFinish:(BOOL)a0;
- (void)p_downstreamProcessSampleData:(id)a0;
- (BOOL)p_encodeSampleDataByPixelBuf:(id)a0;
- (BOOL)p_encodeSampleDataByFrameBuffer:(id)a0;
- (void)returnFramebuffer:(id)a0;
- (void)p_releaseResource;
- (void)p_acruireResource;
- (BOOL)p_needEncodeAsIFrame:(id)a0;
- (void)invokeSmartCodecProcess:(id)a0 pixel:(struct __CVBuffer { } *)a1;
- (void)applySmartCodecRet;
- (id)p_renderAtInternalSizeUsingFramebuffer:(id)a0 fence:(id)a1;
- (BOOL)initVTSessions:(id)a0;
- (int)setVTSessionConfig:(id)a0;
- (BOOL)encodeSampleData:(id)a0;
- (BOOL)getVideoWriterFinish;
- (BOOL)getAudioWriterFinish;
- (BOOL)processSampleData:(id)a0;
- (BOOL)setConfig:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (void)dealloc;
- (void)closeSession:(BOOL)a0;
- (void)resetSession;

@end
