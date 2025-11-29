@class NSString, NSObject;
@protocol IBmfSuperResolution, OS_dispatch_queue;

@interface MetalFilterBmfSR : MetalFilterDefault <MetalFilterSource> {
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } isIniting;
    struct BmfSrExtraInfo { struct BmfRect { int x0; int x1; int x2; int x3; } x0; struct BmfSrColor { int x0; int x1; int x2; } x1; int x2; int x3; int x4; BOOL x5; id x6; id x7; int x8; id x9[3]; } *_extraInfo;
}

@property (nonatomic) BOOL enable15SR;
@property (nonatomic) BOOL enablesync;
@property (nonatomic) int algoType;
@property (nonatomic) BOOL enableRoiSR;
@property (nonatomic) float roiSRXInRate;
@property (nonatomic) float roiSRYInRate;
@property (nonatomic) float roiSRWInRate;
@property (nonatomic) float roiSRHInRate;
@property (nonatomic) float roiSRYColor;
@property (nonatomic) float roiSRUColor;
@property (nonatomic) float roiSRVColor;
@property int srAlgoType;
@property int srMode;
@property (nonatomic) int srExtraMode;
@property BOOL shouldUpdateSr;
@property (nonatomic) int updateSrAlgoType;
@property (retain, nonatomic) id<IBmfSuperResolution> vrsrLut;
@property int lifeId;
@property BOOL isBMFInitFinish;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *bmfInitprocessorQueue;
@property (copy, nonatomic) NSString *licenseName;
@property (nonatomic) BOOL useBMFSRNewInterface;
@property (retain, nonatomic) NSString *cacheDir;
@property (nonatomic) int sharpLevel;
@property (nonatomic) BOOL enableSRAfterHDR;
@property (nonatomic) BOOL enableIndivaldulCmdBuf;
@property (copy, nonatomic) NSString *downloadAlgorithmName;
@property (nonatomic) int originalSrExtraMode;
@property BOOL modelInfoChanged;
@property (retain, nonatomic) NSString *weightHost;
@property (retain, nonatomic) NSString *weightSaveDir;
@property long long backupSrAlgoType;
@property (nonatomic) double wesThresShold;
@property (nonatomic) double wesWeight;
@property (nonatomic) BOOL wesParamChange;
@property (nonatomic) BOOL enableShareVpContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateCommonParams:(id)a0;
- (id)getEffectPatameterStr;
- (void)checkDownloadAndInitBmf;
- (void)createQueueAndInitBmf;
- (void)setupBMF:(id)a0;
- (void)updateSRMode:(int)a0 alg:(int)a1;
- (void)setupBMFByTypeAndScale:(int)a0;
- (BOOL)needDownload:(int)a0;
- (void)initBmf;
- (void *)processWithRoi:(struct __CVBuffer { } *)a0;
- (void)updateModelInfo:(id)a0;
- (void)updateROIInfo:(id)a0;
- (void)updateSRType:(id)a0;
- (BOOL)returnBmfResult:(void *)a0;
- (struct VideoFrame { struct VideoFrameBuffer *x0; } *)process:(struct VideoFrame { struct VideoFrameBuffer *x0; } *)a0;
- (void).cxx_destruct;
- (void *)processPixelBuffer:(struct __CVBuffer { } *)a0;
- (void)setEffect:(id)a0;
- (void)dealloc;
- (id)initWithDictionary:(id)a0 index:(int)a1;

@end
