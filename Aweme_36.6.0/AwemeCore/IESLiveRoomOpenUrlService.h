@class NSString;

@interface IESLiveRoomOpenUrlService : IESLiveGeneralBaseService <IESLiveComponentLifeCycleNotifier>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (BOOL)serviceShouldActive:(id)a0;
+ (id)serviceActionsWithParam:(id)a0;

- (void)componentMountDidFinishForLevel:(long long)a0;

@end
