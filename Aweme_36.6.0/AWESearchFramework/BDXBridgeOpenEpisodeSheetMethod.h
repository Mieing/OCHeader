@interface BDXBridgeOpenEpisodeSheetMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)trackShowLog:(id)a0;
- (void)openEpisodePage:(id)a0 logExtra:(id)a1;
- (void)trackClickLog:(id)a0;
- (void)trackSwitchTabLog:(id)a0;
- (long long)authType;
- (id)methodName;

@end
