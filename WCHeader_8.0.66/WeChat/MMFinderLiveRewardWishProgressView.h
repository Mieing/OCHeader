@class MMFinderLiveRewardWish, UIImageView, NSString, UIView, MMUILabel;

@interface MMFinderLiveRewardWishProgressView : UIView <MMFinderLiveGiftResourceMgrExt>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *thumbnailView;
@property (retain, nonatomic) MMUILabel *displayNameLabel;
@property (retain, nonatomic) MMUILabel *countLabel;
@property (retain, nonatomic) MMUILabel *fansBadgeLabel;
@property (retain, nonatomic) MMUILabel *giftDisableLabel;
@property (retain, nonatomic) MMFinderLiveRewardWish *wishGiftItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithWishGiftItem:(id)a0;
- (void)clearCurrentWishGiftItem;
- (id)getDefaultGiftThumbImage;
- (void)initUI;
- (void)layoutSubviews;
- (void)onLiveGiftResDownloadCompleted:(id)a0 retry:(unsigned long long)a1 totalLength:(unsigned long long)a2 resType:(long long)a3 productId:(id)a4 downloadUrl:(id)a5;
- (void).cxx_destruct;

@end
