@class NSString, AWEIMHalfScreenMuteSettingsViewModel;
@protocol IESIMConversationProtocol;

@interface AWEIMNewHalfScreenMuteSettingsViewController : AWEIMHalfScreenSettingsViewController <AWEIMHalfScreenMuteSettingsDelegate, AWEIMNewHalfScreenMuteSettingsCollectionViewCellDelegate>

@property (retain, nonatomic) id<IESIMConversationProtocol> con;
@property (retain, nonatomic) AWEIMHalfScreenMuteSettingsViewModel *viewModel;
@property (nonatomic) BOOL switchIsSelected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)containerOfViewControllerWithCon:(id)a0 extraParams:(id)a1;

- (void)halfScreenContainerVCWillDismiss:(id)a0;
- (void)didClickCell:(id)a0;
- (void)didTapOnEditBtn;
- (id)initWithCon:(id)a0 extraParams:(id)a1;
- (void)didSwitchClickSettingsCellViewModel:(id)a0;
- (void)dismissContainerWithAnimation:(BOOL)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)viewDidLoad;

@end
