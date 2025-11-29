@interface AWECommentPanelContainerSwiftImpl.CommentViewControllerPadAdapterModel : NSObject <AWECommentViewControllerPadAdapterProtocol> {
    void /* function */ shrinkVideoExtraParams;
    void /* function */ customViewWillAppearBlock;
    void /* function */ customViewDidDisappearBlock;
    void /* function */ customViewWillTransitionBlock;
    void /* function */ shouldOpenUserPageSplitScreen;
    void /* function */ openUserPageSplitScreen;
    void /* function */ customRestoreTabbarStateOnDismissingToFullScreenBlock;
    void /* function */ primaryViewScrollEnd;
}

@property (nonatomic) BOOL isPadSplitStyle;
@property (nonatomic) BOOL isShrinkVideo;
@property (nonatomic, copy) id /* block */ shrinkVideoExtraParams;
@property (nonatomic, copy) id /* block */ customViewWillAppearBlock;
@property (nonatomic, copy) id /* block */ customViewDidDisappearBlock;
@property (nonatomic, copy) id /* block */ customViewWillTransitionBlock;
@property (nonatomic, copy) id /* block */ shouldOpenUserPageSplitScreen;
@property (nonatomic, copy) id /* block */ openUserPageSplitScreen;
@property (nonatomic, copy) id /* block */ customRestoreTabbarStateOnDismissingToFullScreenBlock;
@property (nonatomic) BOOL splitPrimaryViewScrolling;
@property (nonatomic, copy) id /* block */ primaryViewScrollEnd;

- (void).cxx_destruct;
- (id)init;

@end
