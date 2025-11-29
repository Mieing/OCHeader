@class NSDictionary, AWELifeShelfCardListItemCardDataPOI, AWELifeShelfCardListItemCardDataMinusSaleInfo, AWELifeShelfCardListItemCardDataDisplayControl, NSString, AWELifeShelfCardListItemCardDataLotteryInfo, AWELifeShelfCardListItemBrandLabel, AWELifeShelfCardListItemCardDataBrand, AWELifeShelfCardListItemCardDataFlashSale, AWELifeShelfCardListItemCardDataExecutionPlan, NSArray, NSNumber, AWELifeShelfCardListItemCardDataDrawTicketModel, AWELifeShelfCardListItemCardDataChannelSale, AWELiveShelfCardElementModel;

@interface AWELifeShelfCardListItemCardData : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *rightList;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *actualAmount;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *discount;
@property (retain, nonatomic) AWELifeShelfCardListItemCardDataFlashSale *flashSale;
@property (retain, nonatomic) AWELifeShelfCardListItemCardDataChannelSale *channelSale;
@property (copy, nonatomic) NSString *grouponId;
@property (copy, nonatomic) NSString *listIndex;
@property (copy, nonatomic) NSArray *imageInfo;
@property (copy, nonatomic) NSString *imageTagUrl;
@property (copy, nonatomic) NSArray *ticket;
@property (nonatomic) BOOL needRefresh;
@property (retain, nonatomic) AWELifeShelfCardListItemBrandLabel *brandLabel;
@property (retain, nonatomic) AWELifeShelfCardListItemCardDataExecutionPlan *executionPlan;
@property (copy, nonatomic) NSArray *labelList;
@property (copy, nonatomic) NSString *originAmount;
@property (retain, nonatomic) AWELifeShelfCardListItemCardDataPOI *poi;
@property (retain, nonatomic) AWELifeShelfCardListItemCardDataBrand *brand;
@property (copy, nonatomic) NSString *soldCount;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSNumber *actualAmountNum;
@property (copy, nonatomic) NSNumber *cardType;
@property (copy, nonatomic) NSNumber *categoryId;
@property (copy, nonatomic) NSNumber *sourceType;
@property (copy, nonatomic) NSNumber *stock;
@property (copy, nonatomic) NSNumber *consumptionTimes;
@property (copy, nonatomic) NSString *cardTypeName;
@property (nonatomic) long long productType;
@property (nonatomic) long long productBizLine;
@property (copy, nonatomic) NSNumber *accountId;
@property (copy, nonatomic) NSNumber *soldStartTime;
@property (copy, nonatomic) NSNumber *soldEndTime;
@property (retain, nonatomic) AWELifeShelfCardListItemCardDataDisplayControl *displayControl;
@property (retain, nonatomic) AWELifeShelfCardListItemCardDataMinusSaleInfo *minusSaleInfo;
@property (copy, nonatomic) NSString *salePoint;
@property (retain, nonatomic) AWELifeShelfCardListItemCardDataLotteryInfo *lotteryInfo;
@property (copy, nonatomic) NSDictionary *originData;
@property (retain, nonatomic) AWELifeShelfCardListItemCardDataDrawTicketModel *drawTicketParams;
@property (copy, nonatomic) NSDictionary *caiJingCoupon;
@property (copy, nonatomic) NSDictionary *marketingDisplayInfo;
@property (copy, nonatomic) NSDictionary *marketingDisplaySetting;
@property (retain, nonatomic) AWELiveShelfCardElementModel *element;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)imageInfoJSONTransformer;
+ (id)rawModelFromJsonString:(id)a0;
+ (id)ticketJSONTransformer;
+ (id)rawModelFromJsonDictionary:(id)a0;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
