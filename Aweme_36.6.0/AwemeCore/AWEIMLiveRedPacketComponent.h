@class NSString;

@interface AWEIMLiveRedPacketComponent : AWEIMFlexComponent <AWEIMMessageContentInterface>

@property (nonatomic) double lastTimeQuireLiveStatus;
@property (nonatomic) unsigned long long redpacketProductType;
@property (nonatomic) BOOL openedVideoRedPacket;
@property (nonatomic) long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;
+ (void)quireRoomInfoWithUid:(long long)a0 completion:(id /* block */)a1;
+ (void)quireRedPacketInfoWithOrderID:(id)a0 redPacketProductType:(unsigned long long)a1 completion:(id /* block */)a2;
+ (void)quireOrderIDWithSecUid:(id)a0 conversationShortID:(id)a1 completion:(id /* block */)a2;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)p_addKVO;
- (void)presenter:(id)a0 didUpdateWithView:(id)a1;
- (void)p_createPresentIfNeed;
- (void)p_updateLiveStatusProps;
- (void)p_updateRedPacketInfoProps;
- (void)p_tapAction;
- (id)p_trackCommonParamsForRedPacket;
- (id)p_trackParamsForVideoRedPacket;
- (id)p_trackParamsForLiveRedPacket;
- (id)p_getVideoSchema;
- (void)p_tryJumpToLiveOrProfile;
- (void)p_quireRedPacketInfoAndUpdateProps;
- (id)p_getLiveSchema;
- (id)conversation;
- (id)displayMessage;

@end
