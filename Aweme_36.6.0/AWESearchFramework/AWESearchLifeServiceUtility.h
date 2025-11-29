@interface AWESearchLifeServiceUtility : NSObject

+ (BOOL)isLifeMallScenesForEnterFrom:(id)a0 from:(id)a1;
+ (BOOL)isLifeServiceBlockedFrom:(id)a0;
+ (BOOL)isNearbyLifeMallChannelForEnterFrom:(id)a0;
+ (BOOL)isProductPageForEnterFrom:(id)a0;
+ (id)getPOICityStringWithSchemaModel:(id)a0;
+ (BOOL)shouldShowTabbarInLifeServiceSearch;
+ (id)fetchLifeServiceSearchTabConfig;
+ (unsigned long long)tabBarLandingStrategy;
+ (void)fetchLifeServiceTabModelsWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)fetchLifeServiceTabLandingStrategyWithParams:(id)a0 completion:(id /* block */)a1;
+ (id)getLifeServiceLynxExtraParamsWithSchemaModel:(id)a0;
+ (void)setupLifeServiceLogData:(id)a0 withSchemaModel:(id)a1;
+ (id)lifeParamsFromSchemaModel:(id)a0;
+ (BOOL)isFromLifeHotelChannelSearchWithSchemaModel:(id)a0;
+ (BOOL)isEmptyQuerySearchWithSchemaModel:(id)a0;
+ (id)fetchLifeChannelValueFromSchemaModel:(id)a0;
+ (id)fetchSaleChannelWithSchemaModel:(id)a0;
+ (BOOL)shouldForceDisplayLightModeUIWithEnterFrom:(id)a0;
+ (BOOL)shouldLife7PageRestoreLeftBackButtonEnabled;
+ (BOOL)shouldPassLifeSearchRealtimeUserActions;
+ (id)getLifeSearchRealtimeUserActions;
+ (BOOL)shouldLifeSearch7PageManualPreRequestEnabled;
+ (BOOL)showLifeNewLargeFontStyle;

@end
