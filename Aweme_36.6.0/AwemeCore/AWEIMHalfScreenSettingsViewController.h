@class NSString, UICollectionView, NSDictionary, UILabel, AWEIMHalfScreenContainerViewController, UIButton;

@interface AWEIMHalfScreenSettingsViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, AWEIMHalfScreenContainerVCDelegate, AWEIMHalfScreenSettingsCollectionViewCellDelegate>

@property (weak, nonatomic) AWEIMHalfScreenContainerViewController *container;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *closeBtn;
@property (retain, nonatomic) UICollectionView *settingsCollectionView;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didClickCell:(id)a0;
- (void)didTapOnEditBtn;
- (void)__closeBtnClicked;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)setupUI;

@end
