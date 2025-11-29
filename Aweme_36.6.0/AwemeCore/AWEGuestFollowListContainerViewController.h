@class NSString;

@interface AWEGuestFollowListContainerViewController : AWEBaseListViewController <AWEGuestTabItemViewControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)segmentedControlItem;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (void)duxGrid_viewDidChangeBreakPointFrom:(struct { long long x0; long long x1; })a0 toBreakPoint:(struct { long long x0; long long x1; })a1;
- (void)customLayoutCollectionView:(id)a0;
- (id)layoutForCollectionView;
- (id)sectionControllerClassArray;
- (void)bindViewModel;
- (void)viewDidLayoutSubviews;
- (BOOL)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (id)init;
- (void)viewDidLoad;
- (void)dealloc;
- (void)setupUI;
- (void)setupCollectionView:(id)a0;

@end
