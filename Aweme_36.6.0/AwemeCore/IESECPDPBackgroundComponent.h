@class NSString, IESECGoodsDetailBackgroundContainer;
@protocol IESECLiveHotsaleItem, IESECPDPContainerService;

@interface IESECPDPBackgroundComponent : IESECPDPBaseComponent <IESECGoodsDetailBackgroundContainerDelegate, IESECGoodsDetailViewUpdateMessage>

@property (retain, nonatomic) IESECGoodsDetailBackgroundContainer *backgroundView;
@property (weak, nonatomic) id<IESECPDPContainerService> container;
@property (copy, nonatomic) NSString *recommendSearchWord;
@property (nonatomic) BOOL didContainerRender;
@property (nonatomic) BOOL didRecommendWordBack;
@property (copy, nonatomic) NSString *liveAtmosphereObserveID;
@property (retain, nonatomic) id<IESECLiveHotsaleItem> latestHotSaleItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)panelHeight;
- (void)containerWillLoad;
- (void)loadComponent;
- (void)tapToClose;
- (void)showPresentAnimation;
- (id)sliceManager;
- (id)liveAtmosphereModel;
- (void)searchHotWordsDidUpdateWithGoodsDetailUID:(id)a0;
- (void)containerDidRender;
- (void)containerWillDismiss;
- (void)beforeShowPresentAnimation;
- (void)panWithOffsetY:(double)a0 directionUp:(BOOL)a1;
- (void)cancelHalfModePan;
- (void)containerDidSwitchToFull;
- (void)packApiBack;
- (void)registerPDPPageMessage;
- (void)transformLiveAtmosphereFromURLScheme;
- (void)observeLiveAtmosphereUpdate;
- (void)initializeBackgroundView;
- (void)tryUpdateRecommendWord;
- (void)unobserveLiveAtmosphereUpdate;
- (BOOL)updateHotSaleItem:(id)a0;
- (void)updateLiveAtmosphereView;
- (void).cxx_destruct;
- (void)dealloc;
- (id)maskColor;
- (double)containerWidth;

@end
