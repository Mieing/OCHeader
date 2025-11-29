@class NSString, IESECLiveInteractionVibeViewV2, IESECLiveGoodsListHeaderService;

@interface IESECLiveGoodsListTopVibeComponent : IESECLiveGoodsListBaseComponent <IESECHalfPageFloatContainerDelegate, IESECLiveListViewModelDelegateV2>

@property (retain, nonatomic) IESECLiveInteractionVibeViewV2 *interactionVibeViewV2;
@property (weak, nonatomic) IESECLiveGoodsListHeaderService *headerService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)container:(id)a0 showResult:(BOOL)a1;
- (void)setupBind;
- (void)updateTopVibeWithInfo:(id)a0;
- (void)p_hiddenVibeView:(BOOL)a0;
- (void)topVibeAppendVibeModels:(id)a0 withCheckMap:(id)a1 cleanOldData:(BOOL)a2;
- (void).cxx_destruct;
- (id)view;
- (void)viewDidDisappear;

@end
