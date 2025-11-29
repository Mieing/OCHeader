@class NSString, MediaList, ConsultInfoList, SpuSnapshot, ProductHandleInfo, NSMutableArray;

@interface AfterSalesOrder : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *afterSaleOrderId;
@property (retain, nonatomic) NSString *referOrderId;
@property (retain, nonatomic) SpuSnapshot *afterSaleProductInfo;
@property (retain, nonatomic) ProductHandleInfo *productHandleInfo;
@property (retain, nonatomic) NSMutableArray *refundInfo;
@property (nonatomic) unsigned int afterSaleReasonType;
@property (retain, nonatomic) NSString *afterSaleReason;
@property (retain, nonatomic) MediaList *mediaList;
@property (nonatomic) unsigned int afterSaleState;
@property (nonatomic) unsigned long long applyTime;
@property (nonatomic) unsigned long long updateTime;
@property (retain, nonatomic) ConsultInfoList *consultList;

+ (void)initialize;

@end
