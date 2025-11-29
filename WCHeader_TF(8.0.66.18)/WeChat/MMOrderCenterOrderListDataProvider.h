@class NSString;

@interface MMOrderCenterOrderListDataProvider : NSObject <MMOrderCenterOrderDataProvider>

@property (nonatomic) unsigned int orderType;
@property (nonatomic) unsigned int evaluationStatus;
@property (retain, nonatomic) NSString *lastIndex;
@property (nonatomic) BOOL hasMoreOrders;
@property (nonatomic) BOOL newFetch;
@property (retain, nonatomic) NSString *filteringAppId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)providerWithOrderType:(unsigned int)a0 filteringAppId:(id)a1 evaluationStatus:(unsigned int)a2;
+ (id)providerWithOrderType:(unsigned int)a0 filteringAppId:(id)a1;
+ (id)providerWithOrderType:(unsigned int)a0;

- (id)initWithOrderType:(unsigned int)a0 filteringAppId:(id)a1 evaluationStatus:(unsigned int)a2;
- (id)initWithOrderType:(unsigned int)a0 filteringAppId:(id)a1;
- (id)initWithOrderType:(unsigned int)a0;
- (void)getOrdersWithSuccessBlock:(id /* block */)a0 failBlock:(id /* block */)a1 forceRefresh:(BOOL)a2;
- (void)getReplacementOrdersAtPositionalIndex:(unsigned long long)a0 withAttachedIndex:(id)a1 successBlock:(id /* block */)a2 failBlock:(id /* block */)a3;
- (id)noDataPrompt;
- (void).cxx_destruct;

@end
