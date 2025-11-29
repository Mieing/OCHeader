@class NSMutableArray;

@interface AWETeenFeedPadAdaptController : AWETeenFeedBaseController

@property (nonatomic) BOOL isViewTransitionInProgress;
@property (nonatomic) struct CGSize { double width; double height; } willTransitionToSize;
@property (retain, nonatomic) NSMutableArray *viewTransitionInvalidIndexPaths;

- (void)performPadViewTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (double)cellHeightForPadWithTransitionToSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (double)cellHeight;

@end
