@class NSString;

@interface AWEIronManService : HTSService <AWEIronManService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)sceneFromSchema:(id)a0;
- (id)locationFromSchema:(id)a0;
- (id)appIDFromSchema:(id)a0;
- (id)appIDFromViewController:(id)a0;
- (id)appNameFromSchema:(id)a0;
- (id)timorSchemaCodecWithSchema:(id)a0 appendLog:(id)a1;
- (id)timorSchemaCodecWithSchema:(id)a0 appendLog:(id)a1 error:(id *)a2;
- (id)timorSchemaCodecWithSchema:(id)a0 externalParams:(id)a1;
- (id)timorSchemaCodecWithDict:(id)a0;
- (void)urlToTimorSchemaWithUrl:(id)a0 completionBlock:(id /* block */)a1;
- (void)preloadIronManWithSchemaString:(id)a0;
- (id)customParamsFromSchema:(id)a0;
- (id)timorQueryAndPathFromSchema:(id)a0;
- (id)bdpLogFromSchema:(id)a0;
- (id)replaceIronManSchema:(id)a0 withNewStartPage:(id)a1;
- (id)generateSchemaWithAppID:(id)a0 startPage:(id)a1;
- (void)notifyHostEventDidChangeWithName:(id)a0 data:(id)a1;
- (void)notifyHostEventDidChangeWithWithAppID:(id)a0 eventName:(id)a1 data:(id)a2;
- (void)addTimorEventListener:(id)a0 subscribeEvent:(id)a1;
- (void)removeTimorEventListener:(id)a0;
- (BOOL)openWithSchema:(id)a0 openType:(long long)a1;
- (void)openOneCardWithView:(id)a0 schema:(id)a1;
- (BOOL)clearWarmBootCacheOfAppID:(id)a0;
- (BOOL)isIronManSchema:(id)a0;
- (id)bdp_exposureVidString;
- (id)bdp_localLibVersionString;
- (void)setSupportOrientationMask:(unsigned long long)a0 withScene:(id)a1;
- (void)interfaceOrientationAdaptToMask:(unsigned long long)a0;
- (id)timorSchemaCodecWithSchema:(id)a0 scene:(id)a1 bdpLog:(id)a2 customParams:(id)a3;
- (long long)matchSettingsListWithWhiteList:(BOOL)a0 schemaDict:(id)a1 urlString:(id)a2;
- (id)schemaCodecWithResultSchema:(id)a0;
- (BOOL)containsSpecificKeyValueWithList:(id)a0;
- (void)schemaFromServerWithUrl:(id)a0 completionBlock:(id /* block */)a1;
- (id)p_deserializeFromSchema:(id)a0;
- (id)getDeviceName;

@end
