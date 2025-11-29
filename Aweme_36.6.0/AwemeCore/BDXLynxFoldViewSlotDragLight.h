@class BDXLynxTabBarPro;

@interface BDXLynxFoldViewSlotDragLight : LynxUI

@property (nonatomic) BOOL forbidMovable;
@property (weak, nonatomic) BDXLynxTabBarPro *tabbarPro;

+ (void)lynxLazyLoad;
+ (id)__lynx_prop_config__391;

- (BOOL)notifyParent;
- (void)setEnableDrag:(BOOL)a0 requestReset:(BOOL)a1;
- (void).cxx_destruct;
- (void)insertChild:(id)a0 atIndex:(long long)a1;
- (id)createView;

@end
