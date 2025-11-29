@class NSString, NSDictionary;

@interface CJPayOuterBaseViewController : CJPayBackStyleBaseViewController

@property (nonatomic) BOOL isFromApp;
@property (nonatomic) BOOL isViewDidAppear;
@property (copy, nonatomic) NSString *jumpBackUrlStr;
@property (copy, nonatomic) NSDictionary *baseTrackParams;
@property (copy, nonatomic) NSDictionary *schemaParams;
@property (copy, nonatomic) NSString *returnURL;

- (void)callState:(BOOL)a0 fromScene:(long long)a1;
- (void)onResponse:(id)a0;
- (void)p_alertUpgradeVersion;
- (void)p_checkValid;
- (void)closeCashierDeskAndJumpBackWithResult:(unsigned long long)a0;
- (id)jumpBackUniversalLinkStr;
- (void)p_createBaseTrackParams:(id)a0;
- (void)alertRequestErrorWithMsg:(id)a0 clickAction:(id /* block */)a1;
- (void)didFinishParamsCheck:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)back;

@end
