@class NSString, UIImageView, UILabel, UIView, UIButton;

@interface BDARVVideoAlertView : UIView <BDARVideoAlertViewProtocol>

@property (retain, nonatomic) UIButton *sureAlertButton;
@property (retain, nonatomic) UIButton *cancelAlertButton;
@property (retain, nonatomic) UIButton *closeAlertButton;
@property (retain, nonatomic) UILabel *titleAlertLabel;
@property (retain, nonatomic) UIImageView *alertImageView;
@property (retain, nonatomic) UIView *alertView;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (copy, nonatomic) id /* block */ closeAlertBlock;
@property (nonatomic) unsigned long long status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissFromTopViewController;
- (id)initWithAlertInfo:(id)a0 quitTitle:(id)a1 cancelComplete:(id /* block */)a2 closeComplete:(id /* block */)a3;
- (void)refreshUIWithAlertInfo:(id)a0 quitTitle:(id)a1;
- (void)showWithTopVC:(id)a0 topView:(id)a1;
- (void)cancelClose:(id)a0;
- (void)confirmClose:(id)a0;
- (void)refreshAlertFrame;
- (unsigned long long)statusCode;
- (void).cxx_destruct;
- (BOOL)prefersStatusBarHidden;

@end
