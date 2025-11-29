@interface AWEPlayVideoProfileTracker : AWEPlayVideoBaseTracker

- (id)paramsForVideoPlayTimeInPlayer:(id)a0 paramsModel:(id)a1;
- (id)paramsForTrackerIn:(id)a0 type:(long long)a1 paramsModel:(id)a2;
- (BOOL)isFromPostRecommendMixVideo:(id)a0;
- (BOOL)isFromPersonalHomepage:(id)a0;
- (BOOL)isFromOthersHomepage:(id)a0;
- (BOOL)isFromCollectionVideo:(id)a0;

@end
