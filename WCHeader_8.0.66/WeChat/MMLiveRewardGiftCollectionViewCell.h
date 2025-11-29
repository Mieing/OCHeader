@class UILongPressGestureRecognizer, UIImage, MMFinderLiveRewardGiftItem, MMFinderLiveTask, UIImageView, MMUIView, NSString, MMUILabel;
@protocol MMLiveRewardGiftCollectionViewCellDelegate;

@interface MMLiveRewardGiftCollectionViewCell : UICollectionViewCell <MMFinderLiveGiftResourceMgrExt, MMLiveRewardGiftNewCustomizationMagicRewardResExt>

@property (nonatomic) BOOL isPrepared;
@property (retain, nonatomic) UIImageView *thumbnailView;
@property (retain, nonatomic) UIImage *thumbnailImg;
@property (retain, nonatomic) MMUILabel *displayNameLabel;
@property (retain, nonatomic) MMUILabel *priceLabel;
@property (retain, nonatomic) UIImageView *coinIconView;
@property (retain, nonatomic) MMUILabel *giftCountLabel;
@property (retain, nonatomic) MMUIView *expireDaysContainerView;
@property (retain, nonatomic) MMUILabel *expireDaysLabel;
@property (retain, nonatomic) MMUIView *tagView;
@property (retain, nonatomic) MMUIView *tagBgView;
@property (retain, nonatomic) UIImageView *tagIconView;
@property (retain, nonatomic) MMUILabel *tagLabel;
@property (retain, nonatomic) UILongPressGestureRecognizer *sendButtonLongPressGesture;
@property (retain, nonatomic) MMFinderLiveRewardGiftItem *giftItem;
@property (readonly, nonatomic) MMFinderLiveTask *finderLiveTask;
@property (nonatomic) unsigned long long mode;
@property (weak, nonatomic) id<MMLiveRewardGiftCollectionViewCellDelegate> delegate;
@property (copy, nonatomic) id /* block */ longPressedCallback;
@property (nonatomic) BOOL disableGiftCountLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForReuse;
- (void)updateWithGiftItem:(id)a0 mode:(unsigned long long)a1;
- (void)preLoadNewCustomizationMagicResIfNeed;
- (id)getDefaultGiftThumbImage;
- (void)initUI;
- (void)layoutSubviews;
- (void)updateMagicRewardResourceExtRegister;
- (void)onLiveGiftResDownloadCompleted:(id)a0 retry:(unsigned long long)a1 totalLength:(unsigned long long)a2 resType:(long long)a3 productId:(id)a4 downloadUrl:(id)a5;
- (void)onMagicRewardResourceStateChanged:(unsigned long long)a0 resource:(id)a1;
- (BOOL)needShowActivityTag;
- (id)getGiftDisplayName:(id)a0;
- (id)getGiftTagIcon:(id)a0;
- (id)getGiftTag:(id)a0;
- (id)getGiftTagBg0Color:(id)a0;
- (id)getGiftTagBg1Color:(id)a0;
- (id)getGiftTagFontColor:(id)a0;
- (BOOL)isInFansGroup;
- (BOOL)isFansGroupGift:(id)a0;
- (BOOL)isJoinFansGroupGift:(id)a0;
- (BOOL)isSuperfanGift:(id)a0;
- (BOOL)isJoinFansGroupEntranceGift:(id)a0;
- (BOOL)isGiftNewCustomizeStyle;
- (unsigned int)getSelfIntimacyLevel;
- (unsigned int)getSelfGlobalLevel;
- (void)checkIsPrepared;
- (BOOL)checkNewCustomizationModelPrepared:(id)a0;
- (void)updateIsPrepared:(BOOL)a0;
- (void)updateUIForPrepareStateChange;
- (void)updateThumbnailImage;
- (void)onLongpressSendButton:(id)a0;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;

@end
