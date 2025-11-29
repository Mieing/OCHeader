@class NSMutableDictionary, AWEVideoPublishViewModel;

@interface AWEAIEnhanceImageCacheManager : NSObject

@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (retain, nonatomic) NSMutableDictionary *cacheMap;

+ (id)rootPath;
+ (void)clean;

- (id)currentProject;
- (id)initWithRepository:(id)a0;
- (id)currentCacheImagePath;
- (id)updateCacheImageWithResultPath:(id)a0;
- (id)cacheFileName;
- (void).cxx_destruct;

@end
