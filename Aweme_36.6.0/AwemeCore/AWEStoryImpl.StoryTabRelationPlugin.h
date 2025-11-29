@interface AWEStoryImpl.StoryTabRelationPlugin : NSObject <AWEUserMessage> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ mateStatusObserver;
    void /* unknown type, empty encoding */ afterRelationChange;
}

- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishApproveUserFollowRequest:(id)a0 error:(id)a1;
- (void)didFinishRemoveFansWithUser:(id)a0;
- (void)p_handleMateDislikeWithNotification:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
