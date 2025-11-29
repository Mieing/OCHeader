@class AWEFeedCellViewController, UIViewController;

@interface AWEFeedSimilarAdTableViewCell : AWEFeedViewCell {
    AWEFeedCellViewController *_viewController;
    UIViewController *_parentVC;
}

- (void)removeCellChildVCForMemoryOpt;
- (void)_removeChildVC;
- (void)_addChildVC;
- (void).cxx_destruct;
- (id)viewController;
- (id)parentVC;
- (void)setParentVC:(id)a0;

@end
