@class IESECShopDynamicTabConfigModel, NSString, NSArray, IESECShopTabStyleInfo, IESECShopTabBadgeInfo, IESECShopDynamicTabDataModel, NSDictionary, IESECListKitListModel, NSNumber, IESECShopBizExtraModel;

@interface IESECShopTabModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long tabType;
@property (nonatomic) unsigned long long tabContainerType;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSNumber *activated;
@property (copy, nonatomic) NSString *passThroughFE;
@property (copy, nonatomic) NSArray *subTabArray;
@property (copy, nonatomic) NSString *jumpURL;
@property (nonatomic) unsigned long long selectedSubTabType;
@property (copy, nonatomic) NSString *bundleUrl;
@property (copy, nonatomic) NSString *tmpId;
@property (retain, nonatomic) IESECShopTabStyleInfo *tabStyleInfo;
@property (retain, nonatomic) IESECShopTabBadgeInfo *tabBadgeInfo;
@property (copy, nonatomic) NSArray *goodsList;
@property (copy, nonatomic) NSArray *goodsTypes;
@property (copy, nonatomic) NSArray *sortTypes;
@property (copy, nonatomic) NSArray *pickTypes;
@property (copy, nonatomic) NSDictionary *bizExtraDic;
@property (copy, nonatomic) NSDictionary *extraStatus;
@property (retain, nonatomic) IESECShopBizExtraModel *bizExtra;
@property (copy, nonatomic) NSArray *selectButtons;
@property (copy, nonatomic) NSString *toast;
@property (copy, nonatomic) NSString *innerflowSchema;
@property (copy, nonatomic) NSString *tabHintText;
@property (retain, nonatomic) NSNumber *tabHintDuration;
@property (copy, nonatomic) NSArray *componentBriefList;
@property (copy, nonatomic) NSArray *isvComponentBundleURLs;
@property (nonatomic) long long cursor;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSNumber *productLayout;
@property (copy, nonatomic) NSNumber *forcedProductLayout;
@property (retain, nonatomic) IESECShopDynamicTabDataModel *data;
@property (retain, nonatomic) IESECShopDynamicTabConfigModel *config;
@property (nonatomic) BOOL isLiveShow;
@property (nonatomic) long long liveStyle;
@property (nonatomic) unsigned long long prehotScene;
@property (retain, nonatomic) NSArray *componentVersions;
@property (copy, nonatomic) NSDictionary *videoProduct;
@property (copy, nonatomic) NSDictionary *tabProduct;
@property (retain, nonatomic) IESECListKitListModel *hybridList;
@property (copy, nonatomic) NSString *paginationParams;
@property (copy, nonatomic) NSString *hybridParams;
@property (copy, nonatomic) NSString *benefitType;
@property (copy, nonatomic) NSString *benefitDesc;
@property (copy, nonatomic) NSString *indicatorColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)goodsListJSONTransformer;
+ (BOOL)isSelectionTab:(unsigned long long)a0;
+ (id)pickTypesJSONTransformer;
+ (id)goodsTypesJSONTransformer;
+ (id)sortTypesJSONTransformer;
+ (id)selectButtonsJSONTransformer;
+ (id)tabNameForTrack:(unsigned long long)a0;
+ (id)componentBriefListJSONTransformer;
+ (id)subTabArrayJSONTransformer;
+ (id)componentVersionsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

@end
