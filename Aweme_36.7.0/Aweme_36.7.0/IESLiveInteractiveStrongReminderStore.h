@class HTSEventContext, NSString, HTSLiveInteractiveAPI, IESLiveComponentContext;
@protocol IESLiveRoomService;

@interface IESLiveInteractiveStrongReminderStore : NSObject <IESLiveLinkmicSettingActions>

@property (nonatomic) long long acceptStrongReminder;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSLiveInteractiveAPI *interactiveAPI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)addListener;
- (id)initWithRoom:(id)a0 trackContext:(id)a1 componentContext:(id)a2;
- (void)didUpdateAnchorSettings:(id)a0;
- (void)updateStrongReminderValue:(int)a0 withScene:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)dealUpdateSettingResponse:(unsigned long long)a0 apiRequestTime:(double)a1 object:(id)a2 error:(id)a3 params:(id)a4 value:(int)a5 completion:(id /* block */)a6;
- (void)showHUDWithValue:(int)a0;
- (void).cxx_destruct;

@end
