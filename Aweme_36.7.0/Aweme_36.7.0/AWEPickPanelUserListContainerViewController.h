@class NSDictionary, AWEAwemeModel;

@interface AWEPickPanelUserListContainerViewController : AWEBaseListViewController

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) id /* block */ syncPickedCountBlock;

+ (Class)viewModelClass;

- (id)layoutForCollectionView;
- (id)sectionControllerClassArray;
- (void)dataSourceDidCreateSectionController:(id)a0 forSectionViewModel:(id)a1;
- (void)setupBind;
- (id)initWithAwemeModel:(id)a0 params:(id)a1;
- (void)updateUserListWithPickStatus:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidLoad;
- (void)setupUI;
- (void)setupData;
- (void)setupCollectionView:(id)a0;

@end
