@class NSString, AWEAwemeModel, UIView, UIViewController;

@interface AWEAwemeDetailFixedButtonManager : NSObject

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *fixedButton;
@property (retain, nonatomic) UIView *buttonView;
@property (nonatomic) long long buttonType;
@property (retain, nonatomic) AWEAwemeModel *currentModel;
@property (weak, nonatomic) UIViewController *viewController;
@property (nonatomic) double lastClickTime;
@property (nonatomic) BOOL isProcessingClick;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) BOOL shouldBtnCenter;

- (void)showPopover;
- (id)updateWithAwemeModel:(id)a0 referString:(id)a1 viewController:(id)a2;
- (long long)determineButtonTypeWithModel:(id)a0 referString:(id)a1;
- (void)configureButtonForType:(long long)a0;
- (void)didShowButtonForType:(long long)a0;
- (void)handleDefaultButtonClick;
- (void)handleButtonClick;
- (BOOL)shouldShowPopover;
- (BOOL)isFixedButtonActuallyVisible;
- (void)recordShowPopover;
- (long long)countForPopoverShow;
- (id)popoverShowCountKey;
- (void).cxx_destruct;
- (id)init;
- (id)initWithContainerView:(id)a0;
- (void)setupViews;

@end
