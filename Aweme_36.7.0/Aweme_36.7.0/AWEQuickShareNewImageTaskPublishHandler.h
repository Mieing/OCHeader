@class AWEQuickShareTaskPrepareResult, NSString, ACCEditorSilentPublisher, AWEVideoPublishViewModel;
@protocol AWEShareToStoryModelProtocol;

@interface AWEQuickShareNewImageTaskPublishHandler : NSObject <AWEQuickShareNewTaskPublishService>

@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) id<AWEShareToStoryModelProtocol> storyModel;
@property (retain, nonatomic) ACCEditorSilentPublisher *silentPublisher;
@property (retain, nonatomic) AWEQuickShareTaskPrepareResult *prepareResult;
@property (nonatomic) BOOL isPreUpload;
@property (readonly, nonatomic) BOOL isPreUploadTask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
