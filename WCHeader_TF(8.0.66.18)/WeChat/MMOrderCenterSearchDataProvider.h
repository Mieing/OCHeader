@class NSString;

@interface MMOrderCenterSearchDataProvider : NSObject <MMOrderCenterOrderDataProvider>

@property (retain, nonatomic) NSString *filteringAppId;
@property (nonatomic) BOOL newSearch;
@property (nonatomic) BOOL hasMoreOrders;
@property (nonatomic) unsigned int offset;
@property (retain, nonatomic) NSString *keyword;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithKeyword:(id)a0 filteringAppId:(id)a1;
- (void)getOrdersWithSuccessBlock:(id /* block */)a0 failBlock:(id /* block */)a1 forceRefresh:(BOOL)a2;
- (void)getReplacementOrdersAtPositionalIndex:(unsigned long long)a0 withAttachedIndex:(id)a1 successBlock:(id /* block */)a2 failBlock:(id /* block */)a3;
- (id)noDataPrompt;
- (void).cxx_destruct;

@end
