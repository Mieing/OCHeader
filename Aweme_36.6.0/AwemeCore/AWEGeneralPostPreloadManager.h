@class NSMutableDictionary;

@interface AWEGeneralPostPreloadManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *taskDict;

+ (id)sharedInstance;

- (void)preloadWithSchema:(id)a0;
- (id)preloadTaskWithSchema:(id)a0;
- (id)taskKeyWithSchema:(id)a0;
- (id)createTaskWithSchema:(id)a0;
- (BOOL)checkPreloadSuccessWithSchema:(id)a0;
- (void)clearPreloadResourceIfNeed;
- (void).cxx_destruct;
- (id)init;

@end
