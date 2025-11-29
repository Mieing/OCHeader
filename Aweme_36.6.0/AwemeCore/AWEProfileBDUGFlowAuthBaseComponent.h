@class BDUGFlowAuthToken, NSString;

@interface AWEProfileBDUGFlowAuthBaseComponent : AWEProfileBaseComponent <AWEProfileBDUGFlowAuthProtocol>

@property (nonatomic) BOOL hasAppearedOnce;
@property (retain, nonatomic) BDUGFlowAuthToken *authToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onDidSelectTabListIndex:(long long)a0 actionType:(unsigned long long)a1 hasRedDotWhenSwitched:(BOOL)a2 needTrack:(BOOL)a3;
- (void)bindBDUGFlowAuthToken:(id)a0;
- (void)leaveForTokenWithCertID:(id)a0;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)dealloc;

@end
