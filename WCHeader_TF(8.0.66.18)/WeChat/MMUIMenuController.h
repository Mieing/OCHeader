@class NSString, UIMenu;

@interface MMUIMenuController : NSObject <UIEditMenuInteractionDelegate>

@property (class, readonly, nonatomic) MMUIMenuController *sharedMenuController;

@property (retain, nonatomic) UIMenu *menu;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } targetRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showMenuFromView:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)hideMenu;
- (void)setMenuItems:(id)a0;
- (id)editMenuInteraction:(id)a0 menuForConfiguration:(id)a1 suggestedActions:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })editMenuInteraction:(id)a0 targetRectForConfiguration:(id)a1;
- (void).cxx_destruct;

@end
