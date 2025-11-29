@class ACCCameraSubscription, NSString;

@interface ACCStudioAIMemoriesViewModel : ACCEditViewModel <ACCStudioAIMemoriesService>

@property (nonatomic) BOOL closeEditPageSignal;
@property (nonatomic) BOOL isLoading;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)closeEditPage:(BOOL)a0;
- (void)sendHasReceivedAIMemoriesTaskID:(id)a0;
- (void)updateLoadingStatus:(BOOL)a0;
- (void).cxx_destruct;
- (void)addSubscriber:(id)a0;
- (void)removeSubscriber:(id)a0;

@end
