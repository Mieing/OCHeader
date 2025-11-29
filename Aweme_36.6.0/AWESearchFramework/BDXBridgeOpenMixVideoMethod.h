@interface BDXBridgeOpenMixVideoMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)videoExperienceTrack:(id)a0;
- (void)videoExperienceTrackTransitionSuccess:(id)a0;
- (id)methodName;

@end
