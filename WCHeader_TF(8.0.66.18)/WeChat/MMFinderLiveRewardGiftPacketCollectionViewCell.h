@class MMFinderLiveTask, NSString, UIImageView, MMFinderLiveGiftPacketViewModel, MMUILabel;
@protocol MMFinderLiveRewardGiftPacketCollectionViewCellDelegate;

@interface MMFinderLiveRewardGiftPacketCollectionViewCell : UICollectionViewCell <MMFinderLiveGiftResourceMgrExt>

@property (retain, nonatomic) UIImageView *thumbnailView;
@property (retain, nonatomic) MMUILabel *displayNameLabel;
@property (retain, nonatomic) MMUILabel *priceLabel;
@property (retain, nonatomic) UIImageView *coinIconView;
@property (retain, nonatomic) MMUILabel *giftCountLabel;
@property (retain, nonatomic) MMUILabel *badgeLabel;
@property (retain, nonatomic) MMFinderLiveGiftPacketViewModel *viewModel;
@property (readonly, nonatomic) MMFinderLiveTask *finderLiveTask;
@property (weak, nonatomic) id<MMFinderLiveRewardGiftPacketCollectionViewCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForReuse;
- (void)updateWithViewModel:(id)a0;
- (id)getDefaultGiftThumbImage;
- (void)initUI;
- (void)layoutSubviews;
- (void)onLiveGiftResDownloadCompleted:(id)a0 retry:(unsigned long long)a1 totalLength:(unsigned long long)a2 resType:(long long)a3 productId:(id)a4 downloadUrl:(id)a5;
- (id)getGiftDisplayName:(id)a0;
- (id)getGiftIconImage:(id)a0;
- (id)getGiftDiscription:(id)a0;
- (id)getGiftDescriptionFont:(id)a0;
- (void).cxx_destruct;

@end
