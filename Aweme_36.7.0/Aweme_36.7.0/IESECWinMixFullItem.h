@class NSDictionary, IESECWinHeaderFollowBuyModel, IESECWinLivingTitleModel, IESECWinLivingHotProductListModel, NSString, IESECWinHeaderFansCommentsModel, IESECWinVideoProductHangingModel, IESECWinHintBarModel, IESECWinLivingLatestInfoModel, IESECShopRecommendMallResponse, IESECWinLivingOrderModel, IESECWinVideoModel, IESECWinLivingProductModel, IESECWinHeaderBubbleModel, IESECWinLynxCardResponse, IESECWinReplayCollectionModel, IESECWinRecommendStoreModel, IESECRelationGoodsModel, IESECWinHeaderSectionStyle, IESECWinLivingAnchorBottomModel, IESECWinHeaderAuthorModel, IESECWinSyncProductModel;

@interface IESECWinMixFullItem : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long itemType;
@property (retain, nonatomic) IESECWinHeaderAuthorModel *author;
@property (retain, nonatomic) IESECWinHeaderFollowBuyModel *followBuy;
@property (retain, nonatomic) IESECWinHeaderFansCommentsModel *comments;
@property (retain, nonatomic) IESECWinHeaderBubbleModel *bubbles;
@property (retain, nonatomic) IESECWinHeaderSectionStyle *sectionStyle;
@property (retain, nonatomic) IESECWinReplayCollectionModel *replayCollection;
@property (retain, nonatomic) IESECRelationGoodsModel *product;
@property (retain, nonatomic) IESECWinVideoProductHangingModel *videoProductCard;
@property (retain, nonatomic) IESECWinVideoModel *video;
@property (retain, nonatomic) IESECWinLivingOrderModel *order;
@property (retain, nonatomic) IESECWinLivingTitleModel *hotTitle;
@property (retain, nonatomic) IESECWinLivingProductModel *liveProduct;
@property (retain, nonatomic) IESECWinRecommendStoreModel *recommendStore;
@property (retain, nonatomic) IESECShopRecommendMallResponse *recommendMall;
@property (retain, nonatomic) IESECWinSyncProductModel *syncProducts;
@property (retain, nonatomic) IESECWinLynxCardResponse *lynxCommonCard;
@property (retain, nonatomic) IESECWinLivingLatestInfoModel *liveHotLatestInfo;
@property (retain, nonatomic) IESECWinLivingHotProductListModel *liveHotProducts;
@property (retain, nonatomic) IESECWinLivingAnchorBottomModel *anchorBottomItem;
@property (copy, nonatomic) NSDictionary *dynamicInsertCardInfo;
@property (nonatomic) long long anchorPosition;
@property (copy, nonatomic) NSString *anchorTarget;
@property (nonatomic) BOOL isInsertCard;
@property (nonatomic) BOOL hasInsertCard;
@property (retain, nonatomic) IESECWinLynxCardResponse *lynxExtensionCard;
@property (retain, nonatomic) IESECWinHintBarModel *hintBar;
@property (nonatomic) long long itemIndex;
@property (copy, nonatomic) NSDictionary *uiLogExtra;
@property (nonatomic) double nativeContentHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
