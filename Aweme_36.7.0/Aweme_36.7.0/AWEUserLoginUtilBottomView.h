@class NSArray;

@interface AWEUserLoginUtilBottomView : AWEUserComplexIconWithDescView

@property (copy, nonatomic) NSArray *onShowThirdPlatforms;
@property (nonatomic) BOOL isInEmailPage;
@property (nonatomic) long long type;
@property (copy, nonatomic) id /* block */ otherClickAction;
@property (copy, nonatomic) id /* block */ loginClick;
@property (copy, nonatomic) id /* block */ customAddViewClickAction;

- (id)imageConvergenceMiddleScaleWithName:(id)a0;
- (id)initWithType:(long long)a0 inEmailPage:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 type:(long long)a1 inEmailPage:(BOOL)a2;
- (BOOL)isDomesticUtilBottom;
- (void)addNewBottomViewV2;
- (void)addNewBottomView;
- (void)configModelArray;
- (BOOL)addQrcodeLogin;
- (BOOL)addPhoneSMSLogin;
- (BOOL)showAppleLogin;
- (id)createBottomViewWithIconSize:(double)a0 labelText:(id)a1 tapBlock:(id /* block */)a2;
- (id)initWithInEmailPage:(BOOL)a0;
- (void)setupSubview;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (BOOL)showHelp;

@end
