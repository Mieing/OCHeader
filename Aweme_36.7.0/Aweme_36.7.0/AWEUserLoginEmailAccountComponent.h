@class AWEUserLoginBaseViewModel, AWEUserLoginInputView, NSString;
@protocol AWEUserLoginViewModelSecondaryProtocol;

@interface AWEUserLoginEmailAccountComponent : NSObject <AWEUserUIComponentProtocol>

@property (retain, nonatomic) AWEUserLoginBaseViewModel<AWEUserLoginViewModelSecondaryProtocol> *viewModel;
@property (retain, nonatomic) AWEUserLoginInputView *emailView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupComponentView;
- (id)initWithLoginViewModel:(id)a0;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)viewWillAppear;
- (unsigned long long)componentType;
- (id)componentView;

@end
