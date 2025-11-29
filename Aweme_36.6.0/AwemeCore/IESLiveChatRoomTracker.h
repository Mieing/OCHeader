@class HTSEventContext, NSMutableDictionary, IESLiveMultiInteractUserService, NSDictionary;
@protocol IESLiveChatRoomTrackerContext;

@interface IESLiveChatRoomTracker : NSObject

@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) NSMutableDictionary *commonParams;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (weak, nonatomic) id<IESLiveChatRoomTrackerContext> context;
@property (retain, nonatomic) IESLiveMultiInteractUserService *userService;
@property (readonly, copy, nonatomic) NSDictionary *commonParamDict;

- (void)didSetAttachingDIContext;
- (void)trackWithEventName:(id)a0;
- (void)trackWithEventName:(id)a0 andExtParams:(id)a1;
- (void)trackCustomWithEventName:(id)a0;
- (void)setupCommonParams;
- (void)packageAudienceBuildParamsWithExtra:(id)a0;
- (void)addCommonConnectParams;
- (long long)fullSeatCount;
- (id)initWithInteractiveScene:(unsigned long long)a0 eventContext:(id)a1;
- (void)livesdk_guest_connection_apply;
- (void)livesdk_guest_connection_success;
- (void)livesdk_guest_connection_over;
- (void)livesdk_anchor_audience_connection_over;
- (void)livesdk_audience_connection_user_camera_open_click;
- (void).cxx_destruct;

@end
