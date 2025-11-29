@class NSString, AWELivePriceInfo;

@interface AWELiveTicketSKUDetail : AWEBaseApiModel

@property (nonatomic) long long ticketType;
@property (copy, nonatomic) NSString *ticketName;
@property (nonatomic) long long startSellTime;
@property (nonatomic) long long closingSellTime;
@property (nonatomic) long long sellStatus;
@property (retain, nonatomic) AWELivePriceInfo *priceInfo;
@property (nonatomic) BOOL hasPriceInfo;
@property (retain, nonatomic) AWELivePriceInfo *douPriceInfo;
@property (nonatomic) BOOL hasDouPriceInfo;

- (void).cxx_destruct;

@end
