@class NSString, AWELifeShelfCardListItemMiniCardExtra, AWELifeShelfCardListItemCardData, NSDictionary, AWELiveShelfCellViewModel, NSNumber, AWELiveShelfListGoodsCellModel;

@interface AWELifeShelfCardListItem : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSNumber *transformType;
@property (copy, nonatomic) NSString *cardId;
@property (nonatomic) long long cloneFlag;
@property (copy, nonatomic) NSString *cardUrl;
@property (copy, nonatomic) NSString *componentId;
@property (copy, nonatomic) NSString *lynxUrl;
@property (copy, nonatomic) NSString *webUrl;
@property (copy, nonatomic) NSString *placeOrderUrl;
@property (retain, nonatomic) AWELifeShelfCardListItemMiniCardExtra *miniCardExtra;
@property (copy, nonatomic) NSNumber *componentSubType;
@property (copy, nonatomic) NSNumber *componentType;
@property (copy, nonatomic) NSNumber *createTime;
@property (copy, nonatomic) NSNumber *isAggCard;
@property (copy, nonatomic) NSNumber *isSelected;
@property (copy, nonatomic) NSNumber *isShowing;
@property (nonatomic) unsigned long long liveCardType;
@property (copy, nonatomic) NSNumber *source;
@property (retain, nonatomic) AWELifeShelfCardListItemCardData *cardData;
@property (copy, nonatomic) NSString *cliExtra;
@property (copy, nonatomic) NSDictionary *extraLog;
@property (retain, nonatomic) AWELiveShelfCellViewModel *localLifeViewModel;
@property (retain, nonatomic) AWELiveShelfListGoodsCellModel *cellModel;
@property (copy, nonatomic) NSString *originIndex;
@property (nonatomic) long long nativeListIndex;
@property (copy, nonatomic) NSNumber *currentOrder;
@property (nonatomic) BOOL isUIShowing;
@property (nonatomic) BOOL hasUpdateData;
@property (nonatomic) BOOL isCopyed;
@property (weak, nonatomic) AWELifeShelfCardListItem *itemCopyFrom;
@property (nonatomic) BOOL isImagePreload;
@property (copy, nonatomic) NSString *serviceTagJson;
@property (nonatomic) long long cardDynamicType;
@property (copy, nonatomic) NSDictionary *originData;
@property (retain, nonatomic) NSNumber *isTextBlock;
@property (nonatomic) long long groupCount;
@property (nonatomic) long long groupOrder;
@property (copy, nonatomic) NSDictionary *lynxLogParams;
@property (copy, nonatomic) NSNumber *enterType;
@property (copy, nonatomic) NSNumber *authType;
@property (copy, nonatomic) NSDictionary *lynxSessionParams;
@property (copy, nonatomic) NSDictionary *shelfSessionParams;
@property (nonatomic) BOOL isTopExplainingItem;
@property (copy, nonatomic) NSDictionary *gaiaXCardData;
@property (copy, nonatomic) NSDictionary *tagsSizeData;
@property (nonatomic) double cachedHeight;
@property (copy, nonatomic) NSString *previewJumpUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)clearHasShowedItemsWithShelfKey:(id)a0;
+ (id)cardDataJSONTransformer;
+ (id)saveOriginDataIncardList:(id)a0;
+ (id)hasShowedItemsWithShelfKey:(id)a0;
+ (id)shelfShowItemMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setHasShowed:(BOOL)a0 withShelfKey:(id)a1;
- (BOOL)hasShowedWithShelfKey:(id)a0;
- (void).cxx_destruct;

@end
