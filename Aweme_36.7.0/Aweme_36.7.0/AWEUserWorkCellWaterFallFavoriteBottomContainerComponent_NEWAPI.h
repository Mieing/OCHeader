@class AWERLVirtualView, AWERLVirtualFlexView;

@interface AWEUserWorkCellWaterFallFavoriteBottomContainerComponent_NEWAPI : AWEUserWorkCellBaseComponent

@property (retain, nonatomic) AWERLVirtualView *waterfallTitleLabelVirtualView;
@property (retain, nonatomic) AWERLVirtualView *waterfallBottomVirtualView;
@property (retain, nonatomic) AWERLVirtualFlexView *containerVirtualView;

+ (Class)aAWEPostWorkViewControllerAdapterClass;

- (id)buildVirtualView:(id)a0;
- (id)buildSubComponents;
- (id)aAWEPostWorkViewControllerAdapter;
- (void)configBottomView:(id)a0;
- (void)configBottomDiggedBlock:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 context:(id)a1;

@end
