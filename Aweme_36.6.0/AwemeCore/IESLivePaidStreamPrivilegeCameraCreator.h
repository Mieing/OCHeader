@class NSString;
@protocol IESLivePaidStreamProvider;

@interface IESLivePaidStreamPrivilegeCameraCreator : IESLivePaidStreamCreator <IESLivePaidStreamPlugin>

@property (retain, nonatomic) id<IESLivePaidStreamProvider> paidStream;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)creatorShouldActive:(id)a0;

- (void)paidStream:(id)a0 didChangeAuthRetType:(unsigned long long)a1 reason:(unsigned long long)a2;
- (void)handlePaidLiveDataMessage:(id)a0;
- (long long)paidScene;
- (id)customPlugins;
- (void)paidStreamCreate:(unsigned long long)a0 paidObject:(id)a1;
- (id)currentPaidStream;
- (void)paidStreamUnmount;
- (BOOL)shouldCreateWhenEnterRoomFromSubCamera;
- (void)handleVSPrivilegeWithMessage:(id)a0;
- (void)updatePrivilegePaidStatus:(BOOL)a0;
- (void)handlePrivilegeCameraViewRightChangeIfNeededWithCameraInfo:(id)a0 message:(id)a1;
- (void)updateCameraPrivilegeInfoForCameraInfoArray:(id)a0 businessData:(id)a1;
- (void).cxx_destruct;

@end
