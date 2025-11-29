@class NSString, NSArray;

@interface AWEPreviewViewListContainerViewController : AWEBaseListViewController

@property (copy, nonatomic) NSString *bizUIName;
@property (retain, nonatomic) NSArray *viewList;

- (id)sectionControllerClassArray;
- (void)dataSourceDidCreateSectionController:(id)a0 forSectionViewModel:(id)a1;
- (id)initWithBizUIName:(id)a0 viewList:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidLoad;
- (void)setupUI;
- (void)setupCollectionView:(id)a0;

@end
