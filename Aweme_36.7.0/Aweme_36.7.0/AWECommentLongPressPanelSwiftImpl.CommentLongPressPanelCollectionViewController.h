@interface AWECommentLongPressPanelSwiftImpl.CommentLongPressPanelCollectionViewController : AWEBaseListViewController {
    void /* unknown type, empty encoding */ collectionView;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ memoryDetectSceneString;
}

+ (Class)viewModelClass;

- (void)customLayoutCollectionView:(id)a0;
- (id)sectionControllerClassArray;
- (void)dataSourceDidCreateSectionController:(id)a0 forSectionViewModel:(id)a1;
- (id)emptySectionsPlaceholderView;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)setupCollectionView:(id)a0;

@end
