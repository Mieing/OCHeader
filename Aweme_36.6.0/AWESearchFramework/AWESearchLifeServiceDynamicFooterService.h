@class NSString;

@interface AWESearchLifeServiceDynamicFooterService : AWESearchLifeServiceBaseService <AWESearchLifeServiceDynamicFooterServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)customFeedRecieveRequestWithResponseParams:(id)a0 isLoadMore:(BOOL)a1;
- (void)configFooterWithParams:(id)a0;

@end
