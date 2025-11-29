@class MJComposingPanelViewModel, UIViewController, UIView;

@interface MJComposingPanelView : UIView

@property (readonly, nonatomic) MJComposingPanelViewModel *viewModel;
@property (readonly, nonatomic) UIView *contentView;
@property (readonly, nonatomic) UIViewController *contentViewController;
@property (nonatomic) double panelHeight;

- (id)initWithViewModel:(id)a0 contentView:(id)a1;
- (id)initWithViewModel:(id)a0 contentViewController:(id)a1;
- (id)description;
- (void).cxx_destruct;

@end
