@class NSString, NSDictionary, AWESearchLocationViewController, UIView;

@interface AWEPOIHalfScreenLocationSelectorViewController : UIViewController

@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSString *poiID;
@property (copy, nonatomic) id /* block */ didDismissBlock;
@property (copy, nonatomic) id /* block */ poiIDDidChangBlock;
@property (retain, nonatomic) UIView *markView;
@property (retain, nonatomic) UIView *modalView;
@property (retain, nonatomic) AWESearchLocationViewController *searchLocationVC;
@property (retain, nonatomic) UIView *titleBar;
@property (nonatomic) BOOL animating;

- (void)panAction:(id)a0;
- (id)initWithParams:(id)a0 poiIDDidChangeBlock:(id /* block */)a1 didDismissBlock:(id /* block */)a2;
- (void)createMarkView;
- (void)createModalView;
- (void)createTitleBar;
- (void)createSearchLocationViewController;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })markViewFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })modalViewFrame;
- (void)didSelectedPoi:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })searchLocationVCFrame;
- (void)modalWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)willMoveToParentViewController:(id)a0;
- (void)dismissWithCompletion:(id /* block */)a0;
- (void)viewDidLoad;
- (void)tapAction:(id)a0;

@end
