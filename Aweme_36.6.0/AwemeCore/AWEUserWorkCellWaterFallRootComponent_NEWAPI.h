@class AWEUserWorkCellBaseComponent, AWEUserWorkCellWaterFallTopContainerComponent_NEWAPI, AWERLVirtualFlexView;

@interface AWEUserWorkCellWaterFallRootComponent_NEWAPI : AWEUserWorkCellBaseComponent

@property (retain, nonatomic) AWEUserWorkCellBaseComponent *bottomComponent;
@property (retain, nonatomic) AWEUserWorkCellWaterFallTopContainerComponent_NEWAPI *topComponent;
@property (retain, nonatomic) AWERLVirtualFlexView *virtualView;

- (id)buildVirtualView:(id)a0;
- (id)buildSubComponents;
- (void).cxx_destruct;

@end
