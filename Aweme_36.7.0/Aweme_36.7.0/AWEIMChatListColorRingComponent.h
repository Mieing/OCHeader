@class NSString;
@protocol AFDCloseFriendsStoryCircleShowTrackerProtocol;

@interface AWEIMChatListColorRingComponent : AWEIMComponentBase <AWEIMChatListColorRingInterface, AFDAwemePermissionMessage>

@property (retain, nonatomic) id<AFDCloseFriendsStoryCircleShowTrackerProtocol> storyCircleShowTracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didChangeAwemePrivacyType:(id)a0 privacyPermissionType:(long long)a1 extra:(id)a2 syncHandle:(id /* block */)a3;
- (void)hostVC_viewWillAppear;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewWillDisappear;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
