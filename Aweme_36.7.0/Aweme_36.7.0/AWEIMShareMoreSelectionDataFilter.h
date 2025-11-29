@class IESIMShareMoreSelectionContext;

@interface AWEIMShareMoreSelectionDataFilter : NSObject

@property (weak, nonatomic) IESIMShareMoreSelectionContext *listContext;

- (id)p_filterGroupIfNeeded:(id)a0;
- (id)p_filterBAccountUserIfNeeded:(id)a0;
- (id)p_filterFansGroupIfNeeded:(id)a0;
- (id)p_filterFriensAndNormalGroupIfNeeded:(id)a0;
- (id)p_filterNotFollowStatusFriendsIfNeeded:(id)a0;
- (id)p_filterSelfIfNeeded:(id)a0;
- (id)p_filterSomeGroupIfNeeded:(id)a0;
- (id)p_filterPulicGroupIfNeeded:(id)a0;
- (id)p_filterRecentShareAndRecentChatDataWithShareLists:(id)a0;
- (id)p_filterMyFollowDataWithShareLists:(id)a0;
- (id)p_filterEmptyItemIfNeeded:(id)a0;
- (id)p_filterExclusionItemIfNeeded:(id)a0;
- (id)p_filterGroupFilterNotParticipantOrDissolve:(id)a0;
- (id)p_filterSelfForGameIncentiveIfNeeded:(id)a0;
- (id)p_filterExchangeIfNeeded:(id)a0;
- (id)filterWithFilterType:(long long)a0 models:(id)a1;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
