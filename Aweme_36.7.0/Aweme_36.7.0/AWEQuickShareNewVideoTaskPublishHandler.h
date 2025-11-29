@class AWEQuickShareTaskPrepareResult, NSString, ACCEditorSilentPublisher, AWEQuickShareTaskTimeCost, AWEVideoPublishViewModel, AWECloudCompileTask;
@protocol AWEShareToStoryModelProtocol;

@interface AWEQuickShareNewVideoTaskPublishHandler : NSObject <AWECloudCompileTaskDelegate, AWEQuickShareNewTaskPublishService>

@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) id<AWEShareToStoryModelProtocol> storyModel;
@property (retain, nonatomic) ACCEditorSilentPublisher *silentPublisher;
@property (retain, nonatomic) AWECloudCompileTask *cloudCompileTask;
@property (retain, nonatomic) AWEQuickShareTaskPrepareResult *prepareResult;
@property (retain, nonatomic) AWEQuickShareTaskTimeCost *timeCost;
@property (nonatomic) BOOL isPreUpload;
@property (nonatomic) BOOL isPreparedEditPage;
@property (nonatomic) BOOL isPreUploadTask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onCompileError:(int)a0 ext:(int)a1 f:(float)a2 msg:(id)a3 task:(id)a4;
- (void)onCompileDone:(id)a0 task:(id)a1;
- (void)onVeError:(int)a0 ext:(int)a1 f:(float)a2 msg:(id)a3 task:(id)a4;
- (void)startPublishWithPublishModel:(id)a0 storyModel:(id)a1 prepareResult:(id)a2 isPreUpload:(BOOL)a3;
- (void)doPublish;
- (BOOL)shouldPrePublish:(id)a0 storyModel:(id)a1 prepareResult:(id)a2;
- (void)prepareEditPageDataIfNeeded;
- (void)doPrePublish;
- (void)trackQuickTaskBeforeStartTimeCost;
- (void).cxx_destruct;
- (id)init;
- (void)addObservers;

@end
