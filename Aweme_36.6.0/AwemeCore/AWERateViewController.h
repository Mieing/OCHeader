@class AWERateAlertButton, NSString, AWERateSlider, UILabel, UIView;

@interface AWERateViewController : UIViewController

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *alertView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) AWERateSlider *rateSlider;
@property (retain, nonatomic) UIView *seperatorHorizontalFirst;
@property (retain, nonatomic) UIView *seperatorHorizontalSecond;
@property (retain, nonatomic) UIView *seperatorVertical;
@property (retain, nonatomic) AWERateAlertButton *cancelButton;
@property (retain, nonatomic) AWERateAlertButton *submitButton;
@property (copy, nonatomic) id /* block */ finishedDisplayViewController;
@property (retain, nonatomic) NSString *rateWindowTypeString;

- (void)rateChanged;
- (void)submitFeedback;
- (void)dismissWithCompletion:(id /* block */)a0 hasReplied:(BOOL)a1;
- (void).cxx_destruct;
- (void)submit;
- (void)viewDidLoad;
- (void)cancel;
- (void)setupUI;

@end
