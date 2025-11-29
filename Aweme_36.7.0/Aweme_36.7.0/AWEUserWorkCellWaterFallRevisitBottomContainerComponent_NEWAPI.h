@class AWERLVirtualView, AWERLVirtualFlexView;

@interface AWEUserWorkCellWaterFallRevisitBottomContainerComponent_NEWAPI : AWEUserWorkCellBaseComponent

@property (retain, nonatomic) AWERLVirtualView *waterfallTitleLabelVirtualView;
@property (retain, nonatomic) AWERLVirtualView *waterfallBottomVirtualView;
@property (retain, nonatomic) AWERLVirtualFlexView *containerVirtualView;

+ (Class)aAWEPostWorkViewControllerAdapterClass;

- (id)buildVirtualView:(id)a0;
- (id)buildSubComponents;
- (id)aAWEPostWorkViewControllerAdapter;
- (void)configBottomView:(id)a0;
- (void).cxx_destruct;

@end
