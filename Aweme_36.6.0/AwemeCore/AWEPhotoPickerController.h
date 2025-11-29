@class AWEPhotoPickerModel, NSString, UICollectionView, UIView, UIButton;
@protocol AWEPhotoPickerControllerDelegate;

@interface AWEPhotoPickerController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) AWEPhotoPickerModel *photoPickerModel;
@property (nonatomic) BOOL multiSelectionEnabled;
@property (nonatomic) BOOL hasUpdated;
@property (weak, nonatomic) id<AWEPhotoPickerControllerDelegate> delegate;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIButton *textEditButton;
@property (retain, nonatomic) UIButton *plusButton;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIButton *circularFinishButton;
@property (retain, nonatomic) UIButton *rectangleFinishButton;
@property (nonatomic) BOOL enableTextEdit;
@property (nonatomic) BOOL enableShowLivePhotoIcon;
@property (nonatomic) long long maxSelectionCount;
@property (nonatomic) long long minSelectionCount;
@property (nonatomic) double firstLoadTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)makeConstraint;
- (void)onPlusButtonPressed:(id)a0;
- (void)loadFinishSelectionButton;
- (void)scrollSelectedToCenterAnimated:(BOOL)a0;
- (void)updateMultiSelectionFinishButtonStatus;
- (void)onMultiSelectionFinishButtonClicked:(id)a0;
- (void)onTextPlusButtonPressed:(id)a0;
- (id)initWithResourceType:(unsigned long long)a0 enableMultiSelection:(BOOL)a1;
- (void)updateViewForExposedPanelLayoutManager:(BOOL)a0;
- (void)reloadData;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)setupViews;

@end
