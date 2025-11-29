@class AWEUserLoginBaseViewModel, NSString, UIView;
@protocol AWEUserLoginViewModelSecondaryProtocol;

@interface AWEUserLoginOtherLoginComponent : NSObject <AWEUserLoginOtherLoginViewDelegate, AWEUserUIComponentProtocol>

@property (retain, nonatomic) AWEUserLoginBaseViewModel<AWEUserLoginViewModelSecondaryProtocol> *viewModel;
@property (retain, nonatomic) UIView *otherLoginView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupComponentView;
- (id)initWithLoginViewModel:(id)a0;
- (void)trackLoginGuideWithMethod:(id)a0 clickButton:(id)a1;
- (void)otherLoginViewOtherLoginAction;
- (void).cxx_destruct;
- (unsigned long long)componentType;
- (id)componentView;

@end
