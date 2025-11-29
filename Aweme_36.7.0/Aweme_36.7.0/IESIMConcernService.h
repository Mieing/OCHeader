@class NSString;

@interface IESIMConcernService : HTSService <IESIMConcernService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clearSocialCountDemotionState;
- (void)block:(id)a0 completion:(id /* block */)a1;
- (void)unblock:(id)a0 completion:(id /* block */)a1;
- (BOOL)canShowFansTool;
- (long long)p_convertIESIMFollowFromPageType:(long long)a0;
- (void)p_follow:(id)a0 completion:(id /* block */)a1;
- (void)p_unfollow:(id)a0 completion:(id /* block */)a1;
- (void)followWithUser:(id)a0 fromPageType:(long long)a1 prePageType:(long long)a2 completion:(id /* block */)a3;
- (void)followWithUser:(id)a0 fromPageType:(long long)a1 prePageType:(long long)a2 referString:(id)a3 completion:(id /* block */)a4;
- (void)followWithUser:(id)a0 channelID:(long long)a1 fromPageType:(long long)a2 prePageType:(long long)a3 referString:(id)a4 completion:(id /* block */)a5;
- (void)followWithUser:(id)a0 needFakeFollow:(BOOL)a1 channelID:(long long)a2 fromPageType:(long long)a3 prePageType:(long long)a4 referString:(id)a5 completion:(id /* block */)a6;
- (void)unfollowWithUser:(id)a0 fromPageType:(long long)a1 prePageType:(long long)a2 completion:(id /* block */)a3;
- (void)unfollowWithUser:(id)a0 needFakeFollow:(BOOL)a1 fromPageType:(long long)a2 prePageType:(long long)a3 completion:(id /* block */)a4;
- (id)iesimConcernUserBlockSecondGenerationTips;
- (id)iesimConcernUserBlockSecondGenerationForXTips;

@end
