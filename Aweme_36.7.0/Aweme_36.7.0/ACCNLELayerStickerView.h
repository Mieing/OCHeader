@class UIView;

@interface ACCNLELayerStickerView : ACCGestureResponsibleStickerView

@property (weak, nonatomic) UIView *superSelectedHintView;
@property (copy, nonatomic) id /* block */ onSelect;
@property (copy, nonatomic) id /* block */ onTap;

- (id)selectedHintView;
- (void)doDeselect;
- (void)doSelect;
- (void).cxx_destruct;
- (void)handleTapGesture:(id)a0;

@end
