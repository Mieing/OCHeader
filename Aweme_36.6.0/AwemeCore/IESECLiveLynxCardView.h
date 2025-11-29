@class IESECLiveCardDataModel, NSString, UIView;
@protocol IESHYContainerProtocol, AnnieLiveBizCardProviderProtocol;

@interface IESECLiveLynxCardView : IESECLiveBaseCardView <IESHYHybridViewLifecycleProtocol>

@property (retain, nonatomic) UIView<IESHYContainerProtocol> *lynxCardView;
@property (nonatomic) struct CGSize { double width; double height; } lynxViewSize;
@property (retain, nonatomic) IESECLiveCardDataModel *cardViewModel;
@property (retain, nonatomic) id<AnnieLiveBizCardProviderProtocol> annieXCardProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cardViewWithParams:(id)a0 liveCardViewDelegate:(id)a1;

- (id)cardModel;
- (void)viewDidChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a0 withContainerID:(id)a1;
- (void)addLynxEventSubscriber;
- (void)showOnEnter:(BOOL)a0 followUp:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)enableUpdate;
- (void)setupDependency;
- (id)p_cardEnvironment;
- (void)p_initCardModelWithParams:(id)a0;
- (id)p_getInitialDataWithParams:(id)a0;
- (id)lynxViewWithURLString:(id)a0 initialData:(id)a1 preferredFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)p_getCurrentLiveRoomContext;
- (void)updateWithCardModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })cardSize;
- (id)cardID;

@end
