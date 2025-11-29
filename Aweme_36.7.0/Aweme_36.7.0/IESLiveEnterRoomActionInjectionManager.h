@class IESLiveEnterRoomAisle, IESLiveEnterRoomActionInjection;

@interface IESLiveEnterRoomActionInjectionManager : NSObject

@property (retain, nonatomic) IESLiveEnterRoomAisle *roomAisle;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (retain, nonatomic) IESLiveEnterRoomActionInjection *roomAisleInjection;

+ (void)regeisterBlock:(id /* block */)a0 forStage:(unsigned long long)a1;
+ (void)addEnterRoomActionToPublicSlices:(id)a0 forStage:(unsigned long long)a1;
+ (id)publicActionDic;
+ (void)loadRegistryActionInClass:(Class)a0;
+ (id)sharedManager;

- (void)regeisterBlock:(id /* block */)a0 forStage:(unsigned long long)a1;
- (void)bindRoomAisle:(id)a0;
- (void)unbindRoomAisle:(BOOL)a0;
- (void)executedSliceBlocksforEnterRoomStage:(unsigned long long)a0;
- (void)loadActionRegistry;
- (id)actionsForEnterStage:(unsigned long long)a0;
- (void).cxx_destruct;

@end
