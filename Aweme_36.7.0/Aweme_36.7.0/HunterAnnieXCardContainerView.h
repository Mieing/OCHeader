@class NSString, UIView;
@protocol AnnieXContainerBaseProtocol, AnnieXCardModelProtocol;

@interface HunterAnnieXCardContainerView : HunterContainerView <BDXContainerLifecycleProtocol>

@property (retain, nonatomic) UIView<AnnieXContainerBaseProtocol> *cardView;
@property (retain, nonatomic) id<AnnieXCardModelProtocol> cardModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dynamicPatchModel;
- (id)createChildView;
- (void)loadWithModel:(id)a0;
- (void)updateDataWithModel:(id)a0;
- (void)updateDataWithModel:(id)a0 processorName:(id)a1;
- (void)p_loadDataWithLoadType:(long long)a0 model:(id)a1;
- (void)p_fullLoadWithModel:(id)a0;
- (void)createCardModelWithData:(id)a0;
- (void)tryUpdateGlobalProps;
- (void)loadSchemaWithParams:(id)a0;
- (void).cxx_destruct;
- (void)setupUI;

@end
