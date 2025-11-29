@class IESECGoodsDetailAuthorShopEntryModel, NSString, IESECURLModel, IESECGoodsDetailAuthorLiveEntryModel, IESECGoodsRankListEntryModel, IESECGoodsDetailAuthorShopBindAuthorModel, IESECGoodsEntryModel;

@interface IESECGoodsDetailAuthorEntriesModel : MTLModel <IESECGoodsDetailShopEntryModel, MTLJSONSerializing>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) IESECGoodsDetailAuthorShopEntryModel *cachedMixModel;
@property (retain, nonatomic) IESECURLModel *avatar;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *originName;
@property (retain, nonatomic) IESECGoodsDetailAuthorLiveEntryModel *live;
@property (retain, nonatomic) IESECGoodsRankListEntryModel *rankListEntryModel;
@property (retain, nonatomic) IESECGoodsDetailAuthorShopBindAuthorModel *referrer;
@property (retain, nonatomic) IESECGoodsDetailAuthorShopEntryModel *store;
@property (retain, nonatomic) IESECGoodsDetailAuthorShopEntryModel *shop;
@property (retain, nonatomic) IESECGoodsDetailAuthorShopBindAuthorModel *shopBindAuthor;
@property (retain, nonatomic) IESECGoodsEntryModel *goods3DEntry;
@property (retain, nonatomic) IESECGoodsEntryModel *goodsAREntry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)brandInfo;
- (long long)goodsCount;
- (id)promotionInfos;
- (long long)toutiaoGoodsCount;
- (long long)recommendGoodsCount;
- (id)sellRatingInfo;
- (id)shopHeaderIconList;
- (id)shopMarketingBanner;
- (BOOL)followStatus;
- (void).cxx_destruct;
- (id)name;
- (id)nameSuffix;
- (id)buttonTitle;
- (id)originName;
- (id)avatar;
- (id)URLScheme;
- (BOOL)isStore;
- (id)authorID;

@end
