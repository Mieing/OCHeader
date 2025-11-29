@class NSString, IESLiveToolBarPermissionAlertApi;

@interface IESLiveToolBarPermissionPreCheckServiceIMP : IESLiveGeneralBaseService <IESLiveToolBarPermissionPreCheckService>

@property (retain, nonatomic) IESLiveToolBarPermissionAlertApi *api;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (BOOL)serviceShouldActive:(id)a0;
+ (id)serviceProtocolsWithParam:(id)a0;

@end
