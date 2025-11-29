@interface AWEIMGrowthImpl.IncentiveChatRelationWrapper : NSObject <AWEUserMessage> {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ _relationStateCache;
}

- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishBlockUser:(id)a0 status:(long long)a1 followStatus:(long long)a2 followerStatus:(long long)a3;
- (void)didFinishUnBlockUser:(id)a0 status:(long long)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
