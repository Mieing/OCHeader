@class NSString;

@interface AFDRecommendToFriendService : HTSService <AFDRecommendToFriendService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (id)dataService;
- (id)userService;
- (Class)visibilityService;
- (Class)trackerService;
- (id)debugService;
- (Class)longPressAndSharePanelManager;
- (Class)guideRecommendTagManager;
- (Class)friendRecommendTagManager;
- (Class)recommendPanelManager;
- (Class)recommendWorkTabManager;
- (id)recommendVisibleManager;
- (Class)recommendPostcriptManager;
- (id)guideRecommendTagShowRuleManager;

@end
