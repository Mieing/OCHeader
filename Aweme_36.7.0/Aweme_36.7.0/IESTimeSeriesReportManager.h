@class NSTimer, NSMutableArray, IESTimeSeriesFeatures;

@interface IESTimeSeriesReportManager : NSObject

@property (retain, nonatomic) NSMutableArray *featureCache;
@property (retain, nonatomic) NSTimer *collectionTimer;
@property (retain, nonatomic) IESTimeSeriesFeatures *timeSeriesFeatures;

+ (long long)timeSeriesFeatureDuration;
+ (long long)timeSeriesFeatureCacheSize;
+ (id)shareInstance;

- (void)destroyTimer;
- (void)setupCollectTimer;
- (void)reportFeatureWithMode:(unsigned long long)a0;
- (id)collectFeaturesWithMode:(unsigned long long)a0;
- (void)uploadFeatures:(id)a0;
- (void)handleFeatureCollection;
- (void)uploadCachedFeatures;
- (void)timerFired:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
