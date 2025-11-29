@class UIView, ACCSlidingViewController, NSString, ACCSlidingTabbarView, AWEVideoPublishViewModel, ACCAlbumSelectTemplateNavigationView, ACCAlbumInputData, AWEAlbumSelectTemplateViewModel;

@interface AWEAlbumSelectTemplateViewController : UIViewController <ACCSlidingViewControllerDelegate, AWEAlbumSelectTemplateFeedViewControllerDelegate, ACCZoomContextOutterProviderProtocol>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) ACCAlbumSelectTemplateNavigationView *navigationView;
@property (retain, nonatomic) ACCSlidingViewController *slidingViewController;
@property (retain, nonatomic) ACCSlidingTabbarView *slidingTabView;
@property (nonatomic) unsigned long long currentSelectedVCIndex;
@property (retain, nonatomic) AWEAlbumSelectTemplateViewModel *viewModel;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (weak, nonatomic) ACCAlbumInputData *inputData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfControllers:(id)a0;
- (id)slidingViewController:(id)a0 viewControllerAtIndex:(long long)a1;
- (void)slidingViewController:(id)a0 didSelectIndex:(long long)a1;
- (void)slidingViewController:(id)a0 didFinishTransitionToIndex:(unsigned long long)a1;
- (void)closeAction:(id)a0;
- (id)acc_zoomTransitionStartViewForItemOffset:(long long)a0;
- (void)p_trackViewDidLoad;
- (void)viewController:(id)a0 collectionViewDidScroll:(id)a1;
- (void)viewController:(id)a0 didSelectItemForModel:(id)a1;
- (void)viewController:(id)a0 cellWillDisplay:(id)a1;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)setupUI;

@end
