@class AWEPadSkyLightCardViewController, NSString, UIImageView, UICollectionView, UIView, AWEPadBaseSectionViewModel, AWEPadSkyLightTopBarViewModel;
@protocol AWEPLVSectionViewModelProtocol;

@interface AWEPadSkyLightTopBarViewController : UIViewController <UIScrollViewDelegate>

@property (retain, nonatomic) UICollectionView *listView;
@property (retain, nonatomic) UIImageView *backgroundImage;
@property (retain, nonatomic) UIView *sectionContainer;
@property (retain, nonatomic) AWEPadSkyLightCardViewController *liveContainerVC;
@property (retain, nonatomic) AWEPadSkyLightCardViewController *gameContainerVC;
@property (retain, nonatomic) AWEPadBaseSectionViewModel<AWEPLVSectionViewModelProtocol> *liveSectionData;
@property (retain, nonatomic) AWEPadBaseSectionViewModel<AWEPLVSectionViewModelProtocol> *gameSectionData;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastFrame;
@property (weak, nonatomic) AWEPadSkyLightTopBarViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initFetch;
- (void)setupListAdapter;
- (void)updatesectionContainerLayout;
- (void)setupSectionContainerForHorizontal;
- (void)updateSectionDatas:(id)a0 completion:(id /* block */)a1;
- (double)contentHeight;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)initWithViewModel:(id)a0;
- (void)viewDidLoad;
- (void)setupUI;

@end
