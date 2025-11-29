@class NSDictionary, NSString, UIView;
@protocol HunterContainerProtocol, HunterPreserveDataManagerProtocol;

@interface AWEDCFeedCommonLynxCell : AWEDCFeedBaseCell <HunterContainerLifeCycleProtocol>

@property (retain, nonatomic) UIView<HunterContainerProtocol> *hunterView;
@property (retain, nonatomic) id<HunterPreserveDataManagerProtocol> preserveDataManager;
@property (retain, nonatomic) NSDictionary *serverData;
@property (retain, nonatomic) NSDictionary *clientData;
@property (copy, nonatomic) NSString *cardAppearStatusChangeEventName;
@property (copy, nonatomic) NSString *statsCardEventName;
@property (copy, nonatomic) NSString *closeCardEventName;
@property (copy, nonatomic) NSString *clickCardEventName;
@property (copy, nonatomic) NSString *dislikeCardEventName;
@property (copy, nonatomic) NSString *dislikePanelCardEventName;
@property (copy, nonatomic) NSString *cardDidShowEventName;
@property (copy, nonatomic) NSString *cardDislikePanelClickEventName;
@property (nonatomic) BOOL isCellShowing;
@property (nonatomic) BOOL hasLynxConstructed;
@property (nonatomic) BOOL lynxAppearingMark;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightWithCellWidth:(double)a0 awemeModel:(id)a1 context:(id)a2;
+ (id)currentAwemeModelLynxExtra:(id)a0;
+ (id)elementArray;

- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)container:(id)a0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)containerDidConstructJSRuntime:(id)a0;
- (void)cellWillDisplay;
- (void)awe_themeDidChange:(long long)a0;
- (void)configWithModel:(id)a0 context:(id)a1;
- (void)cellDidEndDisplaying;
- (void)pageDidAppear;
- (void)loadLynx;
- (id)classNameWithReferString;
- (unsigned long long)customDisabledGesture;
- (void)pageDidDisappear;
- (void)preloadLynxResource;
- (void)handleAppDidBecomeActive:(id)a0;
- (void)handleAppWillResignActive:(id)a0;
- (void)unregisterEventCallBack;
- (void)clearLynx;
- (BOOL)isLynxAppearing;
- (void)lynxAppearStateTryChangeTo:(BOOL)a0;
- (BOOL)isCellAppearing;
- (void)removeCellForReason:(id)a0;
- (BOOL)enableUseHunterCache;
- (void)registerEventCallBack;
- (void)closeCellFromLynxWithParams:(id)a0;
- (void)clickCellFromLynxWithParams:(id)a0;
- (void)dislikeCellFromLynxWithParams:(id)a0;
- (void)dislikePanelShowFromLynxWithParams:(id)a0;
- (void)statsReportFromLynxWithParams:(id)a0;
- (void)mergeBusinessExtraIfNeeded:(id)a0;
- (void)sendCardDislikePanelClickEvent;
- (void)sendAppearStateDidChange:(id)a0;
- (BOOL)enableUseHunterHeight;
- (void)lynxDidConstruct;
- (void)sendCardDidShowEvent;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reset;
- (void)dealloc;
- (void)setupUI;

@end
