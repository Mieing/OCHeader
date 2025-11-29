@class UIView, AWERatingView, AWEAdEvaluateDetailViewModel, NSString, UIImageView, UIButton, AWEAdEvaluateTagLabelView, YYLabel, UICollectionView, UILabel;

@interface AWEAdEvaluateTableViewCell : UITableViewCell <UIGestureRecognizerDelegate, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) UIView *avatarBorderView;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *userNameLabel;
@property (retain, nonatomic) AWERatingView *starView;
@property (retain, nonatomic) YYLabel *rateCommentLabel;
@property (retain, nonatomic) YYLabel *commentContentLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UIButton *diggButton;
@property (retain, nonatomic) UILabel *diggCountLabel;
@property (retain, nonatomic) AWEAdEvaluateTagLabelView *tagLabel;
@property (retain, nonatomic) UICollectionView *imgContentView;
@property (retain, nonatomic) YYLabel *replyCommentLabel;
@property (retain, nonatomic) UIImageView *replyCommentAvatar;
@property (retain, nonatomic) UILabel *replyTitleLabel;
@property (retain, nonatomic) AWEAdEvaluateDetailViewModel *viewModel;
@property (nonatomic) long long showImageCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)getMutableHeightFromBottomToImage;
- (void)diggAction;
- (id)getGradientColorLayerWithSize:(struct CGSize { double x0; double x1; })a0 Image:(id)a1 StartWith:(id)a2 EndWith:(id)a3;
- (id)getCommentID;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)setupUI;
- (void)configureWithViewModel:(id)a0;

@end
