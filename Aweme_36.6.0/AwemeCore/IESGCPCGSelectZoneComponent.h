@class NSString, IESGCPXPlayGameAPI, IESGCPCGSelectZoneInterceptor;

@interface IESGCPCGSelectZoneComponent : IESGCPCGInstanceBaseComponent <IESGCPCGSelectZoneRouter, IESGCPCGStandardizedLynxActions>

@property (retain, nonatomic) NSString *cgLynxID;
@property (retain, nonatomic) IESGCPCGSelectZoneInterceptor *responder;
@property (retain, nonatomic) IESGCPXPlayGameAPI *api;
@property (copy, nonatomic) id /* block */ selectZoneCompletion;
@property (copy, nonatomic) NSString *zoneID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDestroy;
- (void)didSetGameCPDIContext;
- (void)componentDidAttached;
- (void)onStandardizedLynxView:(id)a0 loadFinished:(BOOL)a1 error:(id)a2;
- (void)preloadSelectZoneView;
- (void)startSelectZoneWithCompletion:(id /* block */)a0;
- (void)refreshAndShowSelectZone;
- (void)confirmZone:(id)a0;
- (id)selectZoneID;
- (void)startSelectZoneWithNeedCompletion:(BOOL)a0 completion:(id /* block */)a1;
- (void)showSelectZonePageWithData:(id)a0;
- (void).cxx_destruct;

@end
