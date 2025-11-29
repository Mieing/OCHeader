@class NSMutableArray;

@interface IESGCPCGExclusionLayerView : IESGCPCGBaseLayerView

@property (nonatomic) BOOL isInLastItemAction;
@property (retain, nonatomic) NSMutableArray *toBeShowedItemViews;

- (void)showItemView:(id)a0;
- (void)_showLeftItemViews;
- (void).cxx_destruct;

@end
