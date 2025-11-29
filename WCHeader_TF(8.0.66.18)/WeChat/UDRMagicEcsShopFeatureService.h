@interface UDRMagicEcsShopFeatureService : IUdrBizFeature

- (id)getProjectId;
- (void)postProcess:(id)a0;
- (void)haveSpecifiedResource:(id)a0 name:(id)a1 version:(unsigned int)a2 errNo:(int)a3 errCode:(int)a4;
- (void)hasBeenCleared:(id)a0;

@end
