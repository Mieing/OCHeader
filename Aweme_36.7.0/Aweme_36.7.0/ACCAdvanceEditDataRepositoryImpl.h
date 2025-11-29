@class ACCCameraSubscription, ACCAEDataRepositoryInputData, NSString, DVESelectedSegment;
@protocol AEKMegaEditor, ACCAdvanceEditViewModelProtocol, IESServiceProvider, DVEEditingRuntimeProtocol, ACCAEDraftService, AEKMegaData;

@interface ACCAdvanceEditDataRepositoryImpl : NSObject <ACCAdvanceEditDataRepository>

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) id<AEKMegaEditor> megaEditor;
@property (weak, nonatomic) id<ACCAdvanceEditViewModelProtocol> aeViewModel;
@property (weak, nonatomic) id<DVEEditingRuntimeProtocol> runtimeData;
@property (weak, nonatomic) id<ACCAEDraftService> draftService;
@property (retain, nonatomic) id<AEKMegaData> oldMegaEditor;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (retain, nonatomic) DVESelectedSegment *oldSelectedSegment;
@property (readonly, nonatomic) ACCAEDataRepositoryInputData *inputData;
@property (nonatomic) BOOL hasEnterAdvancePage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)diff:(id)a0 from:(id)a1 source:(unsigned long long)a2;
- (void)updateContextRuntimeDiffInfo:(id)a0;
- (unsigned long long)megaDiffChangeSourceWith:(unsigned long long)a0;
- (void)setupInputData;
- (void)setupInitData;
- (void).cxx_destruct;
- (id)initWithServiceProvider:(id)a0;
- (void)addSubscriber:(id)a0;
- (void)removeSubscriber:(id)a0;

@end
