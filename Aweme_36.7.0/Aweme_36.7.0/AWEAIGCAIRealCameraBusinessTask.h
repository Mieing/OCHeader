@class AWEAIGCBusinessRequestModel, NSMutableDictionary, NSString, NSMutableArray;
@protocol AWEAIGCBusinessInjectHandler;

@interface AWEAIGCAIRealCameraBusinessTask : NSObject <AWEAIGCBusinessTaskProtocol, AWEAIGCBusinessProcessProtocol>

@property (retain, nonatomic) AWEAIGCBusinessRequestModel *requestModel;
@property (retain, nonatomic) id<AWEAIGCBusinessInjectHandler> handler;
@property (copy, nonatomic) id /* block */ completedBlock;
@property (copy, nonatomic) id /* block */ resourceBlock;
@property (retain, nonatomic) NSMutableArray *aigcStartUploadProtocols;
@property (retain, nonatomic) NSMutableDictionary *stageTrackMap;
@property (retain, nonatomic) NSMutableDictionary *trackInfo;
@property (nonatomic) double startTimeInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)observerReceiveRequestResourceModelWith:(id /* block */)a0;
- (void)observerAIProcessBusinessTaskCompletion:(id /* block */)a0;
- (void)uploadImageList:(id)a0;
- (void)submitTaskWithImageUploadResult:(id)a0;
- (void)handleAigcStartUploadImages:(id)a0 extra:(id)a1 authParameters:(id)a2 result:(id /* block */)a3;
- (void)aigcStartUploadImages:(id)a0 extra:(id)a1 authParameters:(id)a2 result:(id /* block */)a3;
- (id)initWithRequestModel:(id)a0 injectClassHandler:(Class)a1;
- (void)runTaskWithAuthor:(id)a0 error:(id)a1;
- (BOOL)hasIgnoreAuthor;
- (id)getTaskId;
- (void).cxx_destruct;

@end
