@class NSArray, NSDictionary, NSString, AWEVideoPublishViewModel, IESEffectModel;
@protocol AWEAIGCBusinessTaskProtocol;

@interface ACCRecordTimeConsumingPropRequestPerformer : NSObject <ACCRecordTimeConsumingPropRequestPerformerProtocol>

@property (retain, nonatomic) id<AWEAIGCBusinessTaskProtocol> aiProcessTask;
@property (copy, nonatomic) NSDictionary *effectParams;
@property (copy, nonatomic) NSArray *resourcePath;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (retain, nonatomic) IESEffectModel *propModel;
@property (copy, nonatomic) id /* block */ requestCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeBusinessTask;
- (id)buildRequestModel;
- (void)setupBusinessTaskAndRun;
- (id)initWithEffectParams:(id)a0 resourcePath:(id)a1 repository:(id)a2 propModel:(id)a3;
- (void).cxx_destruct;

@end
