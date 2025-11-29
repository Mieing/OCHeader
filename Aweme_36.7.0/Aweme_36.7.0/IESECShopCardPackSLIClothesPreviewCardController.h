@interface IESECShopCardPackSLIClothesPreviewCardController : IESECShopProductsSLICardController {
    unsigned long long _displayState;
}

+ (Class)cellModelClass;
+ (Class)cellClass;

- (id)sliceUniqueID;
- (void)triggerSliceXEvent:(id)a0;
- (void)willDisplayWithSource:(unsigned long long)a0 extraParams:(id)a1;
- (void)didEndDisplayWithSource:(unsigned long long)a0 extraParams:(id)a1;
- (void)triggerDisplayStateUpdate:(unsigned long long)a0;
- (id)dataSourceForItemData:(id)a0;
- (id)sliceItemStatesForItemData:(id)a0;
- (void)triggerSliceItemStatesUpdate;
- (void)triggerTrackShowProduct:(id)a0;
- (void)triggerOpenProductDetail:(id)a0;
- (id)init;
- (void)didSelectItemAtIndex:(long long)a0;

@end
