@class AWEPOIEntryAnchorView;

@interface AWEPOICommentEntryAnchorViewManager : AWEPOIBaseEntryAnchorViewManager

@property (nonatomic) double maxWidth;
@property (retain, nonatomic) AWEPOIEntryAnchorView *entryView;
@property (nonatomic) BOOL userNeverVisitPoiAnchor;

- (id)aweNearbyModuleService;
- (void)trackWillShowOnSuperViewWithContext:(id)a0;
- (void)trackTradeAdEventWithLabelName:(id)a0 aweme:(id)a1;
- (void)trackClickWithContext:(id)a0;
- (void)handlePOITradeClickWithContext:(id)a0;
- (id)trackParamsForPOIAnchorEntranceWithModel:(id)a0 referString:(id)a1;
- (id)tradeParamsWithContext:(id)a0;
- (void)handleClickWithContext:(id)a0;
- (void)handleSetDataWithContext:(id)a0;
- (void)handleWillShowOnSuperViewWithContext:(id)a0;
- (id)poiTradeTrackParamsWithContext:(id)a0;
- (id)commentExtraInfoWithAweme:(id)a0;
- (void)p_commentAnchorRenderTimeTrackWithModel:(id)a0 view:(id)a1 scene:(id)a2 context:(id)a3;
- (void).cxx_destruct;
- (id)anchorView;
- (id)initWithMaxWidth:(double)a0;

@end
