@protocol IESLivePaidStreamProvider;

@interface IESLivePaidStreamCameraCreator : IESLivePaidStreamCreator

@property (retain, nonatomic) id<IESLivePaidStreamProvider> paidStream;

+ (BOOL)creatorShouldActive:(id)a0;

- (void)paidStreamWillStart:(id)a0;
- (void)handlePaidLiveDataMessage:(id)a0;
- (long long)paidScene;
- (id)dataInjSceneID;
- (id)dataInjBusinessID;
- (void)updateCameraPaidInfo:(id)a0 paidData:(id)a1;
- (id)customPlugins;
- (void)paidStreamCreate:(unsigned long long)a0 paidObject:(id)a1;
- (id)currentPaidStream;
- (void)paidStreamUnmount;
- (BOOL)shouldCreateWhenEnterRoomFromSubCamera;
- (void).cxx_destruct;

@end
