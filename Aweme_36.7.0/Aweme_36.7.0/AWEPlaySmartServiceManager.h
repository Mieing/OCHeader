@class NSCache, NSObject;
@protocol OS_dispatch_queue;

@interface AWEPlaySmartServiceManager : NSObject

@property (nonatomic) double lastDoSmartPreRenderStrategyTime;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *smartPreRenderPredictQueue;
@property (retain, nonatomic) NSCache *predictedAwemeIDCache;
@property (retain, nonatomic) NSCache *delayPreRenderAwemeIDCache;

+ (id)sharedInstance;

- (double)delayOffsetPreRenderInModelId:(id)a0;
- (void)doSmartPreRenderStrategyWithModel:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
