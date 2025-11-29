@interface AWEStoryImpl.StoryRelationPlugin : NSObject <AWEUserMessage> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ mateStatusObserver;
}

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)didFinishHidePostFromHer:(id)a0 status:(long long)a1;
- (void)didFinishCloseFriendsWithUser:(id)a0 status:(long long)a1;
- (void)didFinishSetRemarkWithUser:(id)a0;
- (void)didChangePrivateRelationWithUser:(id)a0 relationType:(long long)a1 relationValue:(long long)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
