@class HTSEventContext, NSString;
@protocol IESLiveRoomService, IESLiveCompoundSubscription, IESLiveInteractionSettingsRouter;

@interface IESLiveInteractionSettingsEventTracker : NSObject <IESLiveSocialInteractPreLoadExAction>

@property (weak, nonatomic) id<IESLiveRoomService> room;
@property (weak, nonatomic) id<IESLiveInteractionSettingsRouter> interactionSettings;
@property (retain, nonatomic) HTSEventContext *eventContext;
@property (nonatomic) BOOL hasEverTurnOnAllowAdminOperateGuest;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)interactionModeEndedWithLayout:(id)a0;
- (id)initWithEventContext:(id)a0 room:(id)a1;
- (void)didSwitchSettingWithKey:(int)a0 value:(int)a1;
- (void)didSwitchAudienceSettingWithKey:(int)a0 value:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
