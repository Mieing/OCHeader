@class BDXLynxFoldViewSlotDragLight, BDXLynxTabBarPro;

@interface BDXLynxFoldViewSlotLight : LynxUI

@property (weak, nonatomic) BDXLynxTabBarPro *tabbarPro;
@property (weak, nonatomic) BDXLynxFoldViewSlotDragLight *slotDrag;

+ (void)lynxLazyLoad;

- (BOOL)notifyParent;
- (void).cxx_destruct;
- (void)insertChild:(id)a0 atIndex:(long long)a1;
- (id)createView;

@end
