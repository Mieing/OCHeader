@class AWEFollowListPageContext, AWEUILoadingView, NSString;

@interface AWERelationListViewController : AWEBaseListViewController <AWERelationListViewControllerProtocol>

@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (nonatomic) BOOL refreshing;
@property (retain, nonatomic) AWEFollowListPageContext *pageContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)viewDidLoad;
- (void)showLoadingView;
- (void)hideLoadingView;

@end
