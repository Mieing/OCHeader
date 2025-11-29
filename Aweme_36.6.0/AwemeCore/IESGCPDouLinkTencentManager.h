@class IESGCPDouLinkTencentApi, NSString, BDXBridgeEventSubscriber, UIView, IESGCPDouLinkTencentContext, IESGCPPBJumpTxInfo;

@interface IESGCPDouLinkTencentManager : NSObject <IESGCPDouLinkTencentBindAtomicAction>

@property (retain, nonatomic) IESGCPDouLinkTencentApi *api;
@property (retain, nonatomic) IESGCPDouLinkTencentContext *context;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) IESGCPPBJumpTxInfo *wechatJumpConfig;
@property (retain, nonatomic) BDXBridgeEventSubscriber *bindResultSubscriber;
@property (retain, nonatomic) UIView *loadingView;
@property (nonatomic) BOOL onlyJumpWechatChannel;
@property (nonatomic) unsigned long long currentBindType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)trackerCommonParams;
- (void)openTencentBindPageFinishedWithType:(unsigned long long)a0 success:(BOOL)a1 failReason:(unsigned long long)a2 context:(id)a3;
- (void)handleBindRoleWithPickerPage;
- (void)handleBindRoleWithOnlyWechatChannel;
- (void)showTencentBindPickerPage;
- (void)notifyJumpBindResultWithSuccess:(BOOL)a0;
- (void)handleOpenPlatformAuthorizeWithCompletion:(id /* block */)a0;
- (void)tryJumpTencentBindPage;
- (void)requestJumpTencentConfigWithCompletion:(id /* block */)a0;
- (void)reportResultTrackerWithProduceType:(id)a0 params:(id)a1;
- (void)setOpenPlatformAuthStatusWithCompletion:(id /* block */)a0;
- (void)subscribeBindResultEvent;
- (id)getFlowAuthBizModelWithAtomicContext:(id)a0;
- (void)unsubscribeBindResultEvent;
- (id)currentBindTypeString;
- (void)bindRoleByPickerWithContext:(id)a0 completion:(id /* block */)a1;
- (void)bindRoleByWechatWithContext:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
