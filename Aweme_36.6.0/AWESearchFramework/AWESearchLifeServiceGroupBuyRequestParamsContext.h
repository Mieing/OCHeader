@class NSDictionary;

@interface AWESearchLifeServiceGroupBuyRequestParamsContext : AWESearchLifeServiceRequestParamsBaseContext

@property (nonatomic) BOOL isExecuteEmptyQuerySearch;
@property (nonatomic) BOOL isLife7Page;
@property (nonatomic) BOOL isPartShowStatus;
@property (nonatomic) BOOL shouldReadClientHistoryNeedStore;
@property (copy, nonatomic) NSDictionary *commonOnceParams;
@property (copy, nonatomic) NSDictionary *commonPassWithFilterParams;
@property (copy, nonatomic) NSDictionary *commonAllTimeParams;

- (void)updateWithRouterModel:(id)a0;
- (id)initWithRouterModel:(id)a0 extraLogParams:(id)a1;
- (BOOL)isForceInGrouponTab;
- (BOOL)isFromSearchCard;
- (void).cxx_destruct;

@end
