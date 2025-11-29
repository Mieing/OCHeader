@class NSString, IESLivePublicScreenNotificationCenter, IESLivePublicScreenNodeFactory, IESLivePublicScreenView;
@protocol IESLiveRoomService, IESLiveUserService;

@interface IESLiveNormalPublicScreenService : IESLiveGeneralBaseService <IESLiveNormalPublicScreenService>

@property (weak, nonatomic) IESLivePublicScreenView *publicScreen;
@property (retain, nonatomic) IESLivePublicScreenNotificationCenter *forwardCenter;
@property (retain, nonatomic) IESLivePublicScreenNodeFactory *externalNodeFactory;
@property (retain, nonatomic) id<IESLiveRoomService> roomService;
@property (retain, nonatomic) id<IESLiveUserService> userService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (id)serviceProtocolsWithParam:(id)a0;
+ (unsigned long long)supportType;

- (void)serviceDidLaunch;
- (void)addSubscriber:(id)a0 forEvent:(id)a1;
- (void)bindPublicScreen:(id)a0;
- (void)executeProcessNodeTask:(id)a0;
- (void).cxx_destruct;
- (void)removeSubscriber:(id)a0;

@end
