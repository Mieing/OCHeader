@class AWEUserWorkCellSingleRightContainerComponent_NEWAPI, AWEUserWorkCellSingleLeftContainerComponent_NEWAPI, AWERLVirtualFlexView;

@interface AWEUserWorkCellSingleRootComponent_NEWAPI : AWEUserWorkCellBaseComponent

@property (retain, nonatomic) AWEUserWorkCellSingleLeftContainerComponent_NEWAPI *leftComponent;
@property (retain, nonatomic) AWEUserWorkCellSingleRightContainerComponent_NEWAPI *rightComponent;
@property (retain, nonatomic) AWERLVirtualFlexView *virtualView;

- (id)buildVirtualView:(id)a0;
- (id)buildSubComponents;
- (void).cxx_destruct;

@end
