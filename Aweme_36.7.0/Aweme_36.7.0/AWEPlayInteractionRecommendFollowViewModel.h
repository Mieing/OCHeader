@interface AWEPlayInteractionRecommendFollowViewModel : AWEPlayInteractionPersonElementViewModel

- (void)trackInteractionRecommendFollowEventWithEvent:(id)a0 extraParams:(id)a1;
- (void)onInteractionRecommendFollowClicked;
- (void)reqeustUnfollow;
- (void)reqeustFollow;
- (long long)p_praPageTypeFromFriendRecommend:(id)a0;
- (void)autoShowRecommendCard;
- (void)onDislikeButtonClicked;
- (void)onUninterestButtonClicked;
- (void)requestFollowWithFriend;

@end
