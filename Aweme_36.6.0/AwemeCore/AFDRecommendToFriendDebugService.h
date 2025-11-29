@class NSString;

@interface AFDRecommendToFriendDebugService : NSObject <AFDRecommendToFriendDebugServiceProtocol>

@property (copy, nonatomic) NSString *guideRecommendTagNotShowReason;
@property (copy, nonatomic) NSString *guideButtonLoggedAwemeID;
@property (copy, nonatomic) NSString *guideButtonLoggedReferString;
@property (copy, nonatomic) NSString *recommendToFriendLoggedAwemeID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)logFriendRecommendTagNotShowReason:(id)a0 enterFrom:(id)a1 awemeID:(id)a2;
- (void)logGuideButtonIfNeeded:(id)a0 awemeID:(id)a1 referString:(id)a2;
- (void)logGuideRecommendTagNotShowReason:(id)a0 enterFrom:(id)a1 actionType:(id)a2 awemeID:(id)a3;
- (void)logPanelItemNotShowReason:(id)a0 enterFrom:(id)a1 panelType:(id)a2 awemeID:(id)a3;
- (void)logRecommendToFriendIfNeeded:(id)a0 awemeID:(id)a1;
- (id)debug_guideRecommendTagNotShowReason;
- (void)debug_clearTabGuideHasShown;
- (void)debug_resetCache;
- (void).cxx_destruct;

@end
