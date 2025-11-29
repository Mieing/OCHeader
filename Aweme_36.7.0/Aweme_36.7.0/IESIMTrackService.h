@class NSString;

@interface IESIMTrackService : HTSService <IESIMTrackService, InstallAndDeviceIDMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackEvent:(id)a0 withParams:(id)a1;
- (id)createBtmChainWithBtmInfo:(id)a0 clickedView:(id)a1 enterNewPage:(BOOL)a2 addBtmChain:(BOOL)a3 chainLength:(long long)a4 targetPages:(id)a5;
- (void)setBcmPageParams:(id)a0 forKey:(id)a1 responder:(id)a2;
- (id)createJumpSourceBtmTokenWithBtm:(id)a0 host:(id)a1 bcm:(id)a2;
- (BOOL)registerBtmPage:(id)a0 pageBtm:(id)a1 sourceBtmToken:(id)a2;
- (id)createReportParamsWithBtm:(id)a0 host:(id)a1;
- (BOOL)enableJsbCreateSourceBtmToken;
- (id)applyTransmissionForEvent:(id)a0 forObject:(id)a1;
- (void)trackEvent:(id)a0 withParams:(id)a1 toPlatform:(unsigned long long)a2;
- (id)obtainTrackPassThroughParams:(id)a0 object:(id)a1;
- (void)configPreDataNode:(id)a0 forObject:(id)a1;
- (void)transmissionNodeInfoForEvent:(id)a0 withBlock:(id /* block */)a1 attachTo:(id)a2;
- (void)didUpdateInstallIDFrom:(id)a0 to:(id)a1;
- (void)didUpdateDeviceIDFrom:(id)a0 to:(id)a1;
- (id)init;
- (void)dealloc;

@end
