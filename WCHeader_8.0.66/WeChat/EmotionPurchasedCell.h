@class NSString, MMEmoticonStoreDownloadLogic, MMWebImageView, EmoticonStoreItem, UILabel;

@interface EmotionPurchasedCell : MMTableViewCell <MMEmoticonStoreDownloadLogicDelegate>

@property (retain, nonatomic) EmoticonStoreItem *item;
@property (retain, nonatomic) MMEmoticonStoreDownloadLogic *downloadLogic;
@property (retain, nonatomic) MMWebImageView *webImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *priceLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setEmotionStoreItem:(id)a0;
- (void)configureCellWithItem:(id)a0 andLabelMaxWidth:(double)a1;
- (void)layoutSubviews;
- (void)createOrUpdateLayout;
- (void)makeImageViewWithItem:(id)a0;
- (void)makePackNameLabelWithItem:(id)a0;
- (void)makePriceLabelWith:(id)a0;
- (void)makeTimeLabel:(id)a0;
- (void)initDownloadLogic;
- (void)onTapGetEmoticonBtnFor:(unsigned long long)a0;
- (void)onDownloadFinished;
- (void)onStoreDownloadLogicDisplayViewChanged;
- (double)downloadViewMaxWidth;
- (void).cxx_destruct;

@end
