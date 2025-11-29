@class IESECMallMainViewController;

@interface IESECMallRecommendWrapperViewController : UIViewController

@property (retain, nonatomic) IESECMallMainViewController *mallMainVC;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } currentFrame;

- (void)updateFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidLoad;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;

@end
