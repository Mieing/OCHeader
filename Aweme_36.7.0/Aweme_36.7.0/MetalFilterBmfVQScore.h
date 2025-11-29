@protocol IBmfVqscoreLiveOC;

@interface MetalFilterBmfVQScore : MetalFilterDefault

@property (nonatomic) BOOL enableProcessEffect;
@property (nonatomic) long long sumFrameCount;
@property (nonatomic) double sumCostTime;
@property (nonatomic) double averageCostTime;
@property (nonatomic) long long sumSuccessFrameCount;
@property (nonatomic) double vqscoreSuccessRate;
@property BOOL isInited;
@property (retain, nonatomic) id<IBmfVqscoreLiveOC> vqscoreInstance;
@property (retain, nonatomic) id downloader;

- (struct VideoFrame { struct VideoFrameBuffer *x0; } *)process:(struct VideoFrame { struct VideoFrameBuffer *x0; } *)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDictionary:(id)a0 index:(int)a1;

@end
