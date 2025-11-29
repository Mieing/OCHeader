@class AWEIMChatRecommendVideoCollectionViewCell, NSString, AWEIMChatRecommendVideoContentView, NSIndexPath;

@interface AWEIMChatRecVideoUIComponent : AWEIMComponentBase <AWEIMChatRecVideoUIInterface, AWEIMChatRecVideoUIEvent, AWEIMChatRecVideoDataEvent, AWEAwemeDetailTableViewControllerDelegate>

@property (weak, nonatomic) AWEIMChatRecommendVideoContentView *contentView;
@property (copy, nonatomic) NSIndexPath *clickedIndexPath;
@property (weak, nonatomic) AWEIMChatRecommendVideoCollectionViewCell *clickedCell;
@property (weak, nonatomic) AWEIMChatRecommendVideoCollectionViewCell *presentingCell;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)zoomTransitionStartViewForOffset:(long long)a0;
- (double)zoomTransitionTargetViewCornerRadius;
- (double)detailTableViewControllerInitialSeekTime:(id)a0;
- (void)detailTableViewControllerDidDisappear:(id)a0 currentAwemeModel:(id)a1;
- (id)modernTransitionContext;
- (void)modernTransitionUpdateOffset:(long long)a0 isScrolled:(BOOL)a1;
- (void)componentDidMounted:(id)a0;
- (void)showQuickReplyController;
- (void)app_willResignActive;
- (void)app_didBecomeActive;
- (id)getContentViewOfType:(unsigned long long)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)enterFullScreenOfCell:(id)a0 atIndexpath:(id)a1;
- (void)didClickChatButtonAtIndexPath:(id)a0;
- (void)containerVC_willDismiss;
- (void)awemeModelDidSent:(id)a0 atIndexPath:(id)a1;
- (void).cxx_destruct;

@end
