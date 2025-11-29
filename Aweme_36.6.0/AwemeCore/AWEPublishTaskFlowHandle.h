@class AWEPublishBaseTask;

@interface AWEPublishTaskFlowHandle : NSObject

@property (retain, nonatomic) AWEPublishBaseTask *task;
@property (nonatomic) BOOL willDismiss;

- (void)removePreUploadingTask;
- (void)cancelPreUploadingTask;
- (void)removePreUploadingTask:(BOOL)a0;
- (void)removePreUploadingTaskForPreview;
- (void)resetTaskProgressIfNeeded;
- (void)publishPageStayBegin;
- (void)startPreFlowWithPreUpload:(BOOL)a0 preMerge:(BOOL)a1 extraInfo:(id)a2 willExecuteBlock:(id /* block */)a3;
- (void)saveDraftWithDraftType:(long long)a0 feedback:(BOOL)a1 showSuccessToast:(BOOL)a2 completion:(id /* block */)a3;
- (void)enqueueTaskWithWillInfo:(id)a0;
- (void)configWithUploadParasms:(id)a0 logDict:(id)a1;
- (BOOL)isTaskSupportPrePublish;
- (id)prePublishTrackCommonParams;
- (id)initWithTask:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)flowType;
- (void)timerStart;

@end
