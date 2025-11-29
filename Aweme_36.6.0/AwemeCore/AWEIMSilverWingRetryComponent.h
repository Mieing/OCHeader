@interface AWEIMSilverWingRetryComponent : AWEIMFlexComponent

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)p_addKVO;
- (void)p_createPresenterIfNeed;
- (void)p_updatePresenter;
- (void)p_trackRetryWithEvent:(id)a0;
- (void)p_reloadCurrentCell;
- (BOOL)p_canShowRetry;
- (BOOL)p_shouldGrayRetry;
- (void)p_didTapRetry;
- (void)p_requestRetry;
- (void)p_composeProvider:(id)a0;
- (id)p_getRetryMessages;

@end
