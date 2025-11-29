@class NSString;

@interface IESLiveEnterRoomPublicActionInjection : NSObject <IESLiveEnterRoomActionInjectionProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)p_isFromVSSportsOfEnterFrom:(id)a0;
+ (id)registActionforStageNewEnter;
+ (id)registActionforStageWillEnter;
+ (id)registActionforStageDidEnter;
+ (id)registActionforStageHasResult;
+ (id)registActionforStageWillShowVC;
+ (id)p_createPreferenceInfoWithTriggerReason:(id)a0;
+ (void)ieslivekit_register_enterRoomAction;


@end
