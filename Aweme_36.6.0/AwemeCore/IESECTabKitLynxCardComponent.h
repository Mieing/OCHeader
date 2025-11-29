@class IESECTabKitLynxCardConfig, NSString, IESECServiceProxy, IESECLynxCard, IESECLynxCardModel, IESECTabKitViewElement, IESECTabKitDIContext;
@protocol IESECTabKitLayoutService, IESECTabKitHybridService, IESECTabKitDataService, IESECTabKitLynxCardComponentDelegate;

@interface IESECTabKitLynxCardComponent : NSObject <IESECTabKitLynxCardComponent> {
    BOOL _isViewActivated;
    BOOL _tmpLoadSuccess;
    BOOL _willFallback;
    IESECTabKitLynxCardConfig *_config;
}

@property (retain, nonatomic) IESECLynxCard *lynxCard;
@property (retain, nonatomic) IESECLynxCardModel *cardModel;
@property (weak, nonatomic) IESECTabKitViewElement *tabKitView;
@property (retain, nonatomic) IESECServiceProxy<IESECTabKitDataService> *kDataService;
@property (retain, nonatomic) IESECServiceProxy<IESECTabKitHybridService> *kHybridService;
@property (retain, nonatomic) IESECServiceProxy<IESECTabKitLayoutService> *kLayoutService;
@property (weak, nonatomic) id<IESECTabKitLynxCardComponentDelegate> delegate;
@property (retain, nonatomic) IESECTabKitDIContext *tabKitCtx;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)componentType;

- (void)viewDidFirstScreen:(id)a0;
- (void)lynxCard:(id)a0 sizeDidChanged:(struct CGSize { double x0; double x1; })a1;
- (void)lynxCard:(id)a0 didLoadFail:(id)a1;
- (void)lynxCard:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)currentCardsWriteAlogMethodName:(id)a0 paramModel:(id)a1 result:(id)a2 context:(id)a3;
- (BOOL)pageDidAppeared;
- (void)sendEvent:(id)a0 params:(id)a1;
- (void)registerBridge:(id)a0;
- (void)componentDidLoad;
- (void)componentDidAppear:(BOOL)a0;
- (void)componentDidDisappear:(BOOL)a0;
- (id)createLynxCardModel:(id)a0;
- (void)registerCommonBridges;
- (void)didSetTabKitCtx:(id)a0;
- (void)componentVisibilityCustomChange:(BOOL)a0 animated:(BOOL)a1;
- (void)updateLynxCardWithModel:(id)a0;
- (void)updateLynxCardData;
- (void)fallbackToNAComponent:(id)a0;
- (void)fallbackToNAComponentIfNeeded:(id)a0;
- (id)buildInitialData:(id)a0;
- (id)buildRootGlobalPropsWithURL:(id)a0 initialData:(id)a1;
- (void)applicationWillResignActive:(id)a0;
- (void)applicationWillEnterForeground:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)componentView;

@end
