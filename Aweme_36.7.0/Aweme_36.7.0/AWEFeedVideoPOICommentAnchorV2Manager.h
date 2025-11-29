@class AWEFeedVideoLocalLifeAnchorV2ViewContext, NSString;

@interface AWEFeedVideoPOICommentAnchorV2Manager : NSObject <AWEFeedVideoLocalLifeCommentAnchorV2ManagerProtocol>

@property (retain, nonatomic) AWEFeedVideoLocalLifeAnchorV2ViewContext *viewContext;
@property (nonatomic) BOOL userNeverVisitPoiAnchor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)anchorViewWillShowOnSuperview;
- (void)handlerTemplateAnchorViewClicked;
- (id)trackerParamsForTemplateAnchorShow;
- (id)trackerParamsForTemplateAnchorClick;
- (void)updateViewContext:(id)a0;
- (id)aweNearbyModuleService;
- (void)handleWillShowOnSuperViewWithContext;
- (void)handleClickWithContext;
- (void)trackWillShowOnSuperViewWithContext:(id)a0;
- (void)trackTradeAdEventWithLabelName:(id)a0 aweme:(id)a1;
- (void)trackClickWithContext:(id)a0;
- (void)handlePOIClickWithContext:(id)a0 referString:(id)a1 enterMethod:(id)a2 logExtra:(id)a3;
- (void)handlePOIListClickWithContext:(id)a0 referString:(id)a1 enterMethod:(id)a2 logExtra:(id)a3;
- (void)handlePOITradeClickWithContext:(id)a0;
- (id)trackParamsForPOIAnchorEntranceWithModel:(id)a0 referString:(id)a1;
- (id)tradeParamsWithContext:(id)a0;
- (void).cxx_destruct;

@end
