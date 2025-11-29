@interface AWEStoryImpl.Story25TabRelationPlugin : NSObject <AWEUserMessage> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ debounce;
    void /* unknown type, empty encoding */ mateStatusObserver;
    void /* unknown type, empty encoding */ $__lazy_storage_$_userContext;
}

- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)didFinishUnBlockUser:(id)a0 status:(long long)a1;
- (void)didFinishApproveUserFollowRequest:(id)a0 error:(id)a1;
- (void)didFinishHidePostFromHer:(id)a0 status:(long long)a1;
- (void)didFinishUnHidePostFromHer:(id)a0 status:(long long)a1;
- (void)didFinishRemoveFansWithUser:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
