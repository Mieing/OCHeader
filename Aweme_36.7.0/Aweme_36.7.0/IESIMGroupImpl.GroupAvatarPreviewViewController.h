@interface IESIMGroupImpl.GroupAvatarPreviewViewController : UIViewController <UINavigationControllerDelegate, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource> {
    void /* unknown type, empty encoding */ cellHeight;
    void /* unknown type, empty encoding */ photoLibraryViewController;
    void /* unknown type, empty encoding */ startPanGesturePosition;
    void /* unknown type, empty encoding */ lastPinchGesturePosition;
    void /* unknown type, empty encoding */ numberTouchesOfPinch;
    void /* unknown type, empty encoding */ standardTransform;
    void /* unknown type, empty encoding */ startPinchTimestamp;
    void /* unknown type, empty encoding */ transition;
    void /* unknown type, empty encoding */ avatarContainer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_avatarGestureView;
    void /* unknown type, empty encoding */ avatarImageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_menuCollectionView;
    void /* unknown type, empty encoding */ viewModel;
}

- (id)navigationController:(id)a0 animationControllerForOperation:(long long)a1 fromViewController:(id)a2 toViewController:(id)a3;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)handlePanGestureWithGesture:(id)a0;
- (void)handlePinchGestureWithGesture:(id)a0;
- (void)handleTapGestureWithGesture:(id)a0;
- (void)handlePublicAvatarEditPageSuccessNotiWithNoti:(id)a0;
- (void)naviBarCloseClick;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)dealloc;

@end
