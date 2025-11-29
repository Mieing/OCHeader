@class NSString, AWEPOIFavoriteBubble, AWEPOICollectObject, AWEPOIDetailResponse, NSArray, NSDictionary, MKDistanceFormatter, AWEPOIDetailMapViewModel;

@interface AWEPOIMapContext : AWEPageContext

@property (retain, nonatomic) AWEPOIFavoriteBubble *favoriteBubble;
@property (retain, nonatomic) AWEPOICollectObject *collectObject;
@property (nonatomic) BOOL isCollectRequestOnAir;
@property (nonatomic) double distanceM;
@property (retain, nonatomic) MKDistanceFormatter *distanceFormatter;
@property (nonatomic) BOOL isSameDistrict;
@property (copy, nonatomic) NSDictionary *transportStringToTypeDict;
@property (nonatomic) BOOL isAOIRegionValid;
@property (copy, nonatomic) NSString *sessionID;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (nonatomic) unsigned long long navigationStyle;
@property (nonatomic) unsigned long long strategy;
@property (nonatomic) long long transportType;
@property (nonatomic) unsigned long long distanceType;
@property (weak, nonatomic) AWEPOIDetailMapViewModel *mapViewModel;
@property (retain, nonatomic) AWEPOIDetailResponse *poiDetail;
@property (copy, nonatomic) NSArray *transportETAArray;
@property (nonatomic) BOOL hasRequestedDirections;
@property (copy, nonatomic) NSDictionary *routerParams;

- (id)extraTrackParams;
- (void)trackEvent:(id)a0 extraParams:(id)a1;
- (BOOL)hasLocationPermission;
- (BOOL)shouldDrawLine;
- (void)updateNavigationStatusWithLocationModel:(id)a0 poiDetail:(id)a1;
- (void)requestDirectionsWithLocationModel:(id)a0 completion:(id /* block */)a1;
- (BOOL)isSameCity;
- (id)clickBubbleRouterSchema;
- (void)showFavoriteBubbleOnView:(id)a0 anchorView:(id)a1;
- (BOOL)isInSameCityOrDistrict;
- (BOOL)isScenicPOI;
- (BOOL)didHitAOIABTest;
- (BOOL)canShowAOI;
- (void)setupMapGeoJson:(id)a0;
- (BOOL)shouldUseFixZoom;
- (id)transportStringWithType:(long long)a0;
- (long long)transportTypeWithString:(id)a0;
- (double)maxModalHeight;
- (void)tryChangeCollectPOIStatusWithCollected:(BOOL)a0 showBubbleOnView:(id)a1 bubbleAnchorView:(id)a2 loginResult:(id /* block */)a3 completion:(id /* block */)a4;
- (long long)defaultSelectedTypeFromRouter;
- (void).cxx_destruct;
- (id)init;
- (id)distanceString;
- (id)bubbleText;

@end
