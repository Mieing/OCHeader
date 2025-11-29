@class NSString;

@interface IESLiveAnchorInnerPushServiceImpl : IESLiveGeneralBaseService <IESLiveAnchorInnerPushService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (BOOL)serviceShouldActive:(id)a0;
+ (id)serviceProtocolsWithParam:(id)a0;

- (void)serviceUninstall;
- (void)showInnerPush:(id)a0;

@end
