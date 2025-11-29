@class AWEUserLoginBaseViewModel, AWEUserLoginInputView, NSString;
@protocol AWEUserLoginViewModelSecondaryProtocol;

@interface AWEUserLoginPasswordInputComponent : NSObject <AWEUserUIComponentProtocol>

@property (retain, nonatomic) AWEUserLoginBaseViewModel<AWEUserLoginViewModelSecondaryProtocol> *viewModel;
@property (retain, nonatomic) AWEUserLoginInputView *passwordView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clearInputText;
- (void)setupComponentView;
- (id)initWithLoginViewModel:(id)a0;
- (void)updateEyeViewContentSize:(double)a0;
- (void).cxx_destruct;
- (unsigned long long)componentType;
- (id)componentView;

@end
