@class NSString, SpuSnapshot, NSMutableArray;

@interface SkuInfo : WXPBGeneratedMessage

@property (retain, nonatomic) SpuSnapshot *spuSnapshot;
@property (nonatomic) unsigned int state;
@property (nonatomic) BOOL canAfterSale;
@property (nonatomic) unsigned int afterSaleTimes;
@property (retain, nonatomic) NSString *afterSaleOrderId;
@property (retain, nonatomic) NSString *stateStr;
@property (retain, nonatomic) NSMutableArray *headLabel;
@property (retain, nonatomic) NSMutableArray *deliveryInfo;
@property (retain, nonatomic) NSMutableArray *featureList;

+ (void)initialize;

@end
