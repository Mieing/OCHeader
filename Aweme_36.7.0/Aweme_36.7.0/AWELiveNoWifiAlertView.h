@class UILabel, UIButton, UIView;

@interface AWELiveNoWifiAlertView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) UIView *animationView;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) BOOL isStopped;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (copy, nonatomic) id /* block */ cancelBlock;

- (void)actionButtonClicked;
- (void)handleCloseWebViewNoti:(id)a0;
- (void)showAlertWithAnimation;
- (void)_livetrackEvent:(id)a0;
- (id)adapter_getCarrierService;
- (void)dismiss;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)setupUI;
- (void)cancelButtonClicked;

@end
