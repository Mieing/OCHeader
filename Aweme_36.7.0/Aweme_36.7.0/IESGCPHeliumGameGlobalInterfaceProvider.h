@class NSString, IESGCPHeliumGameApi;

@interface IESGCPHeliumGameGlobalInterfaceProvider : NSObject <IESGCPHeliumGameGlobalInterface>

@property (retain, nonatomic) IESGCPHeliumGameApi *api;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)openHeliumGameWithRouterModel:(id)a0;
- (id)openDetailPageSchemaWithGameId:(id)a0;
- (id)heliumGameCommonTrackParamsWithPromoteScene:(unsigned long long)a0;
- (void)preloadHeliumGameWithSchema:(id)a0;
- (BOOL)supportPreload;
- (void)_trueOpenGameWithRouterModel:(id)a0;
- (void)_recordHeliumGameOpenedWithRouterModel:(id)a0;
- (id)_timorBdpLogWithRouterModel:(id)a0;
- (void).cxx_destruct;

@end
