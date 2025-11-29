@class NSString, IESHYURLParserHandler, IESLiveGiftCanvasListenerManager;
@protocol IESLiveReportService, IESLiveUIColorService, IESLiveLanguageService, HTSLiveViewHierarchyProvider, IESLiveAWEMainModuleServie, IESLiveVideoDetailService, IESLiveRoomService, IESLiveHybridContainerFactory, IESLiveURLSchemaHandler, IESLiveUserProfileControllerFactory, IESLiveWebViewService, IESVSOrientationRouter;

@interface IESLiveInternalRouterImpl : NSObject <IESLiveInternalRouter>

@property (retain, nonatomic) id<IESLiveHybridContainerFactory> webViewFactory;
@property (retain, nonatomic) id<IESLiveUserProfileControllerFactory> userProfileFactory;
@property (weak, nonatomic) id<HTSLiveViewHierarchyProvider> viewProvider;
@property (retain, nonatomic) id<IESLiveVideoDetailService> videoItemFactory;
@property (retain, nonatomic) id<IESLiveAWEMainModuleServie> mainModuleImpl;
@property (retain, nonatomic) id<IESLiveReportService> reportService;
@property (weak, nonatomic) id<IESLiveRoomService> roomService;
@property (retain, nonatomic) id<IESLiveUIColorService> colorService;
@property (retain, nonatomic) id<IESLiveWebViewService> webViewService;
@property (retain, nonatomic) id<IESLiveURLSchemaHandler> schemaHandler;
@property (retain, nonatomic) id<IESLiveLanguageService> languageService;
@property (weak, nonatomic) id<IESVSOrientationRouter> vsOrientationRouter;
@property (retain, nonatomic) IESHYURLParserHandler *hyURLHandler;
@property (retain, nonatomic) IESLiveGiftCanvasListenerManager *canvasListenerManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)attachingDIContext;
- (id)personalRecommendSwitchParams;
- (id)openHybridWithScheme:(id)a0 eventParams:(id)a1;
- (id)openPopupHybridWithURL:(id)a0 gravity:(long long)a1 kernalType:(unsigned long long)a2 eventParams:(id)a3;
- (id)openFullScreenHybridWithURL:(id)a0 kernalType:(unsigned long long)a1 eventParams:(id)a2;
- (void)forceUpdateToPortraitWith:(id /* block */)a0;
- (id)openHybridWithScheme:(id)a0 eventParams:(id)a1 customGlobalProps:(id)a2;
- (id)openFullScreenHybridWithURL:(id)a0 kernalType:(unsigned long long)a1 eventParams:(id)a2 extraSchemaParams:(id)a3;
- (id)openPopupHybridWithURL:(id)a0 gravity:(long long)a1 kernalType:(unsigned long long)a2 eventParams:(id)a3 extraSchemaParams:(id)a4;
- (void)dismissAllPopupHybridView;
- (void)dismissAllBottomPoupHybridView;
- (void)dismissAllCenterPopupHybridView;
- (void)dismissBottomPopupWithKernalType:(unsigned long long)a0;
- (void)dismissCenterPopupWithKernalType:(unsigned long long)a0;
- (void)dismissLynxPopupView;
- (BOOL)pushUserProfile:(id)a0 secUID:(id)a1 animated:(BOOL)a2;
- (BOOL)pushUserProfile:(id)a0 secUID:(id)a1 animated:(BOOL)a2 trackInfo:(id)a3;
- (BOOL)pushUserProfileFromVC:(id)a0 uID:(id)a1 secUID:(id)a2 animated:(BOOL)a3;
- (BOOL)pushUserProfileFromVC:(id)a0 uID:(id)a1 secUID:(id)a2 animated:(BOOL)a3 trackInfo:(id)a4;
- (void)pushVideoItemWithID:(id)a0 animated:(BOOL)a1;
- (void)pushVideoItemListWithIDs:(id)a0 programID:(id)a1 enterFrom:(id)a2;
- (void)pushVideoItemFromVC:(id)a0 itemID:(id)a1 animated:(BOOL)a2;
- (void)pushReportControllerWithUser:(id)a0 room:(id)a1 source:(unsigned long long)a2 reportContent:(id)a3 contentId:(id)a4 isLandscapeMode:(BOOL)a5 completion:(id /* block */)a6;
- (void)forceUpdateToPortraitWithCompletion:(id /* block */)a0;
- (id)openHybridWithScheme:(id)a0 eventParams:(id)a1 customGlobalProps:(id)a2 playCompleteWithStats:(id /* block */)a3;
- (id)pr_valueForKey:(id)a0 fromQueryItems:(id)a1;
- (void)p_presentViewController:(id)a0 fromVC:(id)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (BOOL)p_forceUpdateToPortraitIfNeeded;
- (id)p_containerController;
- (void)p_pushViewController:(id)a0 fromVC:(id)a1 animated:(BOOL)a2;
- (BOOL)p_checkOrientationToPortraitIfNeeded;
- (BOOL)isValidHost:(id)a0;
- (void)trackParseSchemaFailedWithType:(id)a0 url:(id)a1;
- (void)addHybridMonitorDataToParams:(id)a0 withScheme:(id)a1;
- (id)hybridHostWithKernalType:(unsigned long long)a0;
- (void)dismissNewHybridPopupWithKernalType:(unsigned long long)a0 isBottom:(BOOL)a1 removeOne:(BOOL)a2;
- (void)p_pushViewController:(id)a0 fromVC:(id)a1 animated:(BOOL)a2 hideNavBar:(BOOL)a3;
- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)presentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;

@end
