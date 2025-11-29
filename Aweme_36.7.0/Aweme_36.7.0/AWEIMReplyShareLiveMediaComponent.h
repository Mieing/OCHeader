@class NSString;

@interface AWEIMReplyShareLiveMediaComponent : AWEIMFlexComponent <AWEIMMessageContentInterface>

@property (nonatomic) double lastTimeQuireLiveStatus;
@property (nonatomic) BOOL isLiving;
@property (nonatomic) long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)presenter:(id)a0 didUpdateWithView:(id)a1;
- (void)p_createPresenterIfNeed;
- (void)p_updateProps;
- (void)p_enterLiveRoom;
- (void)p_quireRoomInfoWithRoomID:(long long)a0 completion:(id /* block */)a1;
- (void)p_enterProfile;
- (id)displayMessage;

@end
