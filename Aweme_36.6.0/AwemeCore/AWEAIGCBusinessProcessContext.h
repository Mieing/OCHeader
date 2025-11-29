@class NSString, NSMutableArray, AWEResourceUploadParametersResponseModel;

@interface AWEAIGCBusinessProcessContext : NSObject <AWEAIGCBusinessProcessContextProtocol>

@property (retain, nonatomic) NSMutableArray *taskList;
@property (retain, nonatomic) AWEResourceUploadParametersResponseModel *authorResponseModel;
@property (retain, nonatomic) NSMutableArray *suspendTaskList;
@property (nonatomic) BOOL authorRequestRunning;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)authModel;
+ (void)removeBusinessTaskWith:(id)a0;
+ (id)createBusinessTaskWithRequestModel:(id)a0 injectClassHandler:(Class)a1;
+ (id)createBusinessTaskForDraftRecoverWithRequestModel:(id)a0 injectClassHandler:(Class)a1 holdByContext:(BOOL)a2;
+ (void)refreshAuthorInfo;
+ (void)refreshAuthorInfoWithCompletion:(id /* block */)a0;
+ (void)startUploadImages:(id)a0 extra:(id)a1 useBatch:(BOOL)a2 uploaderHolder:(id /* block */)a3 result:(id /* block */)a4;
+ (void)requestUploadParametersWithCompletion:(id /* block */)a0;
+ (void)preloadPrepareEvent;
+ (Class)aigcTemplateHandlerClass;
+ (void)startUploadImages:(id)a0 extra:(id)a1 uploaderHolder:(id /* block */)a2 result:(id /* block */)a3;
+ (void)startUploadVideo:(id)a0 extra:(id)a1 uploaderHolder:(id /* block */)a2 result:(id /* block */)a3;
+ (id)defaultManager;

@end
