@class AWEUserLoginBaseViewModel, DYPhoneNumberInputView, NSString;
@protocol AWEUserLoginViewModelSecondaryProtocol;

@interface AWEUserLoginPhoneNumberComponent : NSObject <AWEUserUIComponentProtocol>

@property (retain, nonatomic) AWEUserLoginBaseViewModel<AWEUserLoginViewModelSecondaryProtocol> *viewModel;
@property (retain, nonatomic) DYPhoneNumberInputView *phoneView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupComponentView;
- (id)initWithLoginViewModel:(id)a0;
- (void)trackFillFirstPhoneNumber:(id)a0;
- (void)trackClearPhoneNumberFromDeleteTypeString:(id)a0;
- (void).cxx_destruct;
- (void)viewWillAppear;
- (unsigned long long)componentType;
- (id)componentView;

@end
