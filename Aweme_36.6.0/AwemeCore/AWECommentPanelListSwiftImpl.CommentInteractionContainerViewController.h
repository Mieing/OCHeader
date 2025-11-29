@interface AWECommentPanelListSwiftImpl.CommentInteractionContainerViewController : AWEBaseListViewController <UIScrollViewDelegate, AWEListSectionControllerDelegate>

- (void)customLayoutCollectionView:(id)a0;
- (id)sectionControllerClassArray;
- (void)dataSourceDidCreateSectionController:(id)a0 forSectionViewModel:(id)a1;
- (void)commentLikeActionWithNoti:(id)a0;
- (void)commentDeleteActionWithNoti:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)setupCollectionView:(id)a0;

@end
