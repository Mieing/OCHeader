@class AWEGenericTemplateAIGCMergedRequestInfo, NSString, NSArray, NPPreprocessAIGCCallback_OC, NSError;
@protocol AWEGenericTemplateAIGCTaskManagerBackgroundPluginDelegate;

@interface AWEGenericTemplateAIGCTaskManagerBackgroundPlugin : NSObject

@property (copy, nonatomic) NSString *templateID;
@property (copy, nonatomic) NSString *toast;
@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) NSString *requestId;
@property (copy, nonatomic) NSArray *result;
@property (retain, nonatomic) NPPreprocessAIGCCallback_OC *callback;
@property (retain, nonatomic) AWEGenericTemplateAIGCMergedRequestInfo *mergedRequestInfo;
@property (weak, nonatomic) id<AWEGenericTemplateAIGCTaskManagerBackgroundPluginDelegate> delegate;
@property (nonatomic) BOOL needDelay;

- (void)resumeTask;
- (void)appendBackgroundTaskWithTemplateID:(id)a0 mergedRequestInfo:(id)a1 toast:(id)a2 error:(id)a3;
- (void)appendBackgroundTaskWithRequestId:(id)a0 templateId:(id)a1 result:(id)a2 toast:(id)a3 error:(id)a4 callback:(id)a5;
- (void).cxx_destruct;
- (void)reset;

@end
