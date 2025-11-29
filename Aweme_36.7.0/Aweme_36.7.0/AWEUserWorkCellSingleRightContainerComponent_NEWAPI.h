@class AWERLVirtualView, AWERLVirtualFlexView;

@interface AWEUserWorkCellSingleRightContainerComponent_NEWAPI : AWEUserWorkCellBaseComponent

@property (retain, nonatomic) AWERLVirtualView *titleLabelVirtualView;
@property (retain, nonatomic) AWERLVirtualView *bottomVirtualView;
@property (retain, nonatomic) AWERLVirtualFlexView *containerVirtualView;

- (id)buildVirtualView:(id)a0;
- (id)buildSubComponents;
- (id)buildIconImage;
- (void)configBottomView:(id)a0;
- (void).cxx_destruct;

@end
