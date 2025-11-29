@interface IESLiveInteractionPopupViewController : HTSLivePopupBaseViewController

@property (copy, nonatomic) id /* block */ onPopUpClose;
@property (copy, nonatomic) id /* block */ onPopUpOpen;

- (void)onSetupNavBar:(id)a0;
- (void)dismiss;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;

@end
