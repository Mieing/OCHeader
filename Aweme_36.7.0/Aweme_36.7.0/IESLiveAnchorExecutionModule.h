@class IESLiveAnchorContext;

@interface IESLiveAnchorExecutionModule : IESLiveExecutionModule <IESLiveAnchorRoomLifeCycleProtocol>

@property (readonly, weak, nonatomic) IESLiveAnchorContext *context;

+ (id)moduleWithContext:(id)a0;

- (void)bindService;
- (id)executeForStage:(id)a0 withContext:(id)a1 params:(id)a2;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)setup;

@end
