@interface NLELokiResourceProtocol_OC : NLEResourceProtocol_OC

+ (id)PLATFORM_STRING;
+ (id)PARAM_EFFECT_ID;
+ (id)PARAM_RESOURCE_ID;
+ (id)PARAM_PANEL;
+ (BOOL)isLokiResource:(id)a0;
+ (id)instanceFromURS:(id)a0;

- (id)initWithEffectId:(id)a0;
- (id)initWithResourceId:(id)a0 panel:(id)a1;
- (id)initWithURS:(id)a0;
- (id)initWithResourceId:(id)a0 panel:(id)a1 extraParams:(id)a2;
- (id)initWithEffectId:(id)a0 extraParams:(id)a1;

@end
