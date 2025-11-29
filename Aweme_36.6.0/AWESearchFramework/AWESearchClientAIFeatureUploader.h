@interface AWESearchClientAIFeatureUploader : NSObject

@property (nonatomic) unsigned long long source;

+ (BOOL)uploadSearchSmartOfflineEnabled;
+ (id)getUploadParamsWithOriginParams:(id)a0;
+ (BOOL)uploadSearchSmartOfflineStoreEnable;
+ (id)fetchGeneralSearchRealtimeFeature;
+ (id)fetchGeneralSearchFeature;
+ (id)fetchGeneralSearchFeedFeature;
+ (id)searchSmartPostConfig;
+ (BOOL)enableUploadFeedFeature;
+ (long long)maxFeedFeatureCount;

- (void)uploadFeatureWithParams:(id)a0;
- (void)storageCurrentRealtimeFeature;
- (id)initWithSource:(unsigned long long)a0;
- (void)applicationDidEnterBackground;
- (void)applicationWillTerminate;
- (void)dealloc;

@end
