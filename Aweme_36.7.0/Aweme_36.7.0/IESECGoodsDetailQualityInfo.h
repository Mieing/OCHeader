@class NSMutableDictionary, NSDictionary, IESECNetPerfMetrics, NSNumber;

@interface IESECGoodsDetailQualityInfo : NSObject

@property (nonatomic) double startTime;
@property (retain, nonatomic) NSMutableDictionary *stageStartTimestampDict;
@property (retain, nonatomic) NSMutableDictionary *stageEndTimestampDict;
@property (nonatomic) BOOL didTracked;
@property (retain, nonatomic) NSMutableDictionary *category;
@property (retain, nonatomic) NSDictionary *serverMetrics;
@property (retain, nonatomic) IESECNetPerfMetrics *netPerfMetrics;
@property (nonatomic) BOOL usingCache;
@property (nonatomic) BOOL usingChunk;
@property (nonatomic) BOOL chunkBackup;
@property (nonatomic) BOOL chunkFirstSuccess;
@property (nonatomic) BOOL chunkSecondSuccess;
@property (nonatomic) BOOL onlyOneChunk;
@property (retain, nonatomic) NSNumber *lastDistance;
@property (readonly, nonatomic) BOOL canTrackNow;

- (BOOL)isViewDidLoad;
- (double)apiRequestDuration;
- (BOOL)isViewWillAppear;
- (id)netMetrics;
- (void)stageEndsFor:(id)a0;
- (void)stageStartsFor:(id)a0;
- (void)startStageTrack;
- (BOOL)shouldTrackStage:(id)a0;
- (BOOL)isRendEnded;
- (id)localMetrics;
- (double)pageTotalDuration;
- (void).cxx_destruct;
- (double)endTime;
- (id)init;
- (double)pageRenderDuration;

@end
