@class NSArray, NSMutableArray, NSRecursiveLock;

@interface MMFinderLivePIPPerformanceReportObj : NSObject

@property (retain, nonatomic) NSMutableArray *latestDecodeComputeResultList;
@property (retain, nonatomic) NSMutableArray *latestRenderComputeResultList;
@property (nonatomic) unsigned long long sumDecodeFPS;
@property (nonatomic) int sumDecodeCollectCnt;
@property (nonatomic) int maxDecodeFPS;
@property (nonatomic) int minDecodeFPS;
@property (nonatomic) unsigned long long sumPIPRenderFPS;
@property (nonatomic) int sumPIPRenderCollectCnt;
@property (nonatomic) int maxPIPRenderFPS;
@property (nonatomic) int minPIPRenderFPS;
@property (nonatomic) unsigned long long sumDifferenceFPS;
@property (nonatomic) unsigned long long sumDifferenceComputeCnt;
@property (nonatomic) double sumPixelRenderDuration;
@property (nonatomic) int sumPixelRenderCollectCnt;
@property (nonatomic) double sumNewRenderBufferDuration;
@property (nonatomic) int sumNewRenderBufferCollectCnt;
@property (nonatomic) double sumAttachWidgetsDuration;
@property (nonatomic) int sumAttachWidgetsCollectCnt;
@property (nonatomic) double sumRenderToBufferDuration;
@property (nonatomic) int sumRenderToBufferCollectCnt;
@property (nonatomic) double computeResultDifferenceTime;
@property (nonatomic) double largeFPSDifference;
@property (nonatomic) double lessFPSDifference;
@property (nonatomic) int topFPSDifferenceListCnt;
@property (nonatomic) int topFPSLimit;
@property (nonatomic) int largeFPSDifferenceCnt;
@property (nonatomic) int lessFPSDifferenceCnt;
@property (retain, nonatomic) NSMutableArray *topFPSDifferenceResultList;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (readonly, nonatomic) int averageDecodeFPS;
@property (readonly, nonatomic) int averagePIPRenderFPS;
@property (readonly, nonatomic) int pixelRenderAverageDuration;
@property (readonly, nonatomic) int newRenderAverageDuration;
@property (readonly, nonatomic) int attachWidgesAverageDuration;
@property (readonly, nonatomic) int renderToAverageDuration;
@property (readonly, nonatomic) NSArray *topFPSOverLimitResultList;

- (id)init;
- (void)initDefaultData;
- (void)addDecodeLoopMetrics:(id)a0;
- (void)addRenderLoopMetrics:(id)a0;
- (id)description;
- (id)getDecodeComputeResult:(id)a0;
- (id)getRenderComputeResult:(id)a0;
- (void)compareDecodeRenderComputeResult;
- (BOOL)isRenderResult:(id)a0 nearToDecodeResult:(id)a1;
- (void)computeFPSDiffenceForRenderResult:(id)a0 decodeResult:(id)a1;
- (int)getDecodeFPS:(id)a0;
- (int)getPIPRenderFPS:(id)a0;
- (double)getPixelRenderDuration:(id)a0;
- (double)getNewRenderBufferDuration:(id)a0;
- (double)getAttachWidgesDuration:(id)a0;
- (double)getRenderToBufferDuration:(id)a0;
- (void).cxx_destruct;

@end
