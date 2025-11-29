@class CAGradientLayer, FinderLiveGiftWallInfo_GiftMetaInfo, MMFinderLiveTask, MMFinderLiveTaskId, UIView, MMWebImageView, MMUILabel;

@interface MMFinderLiveRewardGiftWallCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) MMWebImageView *thumbnailView;
@property (retain, nonatomic) MMUILabel *displayNameLabel;
@property (retain, nonatomic) MMUILabel *giftCountLabel;
@property (retain, nonatomic) UIView *topOneUserView;
@property (retain, nonatomic) CAGradientLayer *topOneUserGradientLayer;
@property (retain, nonatomic) MMWebImageView *topOneUserHeadImageView;
@property (retain, nonatomic) FinderLiveGiftWallInfo_GiftMetaInfo *giftMetaInfo;
@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (readonly, nonatomic) MMFinderLiveTask *finderLiveTask;
@property (readonly, nonatomic) BOOL isDarkMode;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForReuse;
- (void)updateWithGiftMetaInfo:(id)a0 taskId:(id)a1;
- (void)initUI;
- (void)layoutSubviews;
- (id)topOneUserHeadImage;
- (double)imageAlpha;
- (void).cxx_destruct;

@end
