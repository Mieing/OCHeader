@interface BDXBridgeShareRankMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (id)findWebViewController:(id)a0;
- (id)findFirstLynxTableViewInView:(id)a0;
- (BOOL)showSharePanelWithParamModel:(id)a0 image:(id)a1;
- (id)methodName;

@end
