@class NSString;

@interface IESLiveEnterRoomPolicyActionInjection : NSObject <IESLiveEnterRoomActionInjectionProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)registActionforStageNewEnter;
+ (id)registActionforStageWillEnter;
+ (id)registActionforStageDidEnter;
+ (id)registActionforStageHasResult;
+ (id)registActionforStageWillShowVC;
+ (BOOL)checkLiveEntranceWithEnterFrom:(id)a0 enterMethod:(id)a1;
+ (void)ieslivekit_register_enterRoomAction;


@end
