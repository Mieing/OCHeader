@class AWEUserLoginBaseViewModel, NSString, UIView;

@interface AWEUserLoginNavigationBarComponent : NSObject <AWEUserLoginNavigationBarDelegate, AWEUserLoginHalfPageNavigationBarDelegate, AWEUserUIComponentProtocol>

@property (retain, nonatomic) UIView *navigationBar;
@property (retain, nonatomic) AWEUserLoginBaseViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)skipAction;
- (id)initWithLoginViewModel:(id)a0;
- (void)helpAction;
- (void)bindUI;
- (void)setupHalfScreenNavigationBar;
- (void)setupFullScreenNavigationBar;
- (void)backAction;
- (void).cxx_destruct;
- (void)closeAction;
- (unsigned long long)componentType;
- (id)componentView;
- (void)setupNavigationBar;

@end
