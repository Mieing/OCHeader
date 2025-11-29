@class UIView, NSString, UIImageView, AWEBaseListAdapterDataSource, IGListAdapter, UICollectionView, UILabel, AWEPadBaseSectionViewModel;
@protocol AWEPLVSectionViewModelProtocol;

@interface AWEPadSkyLightCardViewController : UIViewController <UIScrollViewDelegate, AWEBaseListViewControllerDataSource>

@property (retain, nonatomic) IGListAdapter *listAdapter;
@property (retain, nonatomic) AWEBaseListAdapterDataSource *dataSource;
@property (retain, nonatomic) NSString *sectionName;
@property (retain, nonatomic) AWEPadBaseSectionViewModel<AWEPLVSectionViewModelProtocol> *currentSectionViewModel;
@property (retain, nonatomic) UICollectionView *listView;
@property (retain, nonatomic) UIView *headerContainerView;
@property (retain, nonatomic) UIImageView *headerIconView;
@property (retain, nonatomic) UILabel *headerLabelView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)sectionViewModels;
- (id)sectionControllerClassArray;
- (void)setupListAdapter;
- (id)initWithSectionName:(id)a0;
- (void)updateSectionData:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
