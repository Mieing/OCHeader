@class NSString, AWESettingBaseViewModel;

@interface AWELiveSettingViewController : AWESettingBaseViewController <AWERouterViewControllerProtocol> {
    AWESettingBaseViewModel *_viewModel;
}

@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *previousPage;
@property (nonatomic) unsigned long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
