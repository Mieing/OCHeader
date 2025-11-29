@interface AWEIndividualPlayManager : AWEIndividualBasePlayManager

- (BOOL)tryLoadNewRealWindow:(id /* block */)a0;
- (void)individualHandleRealWindow:(id)a0;
- (BOOL)shouldRootWindowVisible;
- (void)makeRootWindowUnVisibleIfNeeded;
- (void)makeRootWindowVisible;

@end
