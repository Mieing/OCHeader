@class NSArray, NSString;

@interface AWEPOIAMapDirection : NSObject

@property (nonatomic) long long mapLoadingStatus;
@property (copy, nonatomic) NSArray *lastResults;
@property (copy, nonatomic) NSString *cityCode;

- (void)requestWalkingDirectionFromLocation:(struct CLLocationCoordinate2D { double x0; double x1; })a0 toLocation:(struct CLLocationCoordinate2D { double x0; double x1; })a1 completion:(id /* block */)a2;
- (void)requestDrivingDirectionLocation:(struct CLLocationCoordinate2D { double x0; double x1; })a0 toLocation:(struct CLLocationCoordinate2D { double x0; double x1; })a1 completion:(id /* block */)a2;
- (void)requestBicycleDirectionLocation:(struct CLLocationCoordinate2D { double x0; double x1; })a0 toLocation:(struct CLLocationCoordinate2D { double x0; double x1; })a1 completion:(id /* block */)a2;
- (void)requestTransitDirectionLocation:(struct CLLocationCoordinate2D { double x0; double x1; })a0 toLocation:(struct CLLocationCoordinate2D { double x0; double x1; })a1 completion:(id /* block */)a2;
- (id)walkURLPath;
- (id)amapAPIKey;
- (id)poiDirectionItemWithAmapModel:(id)a0;
- (id)drivingURLPath;
- (id)bicycleURLPath;
- (id)transitURLPath;
- (id)poiDirectionItemWithTransitModel:(id)a0;
- (id)p_mergeOverlaysWith:(id)a0;
- (void)setupRoutesFromLocation:(struct CLLocationCoordinate2D { double x0; double x1; })a0 toLocation:(struct CLLocationCoordinate2D { double x0; double x1; })a1 tranportTypes:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (id)baseURL;

@end
