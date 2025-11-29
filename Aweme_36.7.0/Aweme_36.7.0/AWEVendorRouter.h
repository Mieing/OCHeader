@class NSString;

@interface AWEVendorRouter : HTSService <AWEVendorRouteService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)transToXiguaVideoListPageWithParams:(id)a0;
+ (void)transToXiguaPersonalPageWithParams:(id)a0;
+ (void)preloadXiguaPersonalPageWithParams:(id)a0;
+ (void)transToXiguaPersonalPageWithParams:(id)a0 enterFrom:(id)a1;
+ (void)preloadXiguaPersonalPageWithParams:(id)a0 enterFrom:(id)a1;
+ (void)transToXiguaPersonalPageWithParams:(id)a0 scene:(id)a1 launchFrom:(id)a2 location:(id)a3;
+ (void)preloadXiguaPersonalPageWithParams:(id)a0 scene:(id)a1 launchFrom:(id)a2 location:(id)a3;
+ (void)transToXiguaPersonalPageWithRouteModel:(id)a0;
+ (void)preloadXiguaPersonalPageWithRouteModel:(id)a0;
+ (void)transToDongchediCarPageWithPath:(id)a0;
+ (BOOL)isSearchWithEnterFrom:(id)a0;
+ (id)routeModelFromParams:(id)a0 scene:(id)a1 launchFrom:(id)a2 location:(id)a3;
+ (id)commonTrackParamsWithEnterFrom:(id)a0;
+ (BOOL)enableTransToLynxXiguaPersonalPage;
+ (id)genXiguaPersonalPageSchemaWithRouteModel:(id)a0;
+ (id)schemaForTransToLynxXiguaPersonalPage;


@end
