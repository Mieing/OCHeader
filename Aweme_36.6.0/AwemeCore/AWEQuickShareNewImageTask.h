@class NSString, AWEQuickShareTaskPrepareResult;
@protocol AWEQuickShareNewTaskPublishService, AWEQuickShareNewTaskPrepareService, AWEQuickShareNewTaskCreatePublishModelService;

@interface AWEQuickShareNewImageTask : AWEQuickShareTask

@property (retain, nonatomic) NSString *startColor;
@property (retain, nonatomic) NSString *endColor;
@property (retain, nonatomic) AWEQuickShareTaskPrepareResult *prepareResult;
@property (retain, nonatomic) id<AWEQuickShareNewTaskPrepareService> prepareService;
@property (retain, nonatomic) id<AWEQuickShareNewTaskCreatePublishModelService> createPublishModelService;
@property (retain, nonatomic) id<AWEQuickShareNewTaskPublishService> publishService;
@property (nonatomic) BOOL isPublishClick;

- (id)publishModel;
- (BOOL)preCheckWithStoryModel:(id)a0 error:(id *)a1 showToast:(BOOL)a2;
- (BOOL)prepareAndCreatePublishModelError:(id)a0 storyModel:(id)a1;
- (void)prepareAndStart;
- (void).cxx_destruct;
- (void)prepare;
- (void)start;
- (void)dealloc;
- (void)addObservers;

@end
