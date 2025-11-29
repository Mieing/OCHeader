@class NSArray, AWEStudio25StoryMusicResourceModel, CKGenericTemplateModel, AWEStudio25StoryResourceLoadView, AWEAlbumAutoFilmTaskManager, NSTimer;

@interface AWEStudio25StoryResourceLoadService : NSObject

@property (retain, nonatomic) AWEStudio25StoryMusicResourceModel *resourceModel;
@property (copy, nonatomic) id /* block */ resourceCompletion;
@property (nonatomic) struct _TaskCollection { struct _TaskResult { BOOL finished; BOOL success; float progress; } musicLyric; struct _TaskResult { BOOL finished; BOOL success; float progress; } musicCover; struct _TaskResult { BOOL finished; BOOL success; float progress; } templateList; struct _TaskResult { BOOL finished; BOOL success; float progress; } applyTemplateResource; } taskCollection;
@property (nonatomic) unsigned long long loadTemplateStep;
@property (retain, nonatomic) AWEAlbumAutoFilmTaskManager *templateServer;
@property (retain, nonatomic) NSArray *templateList;
@property (retain, nonatomic) CKGenericTemplateModel *applyTemplate;
@property (retain, nonatomic) AWEStudio25StoryResourceLoadView *resourceLoadView;
@property (nonatomic) double startTimeInterval;
@property (retain, nonatomic) NSTimer *progressTimer;
@property (nonatomic) BOOL loadFinished;
@property (copy, nonatomic) id /* block */ transition;

- (void)dismissLoadingView;
- (void)cancelLoadingView;
- (void)storyResourceLoadWith:(id)a0 completion:(id /* block */)a1;
- (void)showLoadingIfNeed;
- (void)downloadMusicTask;
- (void)downloadTemplateTask;
- (void)downloadMusicCover;
- (void)loadRandomTemplateResource:(id)a0;
- (void)downloadMusicLyric;
- (void)loadTemplateList;
- (BOOL)allTaskFinished;
- (void)monitorTrack:(BOOL)a0;
- (void)checkAllTaskResult;
- (id)convertLyricWithAutoRecognize:(id)a0;
- (void)fetchTemplatesCategoriesFromNewLokiWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)start;
- (void)retry;
- (void)showLoadingView;

@end
