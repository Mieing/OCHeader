@class NSString;

@interface AWEPluginAdLandCustomImpl : NSObject <BDPAdLandPluginDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (void)bdp_trackUrls:(id)a0 params:(id)a1;
- (void)bdp_customOpenAdLandPageLinksWithScheme:(id)a0 data:(id)a1;
- (void)bdp_sendAdLogV1WithEvent:(id)a0 label:(id)a1 groundId:(id)a2 logExtra:(id)a3 creativeId:(id)a4 adExtraData:(id)a5 extra:(id)a6;

@end
