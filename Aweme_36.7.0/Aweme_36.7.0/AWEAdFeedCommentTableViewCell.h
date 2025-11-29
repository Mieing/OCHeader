@class UIView, NSString, DUXBaseLabel, UIImageView, UIButton, YYLabel, UICollectionView, AWEAdFeedCommentDetailViewModel, UILabel, AWEAdFeedCommentImagesViewController;

@interface AWEAdFeedCommentTableViewCell : UITableViewCell <UIGestureRecognizerDelegate, UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UIView *avatarBorderView;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *userNameLabel;
@property (retain, nonatomic) YYLabel *commentDescLabel;
@property (retain, nonatomic) YYLabel *commentContentLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UILabel *replyLabel;
@property (retain, nonatomic) UIButton *likeButton;
@property (retain, nonatomic) UILabel *likeCountLabel;
@property (retain, nonatomic) AWEAdFeedCommentDetailViewModel *viewModel;
@property (retain, nonatomic) UICollectionView *imagesCollectionView;
@property (weak, nonatomic) AWEAdFeedCommentImagesViewController *previewController;
@property (retain, nonatomic) DUXBaseLabel *appendDateLabel;
@property (retain, nonatomic) YYLabel *appendCommentContentLabel;
@property (retain, nonatomic) UICollectionView *appendImagesCollectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onFeedCommentUIThemeChangeNotification;
- (void)likeButtonTapped:(id)a0;
- (void)updateLikeButtonWithStatus:(BOOL)a0;
- (void)updateImagelistAndAppendUI;
- (id)imageListWithCollectionView:(id)a0;
- (void)imageClickedWithIndex:(long long)a0 imageList:(id)a1 content:(id)a2;
- (void)addTapAction:(id /* block */)a0 withLabel:(id)a1;
- (id)createImageListView;
- (void)animateUpdateCommentContentLabel;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)setupUI;
- (void)configureWithViewModel:(id)a0;

@end
