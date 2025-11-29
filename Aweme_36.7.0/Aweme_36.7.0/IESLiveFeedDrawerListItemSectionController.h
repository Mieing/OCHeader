@class TabItem, IESLiveFeedDrawerViewControllerContext;

@interface IESLiveFeedDrawerListItemSectionController : IGListSectionController

@property (retain, nonatomic) TabItem *tabConfig;
@property (retain, nonatomic) IESLiveFeedDrawerViewControllerContext *context;

- (void)refreshLayout:(BOOL)a0;
- (void)trackCellWillShow;
- (void).cxx_destruct;
- (id)init;

@end
