@interface AWECommentMediaFeedService : NSObject <AWECommentMediaFeedServiceProtocol>

- (id)makeMediaFeed:(id)a0 params:(id)a1;
- (void)transferToCommentMediaFeedWithData:(id)a0 params:(id)a1;
- (void)enterMediaFeedVC:(id)a0 sceneType:(unsigned long long)a1 appearType:(unsigned long long)a2;
- (void)showMediaFeedForLandscape:(id)a0 commentPanelWidth:(double)a1;
- (void)showMediaFeedOnCurrentView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewController:(id)a1;
- (id)makePinchGuideAnimationViewWithConfig:(id)a0;
- (id)mediaFeedUserNameComponentView;
- (id)init;

@end
