@class AWEUserLoginBaseViewModel, AWEUserLoginNickView, NSString;
@protocol AWEUserLoginViewModelSecondaryProtocol;

@interface AWEUserLoginNickComponent : NSObject <AWEUserUIComponentProtocol>

@property (retain, nonatomic) AWEUserLoginBaseViewModel<AWEUserLoginViewModelSecondaryProtocol> *viewModel;
@property (retain, nonatomic) AWEUserLoginNickView *nickView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupComponentView;
- (id)initWithLoginViewModel:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)componentType;
- (id)componentView;

@end
