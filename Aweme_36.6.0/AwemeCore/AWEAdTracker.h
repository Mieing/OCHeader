@class NSString;

@interface AWEAdTracker : HTSService <AWEAdTracker>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)trackWithEvent:(id)a0 param:(id /* block */)a1;
+ (void)trackTopViewWithAwemeModel:(id)a0 context:(id /* block */)a1;
+ (void)trackWithAdContext:(id)a0;
+ (void)trackAsyncWithAwemeModel:(id)a0 context:(id /* block */)a1;
+ (void)trackAsyncWithAdContext:(id)a0;
+ (void)trackURLWithURLModel:(id)a0;
+ (void)trackURLWithURLModel:(id)a0 contextBuilder:(id /* block */)a1;
+ (BOOL)trackURLWithParams:(id)a0;
+ (id)pricingTypeWith:(id)a0;
+ (void)sendMannorComponentTrackWithAreaKey:(id)a0 eventName:(id)a1 componentType:(id)a2 params:(id)a3 adExtraParams:(id)a4 parsedTrackConfig:(id)a5 model:(id)a6 componentModel:(id)a7;
+ (void)trackWithAwemeModel:(id)a0 context:(id /* block */)a1;
+ (void)trackWithContext:(id /* block */)a0;
+ (id)composeLogAttributesWithAdContext:(id)a0;
+ (BOOL)trackerAsyncEnable;
+ (void)addPadExtraDataForContext:(id)a0;
+ (id)asyncTrackQueue;
+ (void)asyncTrackWithAwemeModel:(id)a0 context:(id)a1;
+ (void)addAdExtraDataWith:(id)a0 context:(id)a1;
+ (void)asyncTrackTopViewWithAwemeModel:(id)a0 context:(id)a1;
+ (void)asyncTrackWithAdContext:(id)a0;
+ (void)updateOrderCenterPopService:(id)a0;
+ (void)trackV1WithAdContext:(id)a0;
+ (void)trackV3WithAdContext:(id)a0;
+ (void)track3rdPartyUrlAutomaticallyWith:(id)a0;
+ (void)trackApplogFromTrackerIfNeededWithContext:(id)a0 attributes:(id)a1;
+ (void)trackUserCommerceDataIfNeededWithContext:(id)a0 attributes:(id)a1;
+ (id)setupExtraAttributes:(id)a0 attributes:(id)a1;
+ (BOOL)shouldTrackUniqueIdParamsWithContext:(id)a0;
+ (void)addFeedADExtraDataWith:(id)a0 context:(id)a1;
+ (void)addTopADExtraDataWith:(id)a0 context:(id)a1;
+ (void)addLiveADExtraDataWith:(id)a0 context:(id)a1;
+ (void)addSearchADExtraDataWith:(id)a0 context:(id)a1;
+ (void)addUserProfileADExtraDataWith:(id)a0 context:(id)a1;
+ (void)addFeedWidgetStyleTypeWith:(id)a0 context:(id)a1;
+ (void)addToLiveADExtraDataWith:(id)a0 context:(id)a1;
+ (id)buildMannorDynamicParamsWithParams:(id)a0 adExtraParams:(id)a1 model:(id)a2 componentModel:(id)a3 componentType:(id)a4;


@end
