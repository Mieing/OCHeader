@class AWERLVirtualView, AWEUserWorkCellVirtualView;

@interface AWEUserWorkCellWaterFallBottomContainerComponent_NEWAPI : AWEUserWorkCellBaseComponent

@property (retain, nonatomic) AWERLVirtualView *waterfallTitleLabelVirtualView;
@property (retain, nonatomic) AWEUserWorkCellVirtualView *waterfallBottomVirtualView;
@property (retain, nonatomic) AWERLVirtualView *containerVirtualView;

+ (Class)aAWEPostWorkViewControllerAdapterClass;

- (id)buildVirtualView:(id)a0;
- (id)buildSubComponents;
- (id)aAWEPostWorkViewControllerAdapter;
- (void)configBottomView:(id)a0;
- (id)__buildChildrenNode;
- (id)buildWaterfallIconImage;
- (void).cxx_destruct;

@end
