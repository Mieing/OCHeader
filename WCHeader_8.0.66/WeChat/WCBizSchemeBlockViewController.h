@class NSMutableArray, CheckExternalUrlAntiSpam, UIImageView, WCBizSchemeHandleContext, UILabel, UIView, UIButton;
@protocol WCBizSchemeBlockViewControllerDelegate;

@interface WCBizSchemeBlockViewController : MMUIViewController

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) NSMutableArray *actionButtons;
@property (retain, nonatomic) CheckExternalUrlAntiSpam *antiSpamInfo;
@property (nonatomic) BOOL shouldDismissWhenAppear;
@property (weak, nonatomic) id<WCBizSchemeBlockViewControllerDelegate> delegate;
@property (retain, nonatomic) WCBizSchemeHandleContext *handleContext;

- (id)init;
- (void)endLoadingAndShowAntiSpamInfoView:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (id)navigationBarBackgroundColor;
- (BOOL)shouldInteractivePop;
- (void)configureLayout;
- (void)viewDidLayoutSubviews;
- (void)onButtonClicked:(id)a0;
- (BOOL)DismissMyselfAnimated:(BOOL)a0;
- (void)didEnterBackground;
- (void)didClickBackNavigationItem;
- (void).cxx_destruct;

@end
