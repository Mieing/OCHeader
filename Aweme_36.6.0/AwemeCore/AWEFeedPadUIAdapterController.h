@interface AWEFeedPadUIAdapterController : AWEBaseController

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastFrame;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (void)viewDidLoadAfterTableviewSetup;
- (void)configureCell:(id)a0 withModel:(id)a1 atIndexPath:(id)a2;
- (void)padScrollToCellNotification:(id)a0;
- (void)handleReplaceVideosWhenViewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)performPadViewTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (double)cellHeightForPadWithTransitionToSize:(struct CGSize { double x0; double x1; })a0;
- (id)replaceVideoConfig;
- (void)replaceVideosIfNeeded;
- (void)viewDidLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)dealloc;

@end
