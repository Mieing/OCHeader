@class AWEUserLoginCombineViewModel, NSString, UIView;

@interface AWEUserLoginHalfScreenCombineViewController : AWEUserLoginBaseViewController <AWEUserLoginHalfScreenTransitionContextProvider, UIGestureRecognizerDelegate>

@property (retain, nonatomic) AWEUserLoginCombineViewModel *viewModel;
@property (retain, nonatomic) UIView *whiteBackView;
@property (retain, nonatomic) UIView *containerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEUserLoginThemeAdapterClass;

- (id)pageBtm;
- (void)createContainerView;
- (id)aAWEUserLoginThemeAdapter;
- (BOOL)isHalfScreenPage;
- (id)initWithCombineLoginUsers:(id)a0;
- (void)bindUI;
- (void)addGeneralOtherComponentView;
- (void)addWhiteBackView;
- (void)addThemeBackgroundView;
- (void)addThemeHeaderView;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)setupUI;

@end
