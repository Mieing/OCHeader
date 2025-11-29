@class NSArray, AWEStudioComposerPrepareStageContext, ACCAssetImportManager;

@interface AWEPCTPrepareResourceTaskAttachObj : NSObject

@property (copy, nonatomic) id /* block */ completeHandler;
@property (weak, nonatomic) AWEStudioComposerPrepareStageContext *context;
@property (weak, nonatomic) ACCAssetImportManager *importManager;
@property (copy, nonatomic) NSArray *allInfos;
@property unsigned long long restCount;
@property (copy, nonatomic) NSArray *downloadingTasks;
@property BOOL didCancel;

+ (id)cacheFilePathFromResource:(id)a0;
+ (id)generateCacheFilePathWithResource:(id)a0;

- (void)checkComplete;
- (void)preprocessInfos;
- (void)processResources;
- (void)exceptionCallback:(id)a0;
- (void)startWithCompleteHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)cancel;

@end
