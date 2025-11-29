@class AWEIMNewerHalfScreenMuteSettingsViewModel;

@interface AWEIMNewerHalfScreenMuteSettingsViewController : AWEIMHalfScreenSettingsViewController

@property (retain) AWEIMNewerHalfScreenMuteSettingsViewModel *viewModel;

+ (id)containerOfViewControllerWithCon:(id)a0 extraParams:(id)a1;

- (id)initWithCon:(id)a0 extraParams:(id)a1;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)viewDidLoad;

@end
