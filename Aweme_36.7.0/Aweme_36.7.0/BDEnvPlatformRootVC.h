@class BDEnvPlatformConfigModel, BDEnvGeckoConfigModel, BDEnvPlatformCornerView, NSString, UILabel, UIGestureRecognizer, UIView;
@protocol BDEnvPlatformRootVCDelegate;

@interface BDEnvPlatformRootVC : UIViewController <BDEnvPlatformConfigVCDelegate>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *swimlaneLabel;
@property (retain, nonatomic) UIGestureRecognizer *tapGesture;
@property (retain, nonatomic) BDEnvPlatformConfigModel *model;
@property (retain, nonatomic) BDEnvGeckoConfigModel *geckoModel;
@property (weak, nonatomic) id<BDEnvPlatformRootVCDelegate> delegate;
@property (retain, nonatomic) BDEnvPlatformCornerView *cornerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithModel:(id)a0 GeckoModel:(id)a1;
- (void)reloadViewWithEnvConfigModel:(id)a0 originModel:(id)a1 geckoModel:(id)a2 originGeckoModel:(id)a3;
- (id)envString;
- (void)reloadViewWithEnvConfigModel:(id)a0 originModel:(id)a1;
- (void)updateViewWithModel:(id)a0;
- (void)tap:(id)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)didDisappear;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)show;
- (void)setupView;

@end
