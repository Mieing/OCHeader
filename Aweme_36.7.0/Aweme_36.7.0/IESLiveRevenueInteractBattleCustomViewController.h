@class UIView;
@protocol IESLiveHybridContainerFactoryAdapter, IESHYContainerProtocol;

@interface IESLiveRevenueInteractBattleCustomViewController : IESLiveRevenueInteractPopupViewController

@property (retain, nonatomic) id<IESLiveHybridContainerFactoryAdapter> webviewFactory;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *hybridView;

- (void)dismissVc;
- (void)setupHybirdView;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
