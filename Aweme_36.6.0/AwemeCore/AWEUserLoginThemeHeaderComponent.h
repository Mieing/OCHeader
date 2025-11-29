@class AWEUserLoginThemeHeaderView, AWEUserLoginBaseViewModel, NSString;

@interface AWEUserLoginThemeHeaderComponent : NSObject <AWEUserUIComponentProtocol>

@property (retain, nonatomic) AWEUserLoginThemeHeaderView *headerView;
@property (readonly, nonatomic) AWEUserLoginBaseViewModel *viewModel;
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
