@class NSString;

@interface MMOrderCenterFilteredTabNumberingDataProvider : NSObject <MMOrderCenterTabNumberingDataProvider>

@property (retain, nonatomic) NSString *filteringAppId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFilteringAppId:(id)a0;
- (void)landingPageTabCountItemsWithForce:(BOOL)a0 successBlock:(id /* block */)a1 failBlock:(id /* block */)a2;
- (void).cxx_destruct;

@end
