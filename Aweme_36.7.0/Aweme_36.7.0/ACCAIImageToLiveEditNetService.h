@interface ACCAIImageToLiveEditNetService : NSObject

- (void)createTask;
- (void)createRequestModel;
- (void)preloadEffectModel;
- (void)localCheckImage;
- (void)uploadSampleImage;
- (void)startQueryAndLongConnect;
- (void)syncToAsync;
- (void)stopQueryAndLongConnect;
- (void)cancelTask;

@end
