@class CAGradientLayer, ACCChangeBackGroundViewModel, NSString, NSMutableArray;
@protocol ACCEditServiceProtocol, ACCSequenceEditServiceProtocol, ACCEditViewContainer, ACCCTRServiceProtocol, ACCChangeBackGroundService;

@interface ACCChangeBackGroundComponent : ACCFeatureComponent <ACCDraftMessage, ACCSequenceEditServicePlayerSubscriber>

@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCChangeBackGroundService> changeBackGroundService;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) ACCChangeBackGroundViewModel *viewModel;
@property (nonatomic) BOOL isAddBarItem;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceService;
@property (nonatomic) BOOL ifDefaultUpperColor;
@property (retain, nonatomic) NSMutableArray *configArray;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCCTRServiceProtocol> ctrService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sequenceEditService:(id)a0 changedWithAddedIndexSet:(id)a1 deletedIndexSet:(id)a2;
- (void)loadComponentView;
- (void)componentDidMount;
- (void)componentDidUnmount;
- (unsigned long long)preferredLoadPhase;
- (id)serviceBinding;
- (void)p_bindViewModel;
- (void)bindServices:(id)a0;
- (void)addChangeColorBarItem;
- (void)clickedBackgroundBarItem;
- (void).cxx_destruct;

@end
