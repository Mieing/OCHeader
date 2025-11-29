@class BDPPrivacyAccessInfo, UICollectionView, UILabel, NSDictionary, BDPUniqueID, UIView, UIButton, NSString, NSLayoutConstraint, UICollectionViewFlowLayout, BDPCustomMorePanelModel, NSArray, UIControl, BDPPageIndicator, UIImageView;
@protocol BDPFriendsShareViewPluginDelegate, BDPAwemeMorePanelPluginDelegate;

@interface BDPMorePanel_HG : BDPView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate, BDPAppInterfaceOrientationChangeMessage, BDPMorePanelInterface> {
    UICollectionView *_collectionView;
    UIControl *_privacyView;
    UIImageView *_privacyIconImageView;
    UILabel *_privacyTitleLabel;
    UIButton *_cancelButton;
    UIView *_developerView;
    UIView *_dimmingView;
    BDPPageIndicator *_pageIndicator;
    NSLayoutConstraint *_collectionViewHeightConstraint;
    NSLayoutConstraint *_buttonContainerTopSpaceConstraint;
    NSLayoutConstraint *_privacyViewTopSpaceConstraint;
    NSLayoutConstraint *_privacyViewHeightConstraint;
    UICollectionViewFlowLayout *_layout;
    id<BDPFriendsShareViewPluginDelegate> _friendsShareViewPlugin;
    id<BDPAwemeMorePanelPluginDelegate> _awemeMorePanelPlugin;
    UIView *_friendsShareView;
    UIView *_awemeMorePanel;
}

@property (copy, nonatomic) NSArray *pagedItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSArray *items;
@property (retain, nonatomic) BDPPrivacyAccessInfo *privacyInfo;
@property (copy, nonatomic) BDPUniqueID *uniqueID;
@property (copy, nonatomic) NSArray *firstRowItems;
@property (copy, nonatomic) NSArray *secondRowItems;
@property (retain, nonatomic) BDPCustomMorePanelModel *customModel;
@property (copy, nonatomic) NSDictionary *extraInfo;
@property (readonly, nonatomic) BOOL autoDismiss;

- (void)dismissAnimated:(BOOL)a0 complete:(id /* block */)a1;
- (void)showInView:(id)a0 animated:(BOOL)a1 complete:(id /* block */)a2;
- (void)onCancelButtonTap:(id)a0;
- (void)event:(id)a0 param:(id)a1;
- (void)setDeviceOrientationChange:(id)a0 targetOrientation:(long long)a1 uniqueID:(id)a2;
- (id)convertName:(id)a0;
- (void)onDimmingViewTap:(id)a0;
- (void)reloadCollectionData;
- (void)onPrivacyViewTap:(id)a0;
- (void)layoutUnderContainerView:(id)a0;
- (void)layoutOverContainerView:(id)a0;
- (void)showInView:(id)a0 withDimming:(BOOL)a1 animated:(BOOL)a2 complete:(id /* block */)a3;
- (void)trackerItems:(id)a0;
- (id /* block */)wrappedAction:(id /* block */)a0;
- (void)layoutCollectionAfterFirstFrame;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)dealloc;
- (void)setupUI;
- (void)handlePanGesture:(id)a0;
- (id)initWithUniqueID:(id)a0;

@end
