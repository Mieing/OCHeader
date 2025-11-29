@interface AWEIMBizInfoDataProvider : AWESocialRelationDataProvider <AWEIMBizInfoDataProvider>

- (void)updateWithProfileUser:(id)a0;
- (void)updateCurrentLoginUser:(id)a0;
- (struct WCTPropertyList { struct __list_node_base<WCTProperty, void *> { void *x0; void *x1; } x0; unsigned long long x1; })propertysForFromProfileOther;
- (struct WCTPropertyList { struct __list_node_base<WCTProperty, void *> { void *x0; void *x1; } x0; unsigned long long x1; })propertysForFromSelf;

@end
