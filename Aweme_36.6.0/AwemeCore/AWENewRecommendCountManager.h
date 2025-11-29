@class NSString, NSMutableDictionary;

@interface AWENewRecommendCountManager : NSObject <AWEUserMessage, AWENewRecommendCountManagerProtocol>

@property (retain, nonatomic) NSMutableDictionary *countMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)p_onPersonalRecommendChanged:(id)a0;
- (long long)countForSource:(long long)a0;
- (void)fetchCountWithSource:(long long)a0 networkContext:(id)a1 completion:(id /* block */)a2;
- (void)clearSource:(long long)a0;
- (void)p_onUserRecommendDisabled:(id)a0;
- (BOOL)p_shouldBlockSource:(long long)a0;
- (id)usersForSource:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (void)dealloc;

@end
