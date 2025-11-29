@class FinderLiveAppMsgLiveRewardInfo, UIView, MMFinderLiveRewardGiftItem, NSString, PAGView, UIImageView, FinderJumpInfo, CAGradientLayer, MMUILabel;
@protocol MMFinderLiveNotifyGiftNotificationViewDelegate;

@interface MMFinderLiveNotifyGiftNotificationView : UIView <MMFinderLiveGiftResourceMgrExt>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UIView *gradientBackgroundView;
@property (retain, nonatomic) MMUILabel *descriptionLabel;
@property (retain, nonatomic) UIImageView *giftImageView;
@property (retain, nonatomic) PAGView *giftAnimationView;
@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) FinderJumpInfo *jumpInfo;
@property (retain, nonatomic) FinderLiveAppMsgLiveRewardInfo *rewardInfo;
@property (retain, nonatomic) MMFinderLiveRewardGiftItem *giftItem;
@property (weak, nonatomic) id<MMFinderLiveNotifyGiftNotificationViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)viewHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)updateWithJumpInfo:(id)a0;
- (void)loadAndPlayGiftAnimationWithPAGFile:(id)a0;
- (void)playGiftAnimation;
- (void)stopGiftAnimation;
- (void)updateDescriptionLabel:(id)a0;
- (void)onTap:(id)a0;
- (void)onLiveGiftResDownloadCompleted:(id)a0 retry:(unsigned long long)a1 totalLength:(unsigned long long)a2 resType:(long long)a3 productId:(id)a4 downloadUrl:(id)a5;
- (void).cxx_destruct;

@end
