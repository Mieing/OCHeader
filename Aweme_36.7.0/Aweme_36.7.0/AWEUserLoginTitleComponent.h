@class AWEUserLoginBaseViewModel, AWEUserLoginTitleView, NSString;
@protocol AWEUserLoginViewModelSecondaryProtocol;

@interface AWEUserLoginTitleComponent : NSObject <AWEUserUIComponentProtocol>

@property (retain, nonatomic) AWEUserLoginBaseViewModel<AWEUserLoginViewModelSecondaryProtocol> *viewModel;
@property (retain, nonatomic) AWEUserLoginTitleView *titleView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEUserModuleServiceDOUYINDSAdapterClass;

- (void)setupComponentView;
- (id)initWithLoginViewModel:(id)a0;
- (id)aAWEUserModuleServiceDOUYINDSAdapter;
- (id)guideTitleFont;
- (void).cxx_destruct;
- (id)titleFont;
- (id)subTitleText;
- (unsigned long long)componentType;
- (id)componentView;
- (id)subTitleFont;

@end
