@class NSDictionary;

@interface AWESplashIntelligentManager : NSObject

@property (copy, nonatomic) NSDictionary *pitayaPredictConfig;
@property (nonatomic) double lastPitayaRequestTime;

+ (id)sharedInstance;

- (void)registerPitayaSplashPredictWithConfig:(id)a0;
- (void)registerPitayaSearchIntelligent;
- (void)handlePitayaPredictResultWith:(id)a0;
- (void)setupIntelligentManager;
- (void)resetIntelligentManager;
- (void).cxx_destruct;
- (void)dealloc;

@end
