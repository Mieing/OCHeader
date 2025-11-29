@class NSString, IESECLiveGoodsListHeaderPromotionModel, IESECLiveGoodsListAuthorShopWindowInfo, NSArray, IESECLiveListHeaderExtraEntranceInfo, NSDictionary, IESECLiveListHeaderStyleControl, IESECLiveGoodsListBannerModel, IESECLiveGoodsListAuthorReputationModel, IESECLiveListHeaderSearchBarInfo, IESECLiveGoodsListAuthorShopInfo;

@interface IESECLiveListHeaderModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECLiveGoodsListHeaderPromotionModel *headerPromotion;
@property (copy, nonatomic) NSString *headBgColor;
@property (retain, nonatomic) IESECLiveListHeaderStyleControl *headerStyleControl;
@property (retain, nonatomic) IESECLiveGoodsListAuthorReputationModel *authorReputation;
@property (retain, nonatomic) IESECLiveGoodsListAuthorShopInfo *shopInfo;
@property (retain, nonatomic) IESECLiveGoodsListAuthorShopWindowInfo *shopWindowInfo;
@property (copy, nonatomic) NSDictionary *ritTags;
@property (copy, nonatomic) NSDictionary *platformTags;
@property (retain, nonatomic) IESECLiveListHeaderSearchBarInfo *searchBarInfo;
@property (retain, nonatomic) NSArray *entries;
@property (retain, nonatomic) IESECLiveListHeaderExtraEntranceInfo *extraEntranceInfo;
@property (retain, nonatomic) IESECLiveGoodsListBannerModel *bannerModel;
@property (copy, nonatomic) NSString *biz_title;
@property (copy, nonatomic) NSString *searchSchema;
@property (nonatomic) BOOL enterMergeShop;
@property (copy, nonatomic) NSString *callbackStr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)entriesJSONTransformer;
+ (id)ritTagsJSONTransformer;
+ (id)platformTagsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)entryOfType:(unsigned long long)a0;
- (void).cxx_destruct;

@end
