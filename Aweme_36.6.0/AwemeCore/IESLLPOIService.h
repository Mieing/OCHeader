@class NSString;

@interface IESLLPOIService : HTSService <IESLLPOIService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)getPOITrackerUtils;
- (void)goodsDetailPreloadWithBizCode:(id)a0;
- (id)fetchPoiADTrackParamsFromModel:(id)a0;
- (id)fetchPoiRankTrackParams:(id)a0;
- (id)generateRankLabel:(id)a0;
- (id)getPOICommentCreationId;
- (BOOL)enableIM;
- (double)filterListCellHeightForPOIModel:(id)a0;
- (Class)POIUtils;
- (id)locationServiceManager;
- (id)requestHeaderParamsManager;
- (id)phaseRankType:(long long)a0;

@end
