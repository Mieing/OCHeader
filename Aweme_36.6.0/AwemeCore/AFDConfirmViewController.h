@class AFDModalViewHelper, NSDictionary, UIImage, NSString, UIButton;

@interface AFDConfirmViewController : UIViewController <AWEPanelTransitionWithBackground, AFDConfirmViewControllerProtocol>

@property (retain, nonatomic) AFDModalViewHelper *helper;
@property (retain, nonatomic) UIButton *radioBtn;
@property (retain, nonatomic) NSDictionary *trackParams;
@property (retain, nonatomic) UIImage *centerImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ doneBlock;

- (BOOL)wantsDimmingTransitionBackground;
- (id)initWithCenterImage:(id)a0 trackParams:(id)a1;
- (id)initWithCenterImage:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
