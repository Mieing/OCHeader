@class BizAcctActivity_ActivityInfo_PrizeInfo_ProductInfo, NSMutableArray;

@interface BizAcctActivity_ActivityInfo_PrizeInfo : WXPBGeneratedMessage

@property (retain, nonatomic) BizAcctActivity_ActivityInfo_PrizeInfo_ProductInfo *productInfo;
@property (nonatomic) unsigned long long prizeCount;
@property (nonatomic) unsigned long long receiveCount;
@property (nonatomic) unsigned long long participateCount;
@property (nonatomic) unsigned long long prizeOrderId;
@property (retain, nonatomic) NSMutableArray *productInfoList;

+ (void)initialize;

@end
