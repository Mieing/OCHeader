@class NSArray;

@interface AWEDPUndertakeReporter : NSObject

@property (copy, nonatomic) NSArray *advertisedSchemaScenes;

+ (id)sharedInstance;

- (void)reportSchemaIfNeeded:(id)a0;
- (void)p_reportEcomcfWithQueryParams:(id)a0 schema:(id)a1;
- (void)p_reportSummerConcertAdvertisedSchema:(id)a0 path:(id)a1 queryParams:(id)a2;
- (void)p_reportRegularAdvertisedSchema:(id)a0 path:(id)a1 queryParams:(id)a2;
- (void)p_reportToAdvertisedUndertake:(id)a0;
- (BOOL)checkMatchedOfKeys:(id)a0 values:(id)a1 queryParams:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
