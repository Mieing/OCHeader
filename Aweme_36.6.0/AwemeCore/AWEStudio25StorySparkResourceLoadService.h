@class DUXLoadingToast, NSString, AWEStudio25StorySparkResourceModel;

@interface AWEStudio25StorySparkResourceLoadService : NSObject

@property (retain, nonatomic) AWEStudio25StorySparkResourceModel *resourceModel;
@property (copy, nonatomic) id /* block */ resourceCompletion;
@property (nonatomic) struct _TaskCollection { struct _TaskResult { BOOL finished; BOOL success; } templateList; struct _TaskResult { BOOL finished; BOOL success; } applyTemplateResource; } taskCollection;
@property (retain, nonatomic) DUXLoadingToast *resourceLoadView;
@property (copy, nonatomic) NSString *spark;
@property (nonatomic) BOOL isUsedForPreload;

- (void)dismissLoadingView;
- (void)cancelLoadingView;
- (void)downloadTemplateTask;
- (void)loadTemplateList;
- (BOOL)allTaskFinished;
- (void)checkAllTaskResult;
- (void)sparkResourceLoadWith:(id)a0 completion:(id /* block */)a1;
- (void)loadFirstTemplateResource:(id)a0;
- (void).cxx_destruct;
- (void)start;
- (void)showLoadingView;

@end
