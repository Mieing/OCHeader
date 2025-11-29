@class NSString, NSMutableDictionary, MJStyleEditViewModel, MMUIView, MJStyleEditView, UICollectionView, MMUIButton, MJStyleEditToolBar;
@protocol MJStyleEditViewControllerDelegate;

@interface MJStyleEditViewController : UIViewController <MJStyleEditViewDelegate, UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) MJStyleEditView *stickerEditView;
@property (retain, nonatomic) MJStyleEditView *styleEditView;
@property (retain, nonatomic) UICollectionView *tabCollectionView;
@property (retain, nonatomic) MMUIView *seperatorLineView;
@property (retain, nonatomic) MJStyleEditToolBar *toolBar;
@property (retain, nonatomic) MMUIButton *applyToAllButton;
@property (retain, nonatomic) NSMutableDictionary *selectedIdxDict;
@property (weak, nonatomic) id<MJStyleEditViewControllerDelegate> delegate;
@property (readonly, nonatomic) MJStyleEditViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (void)viewDidLoad;
- (void)setupViews;
- (void)fetchDatas;
- (void)styleEditView:(id)a0 dataType:(unsigned long long)a1 didLoadedStyleAtIndex:(long long)a2 materialID:(id)a3 error:(id)a4;
- (long long)selectedIndexWithStyleEditView:(id)a0 dataType:(unsigned long long)a1;
- (void)styleEditView:(id)a0 needReloadData:(unsigned long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)reloadDataWithEditDataType:(unsigned long long)a0;
- (void)updateCellSelection;
- (id)selectedStickerID;
- (id)selectedFontName;
- (id)selectedColorID;
- (id)selectedAnimID;
- (id)genBtn;
- (void).cxx_destruct;

@end
