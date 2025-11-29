@class AWEUserLoginBaseViewModel, AWETrustAccountContainerView, NSString;
@protocol AWEUserLoginViewModelSecondaryProtocol;

@interface AWEUserLoginMultiUserComponent : NSObject <AWEUserUIComponentProtocol>

@property (retain, nonatomic) AWEUserLoginBaseViewModel<AWEUserLoginViewModelSecondaryProtocol> *viewModel;
@property (retain, nonatomic) AWETrustAccountContainerView *multiAccountView;
@property (nonatomic) unsigned long long selectedIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopLoadingWithError:(id)a0;
- (void)setupComponentView;
- (id)initWithLoginViewModel:(id)a0;
- (void)startBinding;
- (void)requestLoginWithIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)startLoading;
- (unsigned long long)componentType;
- (id)componentView;

@end
