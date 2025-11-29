@class NSMutableDictionary;

@interface AWEGeneralPostPreloadManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *taskDict;

+ (id)sharedInstance;

- (void)preloadWithSchema:(id)a0;
- (id)generateCacheFilePathWithKey:(id)a0 fileType:(long long)a1;
- (void)updateComposerCacheInfo:(id)a0 themeId:(id)a1;
- (id)preloadTaskWithSchema:(id)a0;
- (id)taskKeyWithSchema:(id)a0;
- (id)createTaskWithSchema:(id)a0;
- (BOOL)checkPreloadSuccessWithSchema:(id)a0;
- (id)getPreloadSuccessWithSchema:(id)a0;
- (void)clearPreloadResourceIfNeed;
- (void)deletedResourceWithThemeId:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
