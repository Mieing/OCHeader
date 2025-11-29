@interface AWEIncentiveAssistantViewService : HTSService <HTSService, AWEIncentiveAssistantViewService>

- (void)setupTaskAssistantViewWithModel:(id)a0;
- (void)showTaskAssistantView;
- (void)hideTaskAssistantView;
- (void)popupTaskAssistantView;
- (void)setupClickCompletion:(id /* block */)a0;
- (void)setupCloseCompletion:(id /* block */)a0;
- (BOOL)isAssistantShowing;
- (void)setupAssertBarViewWithInitialModel:(id)a0 finalModel:(id)a1;
- (void)initAssertBarViewWithInitialModel:(id)a0;
- (void)updateAssertBarViewWithFinalModel:(id)a0;
- (void)showAssertBarView;
- (void)hideAssertBarView;
- (void)setupAssertBarSwipeCloseCallback:(id /* block */)a0;
- (void)registerFeedController:(id)a0;
- (id)init;

@end
