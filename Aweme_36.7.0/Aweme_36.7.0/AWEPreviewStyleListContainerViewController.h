@class NSString, NSArray;

@interface AWEPreviewStyleListContainerViewController : AWEBaseListViewController

@property (copy, nonatomic) NSString *viewName;
@property (retain, nonatomic) NSArray *styleList;

- (id)sectionControllerClassArray;
- (id)initWithViewName:(id)a0 styleList:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidLoad;
- (void)dealloc;
- (void)setupUI;
- (void)setupCollectionView:(id)a0;

@end
