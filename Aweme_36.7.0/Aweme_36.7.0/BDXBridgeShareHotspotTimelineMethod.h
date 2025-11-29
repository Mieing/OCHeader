@interface BDXBridgeShareHotspotTimelineMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (id)p_snapshotImage:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (long long)authType;
- (id)methodName;

@end
