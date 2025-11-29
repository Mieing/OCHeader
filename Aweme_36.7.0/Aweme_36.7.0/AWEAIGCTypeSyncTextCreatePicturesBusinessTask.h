@class AWEAIGCBusinessRequestModel, NSMutableDictionary, AWEAIGCBusinessScheduleProgress, NSString;
@protocol AWEAIGCBusinessInjectHandler;

@interface AWEAIGCTypeSyncTextCreatePicturesBusinessTask : NSObject <AWEAIGCBusinessTaskProtocol, AWEAIGCBusinessProcessProtocol>

@property (retain, nonatomic) AWEAIGCBusinessRequestModel *requestModel;
@property (retain, nonatomic) NSMutableDictionary *stageTrackMap;
@property (retain, nonatomic) NSMutableDictionary *trackInfo;
@property (nonatomic) double startTimeInterval;
@property (copy, nonatomic) id /* block */ completedBlock;
@property (copy, nonatomic) id /* block */ resourceBlock;
@property (retain, nonatomic) AWEAIGCBusinessScheduleProgress *progress;
@property (retain, nonatomic) id<AWEAIGCBusinessInjectHandler> handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)convertType;
- (void)observerReceiveRequestResourceModelWith:(id /* block */)a0;
- (void)observerBusinessProgress:(id /* block */)a0;
- (void)observerSyncTextCreatePicturesBusinessTaskCompletion:(id /* block */)a0;
- (id)initWithRequestModel:(id)a0 injectClassHandler:(Class)a1;
- (void)runTaskWithAuthor:(id)a0 error:(id)a1;
- (BOOL)hasIgnoreAuthor;
- (void)trackMonitorGenerateAllTimeConsuming:(double)a0 statusCode:(long long)a1 errorCode:(long long)a2;
- (void)trackMonitorGenerateInterfacePropId:(double)a0 statusCode:(long long)a1 errorCode:(long long)a2 errorMessage:(id)a3;
- (id)getAIGCType:(id)a0;
- (void).cxx_destruct;

@end
