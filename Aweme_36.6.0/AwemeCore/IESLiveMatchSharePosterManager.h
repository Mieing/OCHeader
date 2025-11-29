@interface IESLiveMatchSharePosterManager : NSObject

+ (void)showShareTicketWithParams:(id)a0;
+ (void)showSharePanelWithTargetImage:(id)a0 saveImage:(id)a1 hybridViewController:(id)a2 paramModel:(id)a3;
+ (void)showShareImageUrlToPanelWithModel:(id)a0;
+ (BOOL)p_hasAlbumPermission;
+ (void)showMatchInfoSharePanelWithTargetImage:(id)a0 paramModel:(id)a1;
+ (void)showForecastSharePanelWithTargetView:(id)a0 paramModel:(id)a1;
+ (void)showChampionSharePanelWithTargetView:(id)a0 paramModel:(id)a1;
+ (void)showNameplateSharePanelWithTargetView:(id)a0 paramModel:(id)a1;
+ (void)showShareTicketSharePanelWithTargetView:(id)a0 paramModel:(id)a1;
+ (void)showOptimizedShareTicketSharePanelWithTargetView:(id)a0 saveImage:(id)a1 hybridViewController:(id)a2 paramModel:(id)a3;
+ (id)reposterExtraInfoWithParam:(id)a0;
+ (id)getAttachingDIContext;
+ (id)contentModelExtraParamsWithContentType:(id)a0;
+ (id)mapLiveRoomModelWithEpisode:(id)a0;
+ (BOOL)targetImageVisible:(id)a0;
+ (void)loadMatchInfoSharePosterViewWithBaseView:(id)a0 targetImage:(id)a1 paramModel:(id)a2 shareModel:(id)a3 isPreView:(BOOL)a4 completion:(id /* block */)a5;
+ (void)constructShareContentModelWithQrShareScene:(id)a0 isHiddenReposter:(BOOL)a1 roomModel:(id)a2 completion:(id /* block */)a3;
+ (void)loadChampionSharePanelWithBaseView:(id)a0 targetImage:(id)a1 isPreView:(BOOL)a2;
+ (void)combinationBizPosterWithContentModel:(id)a0;
+ (void)loadShareImageUrlToPanelWithBaseView:(id)a0 targetImage:(id)a1 paramModel:(id)a2 isPreView:(BOOL)a3 completion:(id /* block */)a4;
+ (void)showShareTicketWithModel:(id)a0;
+ (void)p_showShareTicketWithModel:(id)a0;

@end
