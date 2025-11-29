@class HTSEventContext, NSString, IESLivePrivilegeEntranceButtonController, IESLivePrivilegeEntranceProfileController, IESLivePayGradeEntranceController, IESLivePrivilegeEntranceWealthController, IESLivePrivilegeEntranceBarController, IESLiveComponentContext;
@protocol IESLiveRoomService;

@interface IESLivePrivilegeEntranceFragment : IESLiveCubeFragment <IESLivePrivilegeEntranceProvider, IESLivePrivilegeCommonData, HTSLiveMessageSubscriber>

@property (retain, nonatomic) IESLivePrivilegeEntranceButtonController *entranceButtonController;
@property (retain, nonatomic) IESLivePrivilegeEntranceBarController *entranceBarController;
@property (retain, nonatomic) IESLivePrivilegeEntranceProfileController *entranceProfileController;
@property (retain, nonatomic) IESLivePrivilegeEntranceWealthController *entranceWealthController;
@property (retain, nonatomic) IESLivePayGradeEntranceController *entrancePayGradeController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;

+ (BOOL)componentShouldActive:(id)a0;
+ (BOOL)isMixed;

- (void)componentBindService;
- (void)componentMount;
- (void)componentUnmount;
- (void)componentRefresh;
- (void)updateEntranceWithGift:(id)a0 count:(long long)a1;
- (id)profileInterface;
- (void)cubeComponentCreate;
- (void)cubeComponentRefresh;
- (id)barInterface;
- (id)buttonInterface;
- (id)wealthInterface;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
