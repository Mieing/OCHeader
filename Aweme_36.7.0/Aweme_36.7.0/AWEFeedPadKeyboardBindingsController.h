@interface AWEFeedPadKeyboardBindingsController : AWEBaseController

@property (nonatomic) BOOL interactionDisable;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (void)openSplitScreenWithViewController:(id)a0 enterMethod:(id)a1;
- (void)viewDidLoadAfterTableviewSetup;
- (void)dismissSharePanel;
- (id)trackCommonParams;
- (id)splitController;
- (void)registerKeyboardBindings;
- (void)trackKeyEvent:(id)a0 key:(id)a1 clickType:(id)a2;
- (void)gotoUserProfile;
- (void)enableInteractionController:(BOOL)a0 forCell:(id)a1;
- (BOOL)isFeedOnScreen;
- (void)trackKeyboardUserGuidShow;
- (BOOL)scrollToPre;
- (void)dismissSharePanelWithCompletion:(id /* block */)a0;
- (void)disLikeLiveCell;
- (void)dislikeNormarlCell;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (BOOL)scrollToNext;

@end
