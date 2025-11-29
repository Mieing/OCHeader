@class NSString;

@interface AWEFeedMixVideoModuleService : HTSService <AWEFeedMixVideoModuleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)mixPanelShowed;

- (id)mixVideoMoreView;
- (id)aweMixPanelDetailTableViewContainerControllerWithDataController:(id)a0 initialIndex:(long long)a1 referString:(id)a2 logExtraDict:(id)a3;
- (id)aweMixPanelDetailTableViewControllerWithModel:(id)a0 referString:(id)a1 logExtraDict:(id)a2;
- (id)aweMixVideoSelectChaptersControllerWithData:(id)a0 index:(unsigned long long)a1 referString:(id)a2 logExtraDict:(id)a3 selectMixVideoBlock:(id /* block */)a4;
- (id)aweMixPanelDetailTableViewContainerControllerWithModel:(id)a0 referString:(id)a1 logExtraDict:(id)a2;
- (void)recordRichAwemeCurrentIndex:(long long)a0 WithItemID:(id)a1;
- (id)getMixRichAwemeIndexWithItemID:(id)a0;
- (id)getMixRichAwemeIndexDict;
- (void)removeMixRichAwemeIndexWithItemID:(id)a0;
- (void)handleRichAwemeForMixWithContext:(id)a0;
- (id)aweMixVideoSelectChaptersControllerWithAwemeModel:(id)a0 referString:(id)a1 logExtraDict:(id)a2 selectMixVideoBlock:(id /* block */)a3;
- (Class)aweMixVideoSelectChaptersClass;
- (Class)compilationRecommendManagerClass;
- (id)aweMixPanelDetailTableViewControllerWithDataController:(id)a0 initialIndex:(long long)a1 referString:(id)a2 logExtraDict:(id)a3;

@end
