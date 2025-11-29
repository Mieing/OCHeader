@class NSString, NSDictionary, BlockViewController, OpenApiParameter, MMTipsViewController;

@interface BaseOpenSDKHandler : MMObject <MMTipsViewControllerDelegate, BlockViewControllerDelegate, IPreEnterWechatLogicExt>

@property (retain, nonatomic) MMTipsViewController *tipsViewController;
@property (retain, nonatomic) OpenApiParameter *parameter;
@property (retain, nonatomic) BlockViewController *blockView;
@property (retain, nonatomic) NSDictionary *linkMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)startHandler:(id)a0;
- (void)cancelHandler;
- (void)startPermissionValidation;
- (void)realHandleReqAfterermissionValidation;
- (id)getExtTaransLinkParams;
- (void)sendRespAndReturnTo3rdApp:(id)a0 errCode:(int)a1;
- (void)didNeedRefreshToken:(id)a0;
- (void)cancelAllHandleAndReturn3rdApp;
- (BOOL)checkAppOpenId;
- (void)showDiffAccountAlertView;
- (void)onClickTipsBtn:(id)a0 Index:(long long)a1;
- (void)onPreEnterWechatDone;
- (void)onBlockViewControllerReturn;
- (void).cxx_destruct;

@end
