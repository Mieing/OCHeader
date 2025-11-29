@protocol AWEQuickShareNewTaskPublishService, AWEQuickShareNewTaskPrepareService, AWEQuickShareNewTaskCreatePublishModelService;

@interface AWEQuickShareNewVideoTask : AWEQuickShareTask

@property (nonatomic) BOOL isPublishClick;
@property (retain, nonatomic) id<AWEQuickShareNewTaskPrepareService> prepareService;
@property (retain, nonatomic) id<AWEQuickShareNewTaskCreatePublishModelService> createPublishModelService;
@property (retain, nonatomic) id<AWEQuickShareNewTaskPublishService> publishService;

- (id)publishModel;
- (BOOL)preCheckWithStoryModel:(id)a0 error:(id *)a1 showToast:(BOOL)a2;
- (BOOL)prepareAndCreatePublishModelError:(id)a0 storyModel:(id)a1;
- (void)prepareAndStart;
- (void).cxx_destruct;
- (void)prepare;
- (void)start;
- (void)dealloc;
- (void)cancel;
- (void)addObservers;

@end
