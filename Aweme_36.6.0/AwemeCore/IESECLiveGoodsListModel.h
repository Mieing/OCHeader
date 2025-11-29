@class IESECLiveGoodsListBannerModel, IESECLiveGoodsListAuthorReputationModel, IESECLiveGoodsListAuthorShopInfo, IESECLiveGoodsListAuthorShopWindowInfo, NSDictionary, IESECLiveRoomCart, IESECLiveGoodsListApplyResp, IESECLiveAnchorOrderLimitModel, NSString, IESECLiveListBottomGuideModel, IESECLiveListHeaderModel, IESECLiveGoodsListHeaderPromotionModel, IESECLiveGoodsListAskExplainPopInfoModel, NSArray, NSNumber, IESECLiveAnchorBubbleInfoModel, IESECLivePickedGoodsListExtraModel, IESECLiveReplayFlow;

@interface IESECLiveGoodsListModel : IESECLiveApiBaseModel

@property (retain, nonatomic) IESECLiveReplayFlow *replayFlow;
@property (retain, nonatomic) IESECLivePickedGoodsListExtraModel *extra;
@property (nonatomic) BOOL commentaryVideoAuth;
@property (nonatomic) long long anchorTransDataSetting;
@property (retain, nonatomic) IESECLiveGoodsListAskExplainPopInfoModel *askExplainPopInfo;
@property (nonatomic) BOOL askExplainAuth;
@property (retain, nonatomic) IESECLiveAnchorOrderLimitModel *anchorOrderLimitInfo;
@property (retain, nonatomic) IESECLiveAnchorBubbleInfoModel *bubbleInfo;
@property (retain, nonatomic) NSNumber *serverTime;
@property (nonatomic) long long roomType;
@property (nonatomic) long long hourBuyShopMatchStatus;
@property (copy, nonatomic) NSString *hourBuyShopID;
@property (nonatomic) long long cartAddEnhanceStyle;
@property (retain, nonatomic) IESECLiveGoodsListApplyResp *applyResp;
@property (copy, nonatomic) NSString *bottomTitle;
@property (retain, nonatomic) NSString *bottomEndTitle;
@property (retain, nonatomic) IESECLiveListBottomGuideModel *bottomGuideInfo;
@property (retain, nonatomic) NSNumber *expireTime;
@property (retain, nonatomic) NSArray *tabModels;
@property (nonatomic) unsigned long long tabValidMinGoodsCount;
@property (copy, nonatomic) NSString *currentPromotionId;
@property (retain, nonatomic) IESECLiveListHeaderModel *header;
@property (retain, nonatomic) IESECLiveGoodsListHeaderPromotionModel *headerPromotion;
@property (retain, nonatomic) NSArray *entries;
@property (retain, nonatomic) IESECLiveGoodsListBannerModel *bannerModel;
@property (retain, nonatomic) IESECLiveGoodsListAuthorReputationModel *authorReputation;
@property (retain, nonatomic) IESECLiveGoodsListAuthorShopInfo *shopInfo;
@property (retain, nonatomic) IESECLiveGoodsListAuthorShopWindowInfo *shopWindowInfo;
@property (copy, nonatomic) NSDictionary *ritTags;
@property (nonatomic) BOOL showCart;
@property (retain, nonatomic) IESECLiveRoomCart *roomCart;
@property (nonatomic) long long searchButtonStyle;
@property (copy, nonatomic) NSString *searchSchema;
@property (copy, nonatomic) NSString *biz_title;
@property (nonatomic) long long totalGoodsCount;
@property (copy, nonatomic) NSArray *goodsList;
@property (nonatomic) long long showAuthorConnect;

+ (id)entriesJSONTransformer;
+ (id)goodsListJSONTransformer;
+ (id)applyRespJSONTransformer;
+ (id)tabModelsJSONTransformer;
+ (id)ritTagsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
