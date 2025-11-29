@class UIBarButtonItem, UIViewController, UIView;

@interface WCFinderMultiMenuItemHelper : NSObject

@property (weak, nonatomic) UIViewController *vc;
@property (retain, nonatomic) UIView *container;
@property (nonatomic) double itemPadding;
@property (nonatomic) BOOL fade;
@property (retain, nonatomic) UIBarButtonItem *barItem;

- (id)init:(id)a0;
- (void)addView:(id)a0;
- (void)_updateLayout;
- (void)layout;
- (void)_onSubviewHiddenChange:(id)a0;
- (void).cxx_destruct;

@end
