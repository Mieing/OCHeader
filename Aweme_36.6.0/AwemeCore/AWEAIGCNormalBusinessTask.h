@class AWEAIGCBusinessRequestModel, NSMutableDictionary, AWEAIGCBusinessScheduleProgress, NSString;
@protocol ACCAIGCResourceUploadProtocol, AWEAIGCBusinessInjectHandler;

@interface AWEAIGCNormalBusinessTask : NSObject <AWEAIGCBusinessTaskProtocol, AWEAIGCBusinessProcessProtocol>

@property (retain, nonatomic) AWEAIGCBusinessRequestModel *requestModel;
@property (retain, nonatomic) NSMutableDictionary *stageTrackMap;
@property (retain, nonatomic) NSMutableDictionary *trackInfo;
@property (nonatomic) double startTimeInterval;
@property (retain, nonatomic) id<ACCAIGCResourceUploadProtocol> imageUploadProtocol;
@property (copy, nonatomic) id /* block */ completedBlock;
@property (retain, nonatomic) AWEAIGCBusinessScheduleProgress *progress;
@property (retain, nonatomic) id<AWEAIGCBusinessInjectHandler> handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)convertType;
- (void)observerBusinessProgress:(id /* block */)a0;
- (void)uploadImageList:(id)a0;
- (void)submitTaskWithImageUploadResult:(id)a0;
- (void)observerBusinessTaskCompletion:(id /* block */)a0;
- (id)initWithRequestModel:(id)a0 injectClassHandler:(Class)a1;
- (void)runTaskWithAuthor:(id)a0 error:(id)a1;
- (BOOL)hasIgnoreAuthor;
- (void).cxx_destruct;

@end
