@interface AWEStory25PerformanceMonitorController : BDMultiContentContainer.BaseContentListController <BDMultiContentContainer.BaseContentListDataUpdateProtocol, AWEStory25PerformanceMonitorProtocol, AWEViewControllerLifeCycle> {
    void /* unknown type, empty encoding */ viewHasAppeared;
    void /* unknown type, empty encoding */ sessions;
    void /* unknown type, empty encoding */ currentItemID;
    void /* unknown type, empty encoding */ hasConfiguredStory;
}

- (void)onListDidReset;
- (void)onModelDidUpdateWithModel:(id)a0;
- (void)willConfigStory:(id)a0;
- (void)willDisplayStory:(id)a0;
- (void)didEndDisplayingStory:(id)a0;
- (void)story:(id)a0 coverImageUpdateSuccess:(BOOL)a1 loadingTime:(double)a2 error:(id)a3;
- (void)storyDidReadyForDisplay:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)viewWillAppear;
- (void)viewDidDisappear;

@end
