@class ACCEditBeautyEffectScorageCOWMap;

@interface ACCEditBeautyEffectStatusScope : ACCEditBeautyEffectScorageScope

@property (readonly, nonatomic) ACCEditBeautyEffectScorageCOWMap *itemMap;
@property (readonly, nonatomic) ACCEditBeautyEffectScorageCOWMap *categoryMap;

- (id)categoryFor:(id)a0;
- (void)setCategory:(id)a0 for:(id)a1;
- (id)itemFor:(id)a0;
- (void)setItem:(id)a0 for:(id)a1;

@end
