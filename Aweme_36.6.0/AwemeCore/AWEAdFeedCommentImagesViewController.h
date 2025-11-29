@class DUXBaseLabel, NSAttributedString, AWEAdImagesListConfiguration, UICollectionView, NSString, DUXBaseButton, YYLabel;

@interface AWEAdFeedCommentImagesViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UIGestureRecognizerDelegate, AWEPhotosPreviewFadeOutTransitionContextProvider>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWEAdImagesListConfiguration *config;
@property (retain, nonatomic) YYLabel *contentLabel;
@property (retain, nonatomic) DUXBaseButton *likeButton;
@property (retain, nonatomic) DUXBaseLabel *likeCountLabel;
@property (retain, nonatomic) DUXBaseButton *closeButton;
@property (retain, nonatomic) DUXBaseLabel *pageLabel;
@property (nonatomic) BOOL isLikeButtonAnimationing;
@property (retain, nonatomic) NSAttributedString *titleContentAttrText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)fadeOutTransitionAllowedTriggerDirection;
- (void)closeButtonClick;
- (void)updateLabelAndCurrentIndex;
- (void)packUpNormalCommentContent;
- (void)expandNormalCommentContent;
- (void)setupCloseButton;
- (void)setupPageLabel;
- (void)setupLikeCountLabel;
- (void)setupContentLabel;
- (void)setupLikeButton;
- (id)appendAttriStringWithFont:(id)a0;
- (void)updateContentLayout:(BOOL)a0;
- (void)likeButtonTapped:(id)a0;
- (void)updateLikStatus:(BOOL)a0 count:(id)a1;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)initWithConfiguration:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (double)contentWidth;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)setupCollectionView;
- (void)handleTap;

@end
