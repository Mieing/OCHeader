@protocol IESECBuyNowUIAbilityDelegate;

@interface IESECBuyNowUIAbility : IESECUiAbility

@property (weak, nonatomic) id<IESECBuyNowUIAbilityDelegate> uiAbilityDelegate;

- (id)getPageStatusValueForKey:(id)a0;
- (struct CGPoint { double x0; double x1; })targetOffsetInScrollView:(id)a0 withTargetView:(id)a1 offset:(struct CGPoint { double x0; double x1; })a2 position:(unsigned long long)a3;
- (id)getBoundingRectWithTargetView:(id)a0;
- (id)initWitnUIAbilityDelegate:(id)a0;
- (void)quitPage;
- (id)getViewByCode:(id)a0;
- (void)scrollToComponentInScrollView:(id)a0 withTargetView:(id)a1 index:(id)a2 offset:(struct CGPoint { double x0; double x1; })a3 position:(unsigned long long)a4 smooth:(BOOL)a5 completion:(id /* block */)a6;
- (void)setLoading:(BOOL)a0;
- (void).cxx_destruct;
- (void)setDialog:(BOOL)a0;

@end
