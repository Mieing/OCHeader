@class FinderFeedEcProductCard_BulkBuyDesc, EcsRichTextLabel, UICollectionView, MMWebImageView, ZZFLEXAngel;

@interface EcsFinderFeedBulkBuyInfoView : EcsFinderFeedSingleProductBaseView

@property (readonly, nonatomic) FinderFeedEcProductCard_BulkBuyDesc *bulkBuyInfo;
@property (retain, nonatomic) MMWebImageView *iconView;
@property (retain, nonatomic) EcsRichTextLabel *iconDescLabel;
@property (retain, nonatomic) UICollectionView *avatarView;
@property (retain, nonatomic) ZZFLEXAngel *avatarAngel;
@property (retain, nonatomic) EcsRichTextLabel *avatarDescLabel;

- (void)onViewSizeChanged;
- (void)setDataVM:(id)a0;
- (void)reloadAvatarData;
- (void)setupUI;
- (void).cxx_destruct;

@end
