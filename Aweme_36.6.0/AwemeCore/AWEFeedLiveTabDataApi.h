@class HTSLiveFeedDataApi;

@interface AWEFeedLiveTabDataApi : NSObject

@property (retain, nonatomic) HTSLiveFeedDataApi *feedApi;

+ (struct { id x0; id x1; })obtainRequestMetaInfoWith:(long long)a0 tabItem:(id)a1 enterFrom:(id)a2 enterMethod:(id)a3;
+ (id)feedAPIURLWithPullType:(long long)a0 tabItem:(id)a1 enterFrom:(id)a2 enterMethod:(id)a3 actionType:(id)a4;

- (void)requestLiveTabFollowUpVisitWithParams:(id)a0 completion:(id /* block */)a1;
- (void)requestLiveTabInfoWithType:(long long)a0 enterFrom:(id)a1 enterMethod:(id)a2 params:(id)a3 tabItem:(id)a4 completion:(id /* block */)a5;
- (void).cxx_destruct;
- (id)init;

@end
