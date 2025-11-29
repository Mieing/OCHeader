@class NSString, NSMutableArray;

@interface IESLiveRevenueInteractPlayComponentManager : NSObject <IESLiveRevenueInteractPlayComponent>

@property (retain, nonatomic) NSMutableArray *components;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDIContext:(id)a0;
- (void)createComponents;
- (void)componentDidLoad;
- (void)componentContainerFrameChanged;
- (void)componentPlaying;
- (void)componentPunishing;
- (void)componentFinished;
- (void)loadTargetComponents:(id)a0;
- (void)componentDidClear:(BOOL)a0;
- (void)componentReceivedLynxEvent:(long long)a0 extraParams:(id)a1;
- (BOOL)checkIfFrameCanCreateComponent;
- (id)shareStreamComponentGroup;
- (void)componentDidUpdateBattleView;
- (void)componentLayoutModelChanged;
- (id)shareStreamComponentGroupPK;
- (void)logWithEvent:(id)a0 extra:(id)a1;
- (id)creatPKComponentsByNames:(id)a0;
- (id)creatMultiComponentsByNames:(id)a0;
- (BOOL)enableLynxControlNativeComponents;
- (id)createPlayComponentsByNames:(id)a0;
- (void).cxx_destruct;

@end
