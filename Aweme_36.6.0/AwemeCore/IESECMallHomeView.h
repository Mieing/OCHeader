@class IESECListKitCardPreloader, NSString, IESECMallLynxRenderMonitor, NSDictionary, IESECLynxCardModel, UIViewController, IESECMallFeedViewController, IESECLynxCard;
@protocol IESECMallHomeViewDelegate;

@interface IESECMallHomeView : UIView <UIGestureRecognizerDelegate, IESECMallHomeViewProtocol, IESECLynxCardDelegate, IESECListCardsContextDelegate>

@property (retain, nonatomic) IESECLynxCard *topbarView;
@property (weak, nonatomic) UIViewController<IESECMallHomeViewDelegate> *parent;
@property (retain, nonatomic) IESECMallFeedViewController *feedVc;
@property (retain, nonatomic) IESECLynxCardModel *cardModel;
@property (retain, nonatomic) IESECMallLynxRenderMonitor *lynxRenderMonitor;
@property (retain, nonatomic) IESECListKitCardPreloader *preloader;
@property (nonatomic) BOOL hasTopbar;
@property (nonatomic) BOOL didAppear;
@property (nonatomic) BOOL didFirstScreen;
@property (nonatomic) unsigned long long lastPageVisibleStatus;
@property (weak, nonatomic) id<IESECMallHomeViewDelegate> delegate;
@property (nonatomic) long long lynxCardThreadStrategy;
@property (copy, nonatomic) NSDictionary *globalPropsExtra;
@property (copy, nonatomic) NSDictionary *rootGlobalPropsExtra;
@property (nonatomic) BOOL listViewAutoWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidFirstScreen:(id)a0;
- (void)lynxCard:(id)a0 sizeDidChanged:(struct CGSize { double x0; double x1; })a1;
- (void)lynxCard:(id)a0 didLoadFail:(id)a1;
- (void)lynxCard:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)currentCardsWriteAlogMethodName:(id)a0 paramModel:(id)a1 result:(id)a2 context:(id)a3;
- (void)lynxCard:(id)a0 didUpdateDataWithLynxViewFromType:(unsigned long long)a1 perfDict:(id)a2;
- (BOOL)pageDidAppeared;
- (id)currentListContextIdForCards;
- (id)currentBridgeCallHanderForCards;
- (void)updateLynxData:(id)a0;
- (void)buildUI;
- (id)xBridgeList;
- (id)collectionViewCellInSection:(id)a0 item:(id)a1;
- (void)setPlayerManagerMediaType:(id)a0;
- (BOOL)mainRequestIsLoading;
- (BOOL)sendTouchEventToLynxCard;
- (BOOL)delayHeaderCardCacheDataUpdate;
- (void)viewDidAppearWithPageSource:(id)a0;
- (void)viewDidDisappearWithPageSource:(id)a0;
- (id)createLynxCardModel:(id)a0;
- (void)viewDidAppearWithEvent:(unsigned long long)a0 pageSource:(id)a1;
- (void)viewDidDisappearWithEvent:(unsigned long long)a0 pageSource:(id)a1;
- (void)sendPageVisibilityChangeEvent:(unsigned long long)a0 pageSource:(id)a1;
- (void)initFeedVc:(BOOL)a0;
- (void)addTopbarView;
- (void)perceptionTapRecognizer;
- (void)setGreyStyleWithExtraData:(id)a0;
- (void)setupCustomLynxCardLoadingColor:(id)a0;
- (id)initWithPrarent:(id)a0 lynxPreloader:(id)a1 hasTopbar:(BOOL)a2 enablePreload:(BOOL)a3;
- (id)mallFeedShareDataImp;
- (void)mallDidFirstScreen;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)appDidEnterBackground:(id)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (void)appWillEnterForeground:(id)a0;
- (void)updateWithModel:(id)a0;
- (void)viewDidDisappear;
- (void)_updateWithModel:(id)a0;
- (void)buildConstraints;

@end
