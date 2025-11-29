@class AWEBinding, NSString, AWEShowMonetizeAnnieXCardConfig, NSHashTable, UIView, NSMutableDictionary, AWEShowMonetizeAnnieXCardTrackPlugin;
@protocol AnnieLiveBizCardProviderProtocol, IESHYContainerProtocol, AnnieXContainerBaseProtocol, AnnieXCardModelProtocol, BDXViewContainerServiceProtocol;

@interface AWEShowMonetizeAnnieXCardView : UIView <IESHYHybridViewLifecycleProtocol, BDXContainerLifecycleProtocol, AWEShowMonetizeAnnieXCardService>

@property (retain, nonatomic) AWEShowMonetizeAnnieXCardConfig *config;
@property (nonatomic, getter=isLoaded) BOOL loaded;
@property (nonatomic, getter=isLoadReady) BOOL loadReady;
@property (nonatomic, getter=isBizLoaded) BOOL bizLoaded;
@property (copy, nonatomic) NSString *clientSessionID;
@property (retain, nonatomic) id<AnnieLiveBizCardProviderProtocol> annieXCardLiveProvider;
@property (retain, nonatomic) id<BDXViewContainerServiceProtocol> annieXCardProvider;
@property (retain, nonatomic) id<AnnieXCardModelProtocol> cardModel;
@property (weak, nonatomic) UIView<IESHYContainerProtocol> *hybridContainer;
@property (weak, nonatomic) UIView<AnnieXContainerBaseProtocol> *annieXContainer;
@property (retain, nonatomic) NSHashTable *lifeCycleHandlers;
@property (retain, nonatomic) NSMutableDictionary *subscribersByName;
@property (retain, nonatomic) AWEShowMonetizeAnnieXCardTrackPlugin *trackPlugin;
@property (retain, nonatomic) AWEBinding *loadBinding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateConfig:(id)a0;
- (void)sendEvent:(id)a0 params:(id)a1;
- (BOOL)enableUseStandardAnnieXContainer;
- (void)sendEventToPlugins:(SEL)a0 event:(id /* block */)a1;
- (id)createClientSessionIDWithConfig:(id)a0;
- (void)addLifeCycleHandler:(id)a0;
- (void)updateCardModel;
- (void)registerMethods;
- (void)collectOpenTime;
- (void)updateInitialData:(id)a0;
- (void)loadBiz;
- (void)removeLifeCycleHandler:(id)a0;
- (void)load;
- (void).cxx_destruct;
- (id)containerID;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addObserver;
- (id)initWithConfig:(id)a0;
- (void)dealloc;

@end
