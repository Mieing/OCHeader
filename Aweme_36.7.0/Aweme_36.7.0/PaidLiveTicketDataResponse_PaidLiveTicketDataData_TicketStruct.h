@class NSString, NSMutableArray, PriceInfo;

@interface PaidLiveTicketDataResponse_PaidLiveTicketDataData_TicketStruct : IESLivePBBaseMessage

@property (nonatomic) int ticketType;
@property (copy, nonatomic) NSString *ticketName;
@property (copy, nonatomic) NSString *price;
@property (copy, nonatomic) NSString *fullPrice;
@property (retain, nonatomic) NSMutableArray *tagsArray;
@property (readonly, nonatomic) unsigned long long tagsArray_Count;
@property (nonatomic) long long startSellTime;
@property (nonatomic) long long closingSellTime;
@property (nonatomic) int sellStatus;
@property (nonatomic) int limitCount;
@property (nonatomic) long long claimDdl;
@property (retain, nonatomic) PriceInfo *priceInfo;
@property (nonatomic) BOOL hasPriceInfo;
@property (copy, nonatomic) NSString *skuId;
@property (nonatomic) long long orderItemType;
@property (copy, nonatomic) NSString *orderSkuIdStr;
@property (copy, nonatomic) NSString *orderExtra;

+ (id)descriptor;

@end
