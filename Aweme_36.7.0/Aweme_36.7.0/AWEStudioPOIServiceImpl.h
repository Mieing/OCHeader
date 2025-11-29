@class NSString;

@interface AWEStudioPOIServiceImpl : NSObject <AWEStudioPOIServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showPOIPickerWithLocationInfos:(id)a0 splitDomains:(BOOL)a1 isOversea:(BOOL)a2 entrance:(unsigned long long)a3 moreParams:(id)a4 shouldShowAddStore:(BOOL)a5 completion:(id /* block */)a6 cancelBlock:(id /* block */)a7;
- (id)baseTrackerParamsForPOIInfo:(id)a0 enterFrom:(id)a1;
- (void)trackBDUGConsumeWithType:(unsigned long long)a0 POIInfo:(id)a1 logPassback:(id)a2;
- (id)createAWEStudioPOIShowPoiPickerMoreParamsModel;
- (void)showPOIPickerWithLocations:(id)a0 splitDomains:(BOOL)a1 isOversea:(BOOL)a2 entrance:(unsigned long long)a3 moreParams:(id)a4 shouldShowAddStore:(BOOL)a5 completion:(id /* block */)a6 cancelBlock:(id /* block */)a7;
- (void)showPOIPickerWithLocations:(id)a0 splitDomains:(BOOL)a1 isOversea:(BOOL)a2 entrance:(unsigned long long)a3 moreParams:(id)a4 shouldShowAddStore:(BOOL)a5 completion:(id /* block */)a6;
- (id)getPOIEditViewControllerWithModel:(id)a0;

@end
