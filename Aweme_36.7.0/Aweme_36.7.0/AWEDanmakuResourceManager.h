@interface AWEDanmakuResourceManager : NSObject

@property (nonatomic) BOOL isRequestConfig;

+ (id)sharedInstance;

- (id)findLottieJSONPath:(id)a0;
- (void)downloadResourceIfNeeded;
- (id)pendantLocalPathWithModel:(id)a0;
- (void)deleteWithModels:(id)a0;
- (void)downloadWithModels:(id)a0;
- (void)downloadResourceIfNeededWithModel:(id)a0;
- (void)deleteResourceIfNeededWithCompletion:(id /* block */)a0;
- (void)cleanResourceIfNeeded;
- (id)eggLocalPathWithModel:(id)a0;

@end
