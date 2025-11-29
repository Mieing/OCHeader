@class NSString;

@interface AWEEcomSearchDynamicTabDataProvider : HTSService <HTSService, AWEEcomSearchDynamicTabProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchDynamicTabsWithParams:(id)a0 completion:(id /* block */)a1;

@end
