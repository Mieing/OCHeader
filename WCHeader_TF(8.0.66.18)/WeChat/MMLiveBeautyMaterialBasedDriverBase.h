@interface MMLiveBeautyMaterialBasedDriverBase : MMLiveBeautyDriver

@property (nonatomic) long long setupStatus;
@property (nonatomic) long long materialObjectId;

- (void)apply;
- (void)setupForPositiveValue:(double)a0;
- (void)setupForNegativeValue:(double)a0;
- (void)teardown;
- (void)applyWithValue:(double)a0 forObjectId:(long long)a1 inEffectManager:(id)a2;

@end
