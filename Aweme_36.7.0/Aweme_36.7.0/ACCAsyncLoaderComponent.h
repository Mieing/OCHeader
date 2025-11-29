@class NSString, NSMutableArray;
@protocol ACCSequenceEditServiceProtocol;

@interface ACCAsyncLoaderComponent : ACCFeatureComponent <ACCAssetImportDataConsumerProtocol, ACCSequenceEditServicePlayerSubscriber>

@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (retain, nonatomic) NSMutableArray *waitingToConsumeTaskOutputInfos;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sequenceEditService:(id)a0 changedWithAddedIndexSet:(id)a1 deletedIndexSet:(id)a2;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)bindServices:(id)a0;
- (void)taskCompletion:(id)a0;
- (void)imageTaskCompletion:(id)a0;
- (void)videoTaskCompletion:(id)a0;
- (void)consumeOutputInfo:(id)a0 withProject:(id)a1;
- (void).cxx_destruct;

@end
