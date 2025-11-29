@class NSArray, AWEAccountManager, UIView;

@interface AWEAccountBindingTXDDetailViewModel : AWESettingBaseViewModel {
    NSArray *_sectionDataArray;
}

@property (retain, nonatomic) AWEAccountManager *accountManager;
@property (nonatomic) BOOL isUsingXiguaSDK;
@property (weak, nonatomic) UIView *loadingHostView;

- (void)tapUnbindToutiaoXiguaDongchedi;
- (unsigned long long)sdkTypeWillCallFromType:(unsigned long long)a0;
- (void)showUnbindTouXiDongAlert:(unsigned long long)a0;
- (void)showCannotUnbindTouXiDongAlert;
- (void)enterBindPhoneView;
- (void)requestUnbindTXD:(unsigned long long)a0;
- (id)platformNameWithBindType:(unsigned long long)a0;
- (BOOL)enableThirdLoading;
- (void)handleError:(id)a0 platform:(unsigned long long)a1;
- (void)monitorThirdPlatformUnBind:(unsigned long long)a0 error:(id)a1 extraInfo:(id)a2;
- (unsigned long long)__AWEAccountUtilsContext__;
- (id)sectionDataArray;
- (void)setSectionDataArray:(id)a0;
- (void).cxx_destruct;
- (void)refresh;
- (void)viewDidLoad;

@end
