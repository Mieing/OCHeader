@class NSString;

@interface IESIMMessageTabJSRuntimeEventComponent : AWEIMComponentBase <AWEIMMessageTabPlusButtonAction>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)onTabBarDidChangeNotification:(id)a0;
- (void)plusPanelActionSheetWillShow;
- (void)plusPanelActionSheetDidHidden;
- (void)handleInteractionNoticeViewWillAppear;
- (void)handleInteractionNoticeViewWillDisappear;
- (void)handleFansAndRecommendViewWillAppear;
- (void)handleFansAndRecommendViewWillDisappear;
- (void)handleInteractionNoticeStreakMessageWillAppear:(id)a0;
- (void)handleMessageTabEventWithDidEnter:(BOOL)a0;
- (void)addObservers;

@end
