@class UIView;
@protocol IESLiveHybridContainerFactoryAdapter, IESHYContainerProtocol;

@interface IESLiveRevenueInteractBattleDesignatedGiftViewController : IESLiveRevenueInteractPopupViewController

@property (retain, nonatomic) id<IESLiveHybridContainerFactoryAdapter> webviewFactory;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *hybridView;
@property (nonatomic) BOOL isDoubleInteract;

- (id)initWithDIContext:(id)a0 isDoubleInteract:(BOOL)a1;
- (void)setupHybirdView;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)dismissVC;

@end
