@class NSDictionary, NSString, CJPayUnifyInstallCertView;

@interface CJPayUnifyInstallCertViewController : CJPayHalfPageBaseViewController <CJPayBaseLoadingProtocol>

@property (retain, nonatomic) CJPayUnifyInstallCertView *mainView;
@property (nonatomic) long long actionType;
@property (copy, nonatomic) NSDictionary *tokenParamDic;
@property (copy, nonatomic) id /* block */ confirmBlock;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (copy, nonatomic) id /* block */ trackerBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)supportStdNaviBar;
- (void)p_trackEvent:(id)a0 params:(id)a1;
- (void)startInstallProcess;
- (void)exitInstallProcess;
- (void)finishInstallProcess;
- (void)updateInstallProgress:(id)a0;
- (id)p_actionTypeMap;
- (id)p_createContentViewModel;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)startLoading;
- (void)stopLoading;
- (void)viewDidLoad;
- (void)back;

@end
