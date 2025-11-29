@class IESECServiceProxy;
@protocol IESECTabKitPreProcessService;

@interface IESECTabKitAnnieXWebTabElement : IESECTabKitPuzzleTabElement

@property (retain, nonatomic) IESECServiceProxy<IESECTabKitPreProcessService> *preprocessService;

- (id)createHybridContainer;
- (id)updateRouterParamsForPuzzleContext:(id)a0 config:(id)a1;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
