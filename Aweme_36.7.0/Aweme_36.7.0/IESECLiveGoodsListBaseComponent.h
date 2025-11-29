@class NSString, IESECObservationManager, UIView, IESECLiveGoodsListViewModelV2;
@protocol IESECComponentManagerInternalDI, IESECLiveGoodsListContainerProtocol, IESECBaseServiceDIProtocol;

@interface IESECLiveGoodsListBaseComponent : NSObject <IESECComponentProtocol>

@property (weak, nonatomic) id<IESECBaseServiceDIProtocol> serviceDI;
@property (weak, nonatomic) id<IESECComponentManagerInternalDI> componentDI;
@property (weak, nonatomic) IESECLiveGoodsListViewModelV2 *viewModel;
@property (weak, nonatomic) UIView<IESECLiveGoodsListContainerProtocol> *container;
@property (retain, nonatomic) IESECObservationManager *serviceObservationManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupBind;
- (id)liveContext;
- (void)setupServiceObservers;
- (void)setupSubComponents;
- (void)mountWithParams:(id)a0;
- (void)updateComponentWithData:(id)a0;
- (void)updateServiceDI:(id)a0;
- (void)updateComponentDI:(id)a0;
- (void).cxx_destruct;
- (void)viewWillAppear;
- (void)setup;
- (id)subComponents;
- (void)viewDidDisappear;

@end
