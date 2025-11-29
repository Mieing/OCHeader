@class IESECYataInstanceUtil;

@interface IESECBuyNowSliceAbility : IESECSliceAbility {
    IESECYataInstanceUtil *yataUtil;
}

- (id)yataUtil;
- (id)findViewBySliceView:(id)a0 sliceKey:(id)a1;
- (void)setYataUtil:(id)a0;
- (void).cxx_destruct;

@end
