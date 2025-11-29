@interface AWEStoryImpl.Story25FeedRichContainerDelegateController : AWEStoryKit.StoryKitBaseController <AFDRichContentContainerDelegate, AWEFeedTableViewCellControllerPlayerDelegate, AWEStoryKit.StoryKitViewControllerLifeCycle> {
    void /* unknown type, empty encoding */ isContainerScrolling;
}

- (void)updateCurrentAwemeModel:(id)a0;
- (void)didEndUpdateInteractionWithModel:(id)a0;
- (void)containerWillBeginDragging:(id)a0;
- (void)containerDidEndDragging:(id)a0;
- (void)containerDidReadyForDisplay:(id)a0;
- (void)videoPlayer:(id)a0 coverImageUpdateSuccess:(BOOL)a1 loadingTime:(double)a2 error:(id)a3;
- (id)init;
- (BOOL)isInteracting;

@end
