@class UIView, NSArray, IESLLLiveShelfMoreOptionView;

@interface IESLLLiveShelfMoreOptionViewController : UIViewController

@property (retain, nonatomic) IESLLLiveShelfMoreOptionView *moreOptionView;
@property (retain, nonatomic) UIView *tapToCloseView;
@property (retain, nonatomic) NSArray *items;
@property (copy, nonatomic) id /* block */ onClose;

- (void)tapToClose;
- (void)showOptionViewWithOrigin:(struct CGPoint { double x0; double x1; })a0 onView:(id)a1;
- (void).cxx_destruct;
- (id)initWithItems:(id)a0;
- (BOOL)isShowing;
- (void)viewDidLoad;
- (void)setupViews;
- (void)tapGesture:(id)a0;
- (struct CGSize { double x0; double x1; })contentViewSize;
- (void)dismissSelf;

@end
