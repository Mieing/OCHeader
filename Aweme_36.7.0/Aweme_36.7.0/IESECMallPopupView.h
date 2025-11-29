@class IESECListKitLynxCardModel, NSDictionary, IESECLynxCard, IESECLynxCardModel, IESECMallLynxRenderMonitor, NSString;
@protocol IESECMallPopupViewDelegate;

@interface IESECMallPopupView : UIView <IESECUserMessage, IESECLynxCardDelegate, IESECListCardsContextDelegate>

@property (retain, nonatomic) IESECLynxCard *popupView;
@property (nonatomic) BOOL hitTestFlag;
@property (retain, nonatomic) IESECLynxCardModel *cardModel;
@property (nonatomic) BOOL firstScreenDidShow;
@property (copy, nonatomic) NSDictionary *lynxDataString;
@property (retain, nonatomic) IESECMallLynxRenderMonitor *lynxRenderMonitor;
@property (nonatomic) BOOL didAppear;
@property (nonatomic) unsigned long long lastPageVisibleStatus;
@property (weak, nonatomic) id<IESECMallPopupViewDelegate> delegate;
@property (retain, nonatomic) IESECListKitLynxCardModel *popupData;
@property (nonatomic) BOOL isCoin;
@property (copy, nonatomic) NSDictionary *globalPropsExtra;
@property (copy, nonatomic) NSDictionary *rootGlobalPropsExtra;
@property (nonatomic) long long lynxCardThreadStrategy;
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
- (id)currentListHomePageView;
- (void)updateLynxData:(id)a0;
- (void)buildUI;
- (BOOL)hasVisiblePopup;
- (void)didFinishHostLogin;
- (void)didFinishHostLogout;
- (void)sendPageVisibilityChangeEvent:(unsigned long long)a0;
- (BOOL)lynxCardEnableForest;
- (id)globalXBridges;
- (id)instanceBridges;
- (id)createLynxCardModel:(id)a0;
- (void)appWillEnterForground:(id)a0;
- (void)setGreyStyleWithExtraData:(id)a0;
- (void)handleFirstScreenVisible;
- (void)sendEventGlobalLoginPanelVisibility:(unsigned long long)a0;
- (void)updateGlobalPropsExtraData:(id)a0;
- (void)handleFirstScreenShowNotify:(id)a0;
- (void)addPopup;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)appDidEnterBackground:(id)a0;
- (void)layoutSubviews;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)viewDidDisappear;
- (void)addNotificationObserver;
- (void)buildConstraints;

@end
