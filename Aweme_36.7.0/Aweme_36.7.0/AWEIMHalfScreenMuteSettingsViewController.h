@class AWEIMHalfScreenContainerViewController, NSString, CAShapeLayer, UIButton, NSDictionary, UICollectionView, AWEIMHalfScreenMuteSettingsViewModel, UILabel;
@protocol IESIMConversationProtocol;

@interface AWEIMHalfScreenMuteSettingsViewController : UIViewController <AWEIMHalfScreenContainerVCDelegate, AWEIMHalfScreenMuteSettingsCollectionViewCellDelegate, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) id<IESIMConversationProtocol> con;
@property (retain, nonatomic) AWEIMHalfScreenMuteSettingsViewModel *viewModel;
@property (weak, nonatomic) AWEIMHalfScreenContainerViewController *container;
@property (retain, nonatomic) CAShapeLayer *shapeLayer;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *closeBtn;
@property (retain, nonatomic) UICollectionView *settingsCollectionView;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)containerOfViewControllerWithCon:(id)a0 extraParams:(id)a1;

- (void)halfScreenContainerVCWillDismiss:(id)a0;
- (void)__setupUI;
- (void)didTapOnEditBtn;
- (id)initWithCon:(id)a0 extraParams:(id)a1;
- (void)__closeBtnClicked;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)viewDidLoad;

@end
