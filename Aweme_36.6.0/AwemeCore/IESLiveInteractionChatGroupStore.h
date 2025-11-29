@class HTSEventContext, IESLiveInteractionChatGroupAPI, NSMutableDictionary, IESLiveComponentContext, NSString;
@protocol IESLiveRoomService;

@interface IESLiveInteractionChatGroupStore : NSObject <IESLiveLinkmicSettingActions>

@property (retain, nonatomic) IESLiveInteractionChatGroupAPI *api;
@property (retain, nonatomic) NSMutableDictionary *groupInfos;
@property (retain, nonatomic) NSMutableDictionary *groupFetcher;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (nonatomic) BOOL hasKtvChatGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)addListener;
- (id)initWithRoom:(id)a0 trackContext:(id)a1 componentContext:(id)a2;
- (void)didUpdateAnchorSettings:(id)a0;
- (BOOL)enableKtvChatGroup;
- (void)inviteUser:(id)a0 toJoinGroup:(id)a1;
- (void)performActionWithGroupInfo:(int)a0 action:(id /* block */)a1;
- (void)createKtvChatGroupWithCompletion:(id /* block */)a0;
- (void)joinKtvChatGroup:(id)a0 guideSource:(id)a1 completion:(id /* block */)a2;
- (void)performActionWithGroupInfo:(int)a0 forceUpdate:(BOOL)a1 action:(id /* block */)a2;
- (void)createGroupManagerViewController:(id)a0 extra:(id)a1 completion:(id /* block */)a2;
- (void)createGroupWithType:(long long)a0 extra:(id)a1 completion:(id /* block */)a2;
- (void)joinGroup:(id)a0 shortId:(long long)a1 bizExtension:(id)a2 completion:(id /* block */)a3;
- (void)p_didUpdateAnchorSettings:(id)a0;
- (id)groupForType:(int)a0;
- (void).cxx_destruct;
- (unsigned long long)currentScene;

@end
