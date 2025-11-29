@class NSString;

@interface IESLiveAnchorBDCastSinkBlockService : IESLiveGeneralBaseService <IESLiveAnchorBDCastLinkBlockService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (BOOL)serviceShouldActive:(id)a0;
+ (id)serviceProtocolsWithParam:(id)a0;

- (void)serviceDidLaunch;
- (BOOL)serviceNeedBringInAnchorRoom;
- (void)serviceDidReBind;
- (void)serviceUninstall;
- (BOOL)needBlockMultiDevice;
- (BOOL)needBlockExternalCamera;
- (BOOL)needBlockBDCastLink;
- (void)showBlockToast;

@end
