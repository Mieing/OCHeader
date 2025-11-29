@class AWERVInteractiveButtonContainerView, AWERVInteractiveViewModel, MASConstraint;

@interface AWERVInteractiveElement : AWERVVideoInfoBaseElement

@property (retain, nonatomic) AWERVInteractiveButtonContainerView *interactiveView;
@property (retain, nonatomic) MASConstraint *heightConstraint;
@property (retain, nonatomic) AWERVInteractiveViewModel *viewModel;

- (void)addPageContextObserver;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)viewDidLoad;

@end
