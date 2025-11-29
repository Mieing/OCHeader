@interface AWEPOIReflowPOIComponent : AWEPOIReflowResourceComponent

- (void)setupConfig:(id)a0;
- (id)mergeGrouponAttributeParams:(id)a0 subPageURL:(id)a1;
- (id)getHalfScreenParams:(id)a0 scene:(long long)a1;
- (id)getHalfScreenPerfConfig:(id)a0;
- (id)getHalfScreenTrackParams:(id)a0;
- (id)getHalfScreenGidInfo:(id)a0;
- (id)getHalfScreenCommonTransInfo:(id)a0;
- (id)getHalfScreenExtraLog:(id)a0;
- (id)getLifeExtraLogInfo:(id)a0;
- (id)hostPrefix;
- (BOOL)isLocalLifeReflowSchema:(id)a0;
- (BOOL)switchRouterWithSchema:(id)a0;
- (id)findPoiIDFromSchema:(id)a0;

@end
