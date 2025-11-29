@class HTSEventContext, NSString, IESLiveComponentContext;
@protocol IESLiveRoomService;

@interface IESLiveInvisibleStore : NSObject <IESLiveInvisibleRouter>

@property (readonly, nonatomic) id<IESLiveRoomService> room;
@property (readonly, nonatomic) HTSEventContext *trackContext;
@property (readonly, nonatomic) IESLiveComponentContext *componentContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)initWithRoom:(id)a0 componentContext:(id)a1 trackContext:(id)a2;
- (void)registerInvisiblePrivilegeEnterRoomToast:(id)a0;
- (void)cleanInvisiblePrivilegeEnterRoomToast;
- (id)invisiblePrivilegeEnterRoomToast;
- (void).cxx_destruct;

@end
