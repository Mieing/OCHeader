@class NSNumber, NSString, NSArray, IESECLiveGoodsCampaignModel, IESECLiveCardSkinModel, IESECLiveCardExtraModel, IESECLivePublicAreaInfo, IESECLivePopRoomInfo, IESECLiveCardExtendInfoModel, IESECLiveCardComponentInfoModel, IESECLiveCardViewIconModel, IESECLiveGoodsModel;

@interface IESECLiveCardDataModel : IESECLiveApiBaseModel

@property (retain, nonatomic) NSNumber *showDurationValue;
@property (nonatomic) BOOL isRelatedCard;
@property (retain, nonatomic) IESECLiveCardComponentInfoModel *componentInfo;
@property (retain, nonatomic) NSNumber *serverTime;
@property (retain, nonatomic) IESECLiveCardViewIconModel *cardIconInfo;
@property (copy, nonatomic) NSArray *goodsList;
@property (retain, nonatomic) IESECLiveGoodsModel *innerGoodsModel;
@property (retain, nonatomic) IESECLiveGoodsModel *goodsModel;
@property (retain, nonatomic) IESECLiveGoodsCampaignModel *campaign;
@property (retain, nonatomic) IESECLiveCardSkinModel *skin;
@property (retain, nonatomic) NSNumber *logicalClock;
@property (retain, nonatomic) NSNumber *carouselTime;
@property (retain, nonatomic) IESECLiveCardExtraModel *extra;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) long long roomType;
@property (retain, nonatomic) IESECLivePublicAreaInfo *publicArea;
@property (retain, nonatomic) IESECLivePopRoomInfo *popRoomInfo;
@property (retain, nonatomic) IESECLiveCardExtendInfoModel *extendInfoModel;
@property (copy, nonatomic) NSString *replaceRelatedInfo;
@property (nonatomic) long long responsePriority;

+ (id)campaignJSONTransformer;
+ (id)goodsListJSONTransformer;
+ (id)cardIconInfoJSONTransformer;
+ (id)componentInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)syncLogicalClock;
- (double)showDuration;
- (void).cxx_destruct;

@end
