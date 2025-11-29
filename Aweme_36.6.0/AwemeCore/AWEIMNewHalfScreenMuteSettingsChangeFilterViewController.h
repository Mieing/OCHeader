@class NSString, AWEIMHalfScreenMuteSettingsViewModel;

@interface AWEIMNewHalfScreenMuteSettingsChangeFilterViewController : AWEIMHalfScreenSettingsChangeFilterViewController <AWEIMHalfScreenMuteSettingsCellDelegate>

@property (retain, nonatomic) AWEIMHalfScreenMuteSettingsViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)confirmBtnClicked;
- (void)didClickCell:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)initWithViewModel:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;

@end
