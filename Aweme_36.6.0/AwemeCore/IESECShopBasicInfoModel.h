@class NSString, IESECURLModel, IESECHeartDiamondCrownModel, IESECGoodsDetailAuthorReputationModel, NSArray, NSDictionary, IESECShopValueInfoItem, IESECShopTagListModel, IESECShopDisplayNameInfo, IESECShopHeaderStyleConfigModel;

@interface IESECShopBasicInfoModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long shopType;
@property (copy, nonatomic) NSString *shopId;
@property (copy, nonatomic) NSString *shopName;
@property (retain, nonatomic) IESECURLModel *shopLogo;
@property (retain, nonatomic) IESECGoodsDetailAuthorReputationModel *reputation;
@property (retain, nonatomic) IESECURLModel *brandTag;
@property (nonatomic) BOOL shouldShowSales;
@property (copy, nonatomic) NSDictionary *shopValueInfos;
@property (copy, nonatomic) NSArray *tagList;
@property (retain, nonatomic) IESECURLModel *shopLogoIcon;
@property (retain, nonatomic) IESECShopDisplayNameInfo *shopDisplayNameInfo;
@property (retain, nonatomic) IESECHeartDiamondCrownModel *heartDiamondCrownModel;
@property (retain, nonatomic) IESECShopHeaderStyleConfigModel *headerStyleConfig;
@property (copy, nonatomic) NSString *selfSupportText;
@property (copy, nonatomic) NSArray *shopSellingPointContents;
@property (copy, nonatomic) NSArray *shopValueInfoArray;
@property (retain, nonatomic) IESECShopTagListModel *topTagList;
@property (readonly, copy, nonatomic) IESECShopValueInfoItem *fansValueItem;
@property (readonly, copy, nonatomic) IESECShopValueInfoItem *salesValueItem;
@property (readonly, copy, nonatomic) IESECShopValueInfoItem *worksValueItem;
@property (readonly, copy, nonatomic) IESECShopValueInfoItem *listValueItem;
@property (readonly, copy, nonatomic) IESECShopValueInfoItem *serviceValueItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tagListJSONTransformer;
+ (id)shopTagsJSONTransformer;
+ (id)shopValueInfosJSONTransformer;
+ (id)shopValueInfoArrayJSONTransformer;
+ (id)shopSellingPointContentsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
