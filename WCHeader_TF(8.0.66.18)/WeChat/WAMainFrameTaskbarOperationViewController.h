@class WCDragDeleteBarView, UIView;
@protocol WAMainFrameTaskbarOperationViewControllerDelegate;

@interface WAMainFrameTaskbarOperationViewController : MMUIViewController

@property (retain, nonatomic) WCDragDeleteBarView *deleteBarView;
@property (nonatomic) BOOL showing;
@property (retain, nonatomic) UIView *deleteContainerView;
@property (weak, nonatomic) id<WAMainFrameTaskbarOperationViewControllerDelegate> delegate;
@property (nonatomic) long long option;

- (id)init;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)initSubViews;
- (void)initDeleteContainerView;
- (void)animateToShowDeleteContainerView;
- (BOOL)useBlackStatusbar;
- (void)animateToHideDeleteContainerView:(id /* block */)a0;
- (BOOL)isInOperationArea;
- (long long)highlightDeleteArea:(struct CGPoint { double x0; double x1; })a0;
- (void)unhighlightDeleteArea;
- (void).cxx_destruct;

@end
