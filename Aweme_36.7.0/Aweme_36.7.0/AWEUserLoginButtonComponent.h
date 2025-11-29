@class AWEUserLoginBaseViewModel, NSString, AWEUserLoginButtonView;
@protocol AWEUserLoginViewModelSecondaryProtocol;

@interface AWEUserLoginButtonComponent : NSObject <AWEUserButtonComponentProtocol>

@property (retain, nonatomic) AWEUserLoginBaseViewModel<AWEUserLoginViewModelSecondaryProtocol> *viewModel;
@property (retain, nonatomic) AWEUserLoginButtonView *buttonView;
@property (nonatomic) long long status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEUserModuleServiceDOUYINDSAdapterClass;
+ (Class)aAWEUserLoginUIComponentThemeAdapterClass;

- (id)buttonModel;
- (void)buttonStatusChanged:(long long)a0;
- (void)setupComponentView;
- (id)initWithLoginViewModel:(id)a0;
- (BOOL)shouldSetupDifferentiatingTheme;
- (id)aAWEUserModuleServiceDOUYINDSAdapter;
- (void)startBinding;
- (void)loginButtonClick;
- (id)aAWEUserLoginUIComponentThemeAdapter;
- (void)trackLoginButtonBreathAnimation;
- (id)halfScreenButtonModel;
- (id)fullScreenButtonModel;
- (BOOL)needForbiddenButtonSweep;
- (id)smsButtonTitle;
- (id)emailCodeButtonTitle;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (unsigned long long)componentType;
- (id)componentView;
- (id)defaultTitle;

@end
