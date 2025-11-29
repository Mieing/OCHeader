@class NSArray, IESECLiveAnchorCreateFlashSaleCategoryModel, NSString, IESECLiveAnchorCreateFlashSaleItem, NSDictionary;

@interface IESECLiveAnchorCreateFlashSaleViewModel : NSObject

@property (copy, nonatomic) NSArray *basicItems;
@property (copy, nonatomic) NSArray *requiredItems;
@property (copy, nonatomic) NSArray *allItems;
@property (copy, nonatomic) NSArray *titleGeneratorItems;
@property (copy, nonatomic) NSArray *invalidItemArray;
@property (retain, nonatomic) IESECLiveAnchorCreateFlashSaleItem *priceItem;
@property (retain, nonatomic) IESECLiveAnchorCreateFlashSaleItem *stockItem;
@property (retain, nonatomic) IESECLiveAnchorCreateFlashSaleItem *categoryItem;
@property (retain, nonatomic) IESECLiveAnchorCreateFlashSaleItem *titleItem;
@property (retain, nonatomic) IESECLiveAnchorCreateFlashSaleItem *noteItem;
@property (retain, nonatomic) IESECLiveAnchorCreateFlashSaleItem *stockReductionItem;
@property (retain, nonatomic) IESECLiveAnchorCreateFlashSaleItem *tradingModeItem;
@property (retain, nonatomic) IESECLiveAnchorCreateFlashSaleItem *depositPriceItem;
@property (retain, nonatomic) IESECLiveAnchorCreateFlashSaleItem *hintItem;
@property (retain, nonatomic) IESECLiveAnchorCreateFlashSaleItem *customTimeItem;
@property (retain, nonatomic) IESECLiveAnchorCreateFlashSaleItem *deliveryTimeItem;
@property (retain, nonatomic) IESECLiveAnchorCreateFlashSaleItem *refundItem;
@property (retain, nonatomic) IESECLiveAnchorCreateFlashSaleItem *brandInfoItem;
@property (retain, nonatomic) IESECLiveAnchorCreateFlashSaleItem *privilegeInfoItem;
@property (retain, nonatomic) IESECLiveAnchorCreateFlashSaleCategoryModel *category;
@property (retain, nonatomic) NSString *nickName;
@property (readonly, copy, nonatomic) NSArray *items;
@property (copy, nonatomic) NSDictionary *lastProperties;
@property (readonly, copy, nonatomic) NSString *titleGeneratorPrefix;
@property (readonly, copy, nonatomic) NSString *finalSubmitTitle;
@property (readonly, copy, nonatomic) NSString *titleInvalidateText;
@property (readonly, nonatomic) BOOL privilegeInfoExist;
@property (readonly, copy, nonatomic) NSArray *selectedPrivilegeCodeInfos;
@property (readonly, copy, nonatomic) NSDictionary *enterProperties;
@property (readonly, copy, nonatomic) NSDictionary *reportProperties;
@property (nonatomic) BOOL expand;
@property (nonatomic) BOOL showWarn;

- (unsigned long long)titleMinLength;
- (id)titleConfig;
- (void)setupLocalItems;
- (void)updateWithCategory:(id)a0 selectedCategoryName:(id)a1;
- (BOOL)validateTitleWithTyping:(BOOL)a0 customText:(id)a1 callBack:(id /* block */)a2;
- (id)defaultValueDicForBrandItem:(id)a0;
- (id)requiredItemsWithCategory:(id)a0 titleGenItems:(id)a1 categoryRequiredItems:(id)a2;
- (id)flashSaleUserName;
- (id)customDepositItemsWithDepositModel:(id)a0;
- (void)configDeliveryTimeItemWithTimeRange:(id)a0;
- (BOOL)configRefundItemIfNeededWithRefund:(id)a0;
- (id)privilegeInfoWithModel:(id)a0;
- (BOOL)isTitlePrefixLengthReachTheUpperLimit;
- (id)generateRequestInfoWithCoverURI:(id)a0 roomID:(id)a1 userID:(id)a2 categoryCids:(id)a3;
- (double)cellHeightForItemIndex:(long long)a0;
- (void).cxx_destruct;
- (BOOL)validate;
- (id)init;
- (unsigned long long)titleMaxLength;

@end
