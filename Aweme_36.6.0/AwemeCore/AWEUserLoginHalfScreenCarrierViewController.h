@class AWEUserLoginCarrierViewModel, NSString, UIView;

@interface AWEUserLoginHalfScreenCarrierViewController : AWEUserLoginBaseViewController <AWEUserLoginHalfScreenTransitionContextProvider, UIGestureRecognizerDelegate>

@property (retain, nonatomic) AWEUserLoginCarrierViewModel *viewModel;
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
- (id)initWithPhoneModel:(id)a0;
- (void)addGeneralOtherComponentView;
- (void)addWhiteBackView;
- (void)addThemeBackgroundView;
- (void)addThemeHeaderView;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)setupUI;

@end
