@interface AWEKnowledgeSwiftImpl.KnowledgeHangoutServiceImpl : HTSService <AWEKnowledgeHangoutService>

- (Class)hangoutWaterfallSectionControllerClass;
- (id)createHangoutWaterfallSectionViewModel:(id)a0;
- (id)createHangoutWaterfallCommonLynxSectionViewModel:(id)a0 cellWidth:(double)a1 cellHeight:(double)a2 itemModel:(id)a3 cardID:(id)a4 schema:(id)a5 serverData:(id)a6 useHunterHeight:(BOOL)a7 placeHolderColor:(id)a8 disableRemoveSection:(BOOL)a9 totalRequestTimes:(long long)a10 requestMethod:(long long)a11;
- (id)createNativeSectionViewModel:(id)a0 totalRequestTimes:(long long)a1 requestMethod:(long long)a2;
- (id)createHangoutLongPressPanelViewController:(id)a0 enterFrom:(id)a1 enterMethod:(id)a2 logExtra:(id)a3 location:(struct CGPoint { double x0; double x1; })a4 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5 isDislikeIconActive:(BOOL)a6;
- (void)bindContext:(id)a0 toSectionController:(id)a1;
- (id)contextForSectionController:(id)a0;
- (Class)hangoutWaterfallCommonLynxSectionControllerClass;
- (id)createHangoutWaterfallCommonLynxSectionViewModel:(id)a0;
- (id)createHangoutTabViewController;
- (id)hangoutTopTabName;
- (id)hangoutContextProvider;
- (id)createHangoutWaterfallDataControllerWithPayload:(id)a0;
- (void)prefetchHangoutData;
- (id)createHangoutPageContext;
- (void)addIntoHangoutFeatureSequenceWithAwemeId:(id)a0 awemeModel:(id)a1 feedScene:(id)a2 sequence:(id)a3 customParams:(id)a4;
- (id)experienceSearchHangoutWidgetParamsWithPreviousPage:(id)a0;
- (id)hangoutSingleFeedDataController:(id)a0;
- (BOOL)isHangoutWidgetInstalled;
- (void).cxx_destruct;
- (id)init;

@end
