@class UIButton;
@protocol AWEIMPublishQuickStoryButtonViewDelegate;

@interface AWEIMPublishQuickStoryButtonView : UIView

@property (retain, nonatomic) UIButton *publishButton;
@property (retain, nonatomic) UIButton *gotoEditButton;
@property (weak, nonatomic) id<AWEIMPublishQuickStoryButtonViewDelegate> delegate;

- (void)p_setup;
- (void)p_setupSubviews;
- (void)updatePublishButtonTitle:(id)a0 gotoEditButtonTitle:(id)a1;
- (void)hideGotoEditButton;
- (void)p_updateLayoutWithShowGotoEditButton:(BOOL)a0;
- (void)didClicPublishButton:(id)a0;
- (void)didClickGotoEditButton:(id)a0;
- (void)showGotoEditButton;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
