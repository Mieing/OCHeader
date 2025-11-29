@class NSString;

@interface AWENearbyBTMModuleService : HTSService <AWENearbyBTMModuleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)areaBtmStringWith:(long long)a0 tabId:(long long)a1;
- (id)btmCdStringWithAreaType:(long long)a0 itemType:(long long)a1 subTabId:(long long)a2 index:(long long)a3;
- (id)btmPageStringWithPageType:(long long)a0 cdStringWithAreaType:(long long)a1 itemType:(long long)a2 subTabId:(long long)a3;
- (id)btmCdStringWithAreaType:(long long)a0 itemType:(long long)a1;
- (id)btmCdStringWithAreaType:(long long)a0 itemType:(long long)a1 index:(long long)a2;
- (id)btmPageStringWithPageType:(long long)a0;

@end
