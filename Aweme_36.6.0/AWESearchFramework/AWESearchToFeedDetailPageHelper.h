@class NSString;

@interface AWESearchToFeedDetailPageHelper : HTSService <AWESearchToFeedDetailPageHelper>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)searchVideoFeedTableViewControllerWithDataController:(id)a0 initialIndex:(long long)a1 referString:(id)a2 enterFrom:(id)a3 logExtraDict:(id)a4;
- (id)getDetailTableViewControllerWithDataController:(id)a0 initialIndex:(long long)a1 referString:(id)a2 enterFrom:(id)a3 logExtraDict:(id)a4 dataControllerChangedBlock:(id /* block */)a5;
- (id)relatedDetailViewControllerWithModel:(id)a0 params:(id)a1;
- (id)getHotSpotVCWithDataArray:(id)a0 initialIndex:(long long)a1 referString:(id)a2 otherParams:(id)a3;
- (id)aweMixPanelDetailTableViewContainerControllerWithDataController:(id)a0 initialIndex:(long long)a1 referString:(id)a2 logExtraDict:(id)a3;
- (id)aweMixPanelDetailTableViewControllerWithDataController:(id)a0 initialIndex:(long long)a1 referString:(id)a2 logExtraDict:(id)a3;
- (BOOL)isNeedNewEntrance;
- (void)enterAdMixVideoDetailTableVCWithAweme:(id)a0 DetailTableVC:(id)a1;

@end
