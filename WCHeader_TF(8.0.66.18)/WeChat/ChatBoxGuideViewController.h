@class MMUIButton, NSString, UILabel, UIView, UIButton;

@interface ChatBoxGuideViewController : MMPageSheetBaseViewController

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *animateView;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) MMUIButton *goButton;
@property (retain, nonatomic) NSString *chatroomUsername;

- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)onClickConfirmButton:(id)a0;
- (void)onClickGoButton:(id)a0;
- (void).cxx_destruct;

@end
