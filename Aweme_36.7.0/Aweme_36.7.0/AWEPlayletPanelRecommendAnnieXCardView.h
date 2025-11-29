@class NSString, UIView;
@protocol AnnieXContainerBaseProtocol, AnnieXCardModelProtocol;

@interface AWEPlayletPanelRecommendAnnieXCardView : UIView <BDXContainerLifecycleProtocol>

@property (retain, nonatomic) UIView<AnnieXContainerBaseProtocol> *containerView;
@property (retain, nonatomic) id<AnnieXCardModelProtocol> cardModel;
@property (nonatomic) double initTimeInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSchemaModel:(id)a0 delegate:(id)a1;
- (void).cxx_destruct;
- (void)setupUI;

@end
