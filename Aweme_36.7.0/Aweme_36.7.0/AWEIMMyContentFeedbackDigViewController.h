@class UIView, NSString, AWEIMMessageBaseViewController, UIImageView, AWEUILoadingView, UIButton, AWEIMMyContentFeedbackDigListModel, UICollectionView, NSMutableSet, UILabel, NSDictionary;

@interface AWEIMMyContentFeedbackDigViewController : AWEIMHalfScreenContainerViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, AWERouterViewControllerProtocol>

@property (retain, nonatomic) UICollectionView *participantsCollectionView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *writeResponseButton;
@property (retain, nonatomic) UIButton *openMyContentVideoButton;
@property (retain, nonatomic) UIView *upPartingView;
@property (retain, nonatomic) UIView *downPartingView;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) UIView *loadFailView;
@property (retain, nonatomic) UIImageView *loadFailImage;
@property (retain, nonatomic) UIButton *retryButton;
@property (retain, nonatomic) UIView *emptyView;
@property (retain, nonatomic) UIImageView *emptyImage;
@property (retain, nonatomic) UILabel *emptyTitleLabel;
@property (retain, nonatomic) AWEIMMyContentFeedbackDigListModel *model;
@property (nonatomic) unsigned long long state;
@property (nonatomic) BOOL hasBuildFailView;
@property (nonatomic) BOOL hasBuildSuccessView;
@property (retain, nonatomic) NSMutableSet *participantsIdSet;
@property (copy, nonatomic) NSDictionary *routerParamDict;
@property (weak, nonatomic) AWEIMMessageBaseViewController *messageBaseVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)__fetchData;
- (void)__jumpToReply;
- (void)__addDataWithModel:(id)a0;
- (void)__setupFailUI;
- (void)__setupEmptyUI;
- (void)__setupSuccessUI;
- (void)__tryJumpToReply;
- (void)__openMyContentVideo;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)viewDidLoad;

@end
