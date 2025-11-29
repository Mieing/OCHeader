@interface AWECanvasAnimatedInfoEffectDataUtils : NSObject

+ (id)cachedEffectModelWithIdentifier:(id)a0 panel:(id)a1 category:(id)a2;
+ (id)findEffectWithIdentifier:(id)a0 fromEffects:(id)a1;
+ (void)downloadEffectModel:(id)a0 completion:(id /* block */)a1;
+ (void)socialExpressionEffectModelWithPanel:(id)a0 category:(id)a1 effectId:(id)a2 isColdStart:(BOOL)a3 completion:(id /* block */)a4;
+ (void)socialExpressionEffectModelWithPanel:(id)a0 category:(id)a1 effectId:(id)a2 completion:(id /* block */)a3;

@end
