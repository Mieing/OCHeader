@interface EcsOrderBulkBuyInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long bulkbuyActivityId;
@property (nonatomic) unsigned long long bulkbuyId;
@property (nonatomic) BOOL canRecommend;
@property (nonatomic) BOOL needCreateBulkbuy;
@property (nonatomic) BOOL isBulkbuyPublic;

+ (void)initialize;

@end
