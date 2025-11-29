@class IESLiveGameOpenPlatformSid, NSString, IESLiveGameOpenPlatformRequestManager, IESLiveGameOpenPlatformDyCloudApi;

@interface IESLiveGameOpenPlatformMessageProxy : NSObject <IESLiveGameOpenPlatformMessageProxy>

@property (retain, nonatomic) IESLiveGameOpenPlatformRequestManager *requestManager;
@property (retain, nonatomic) IESLiveGameOpenPlatformDyCloudApi *dyCloudApi;
@property (retain, nonatomic) IESLiveGameOpenPlatformSid *sid;
@property (readonly, copy, nonatomic) NSString *appId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)xplayGameInterface;
- (void)_jsbLoginFailCallback:(id /* block */)a0;
- (BOOL)_checkUserLoginBeforeInvoke:(id /* block */)a0;
- (id)initWithAppId:(id)a0 diContext:(id)a1;
- (id)_getTrueEventName:(id)a0;
- (void)_failInvokeWithErrorCode:(long long)a0 errorMsg:(id)a1 callback:(id /* block */)a2;
- (void)getPlayerRoleWithParams:(id)a0 IsIntermediate:(BOOL)a1 callback:(id /* block */)a2;
- (void)_requestLoginWithCallback:(id /* block */)a0;
- (void)_callContainerWithRequestParam:(id)a0 callback:(id /* block */)a1;
- (id)imageFromText:(id)a0 fontSize:(double)a1 textColor:(id)a2;
- (void)_invalidParamCallback:(id /* block */)a0;
- (struct CGSize { double x0; double x1; })containerSizeForStyle:(unsigned long long)a0;
- (void)handleEvent:(id)a0 params:(id)a1 callback:(id /* block */)a2;
- (void)configRequestManager:(struct IESLiveRequestManagerConfigStruct { id x0; double x1; id x2; id x3; })a0;
- (void)invoke_log_withParams:(id)a0 callback:(id /* block */)a1;
- (void)invoke_getRoomInfo_withParams:(id)a0 callback:(id /* block */)a1;
- (void)invoke_getUserInfo_withParams:(id)a0 callback:(id /* block */)a1;
- (void)invoke_payDiamonds_withParams:(id)a0 callback:(id /* block */)a1;
- (void)invoke_payDiamondsV3_withParams:(id)a0 callback:(id /* block */)a1;
- (void)invoke_checkIndividualPlayer_withParams:(id)a0 callback:(id /* block */)a1;
- (void)invoke_checkIntermediateIndividualPlayer_withParams:(id)a0 callback:(id /* block */)a1;
- (void)invoke_login_withParams:(id)a0 callback:(id /* block */)a1;
- (void)invoke_callContainer_withParams:(id)a0 callback:(id /* block */)a1;
- (void)invoke_request_withParams:(id)a0 callback:(id /* block */)a1;
- (void)invoke_drawOpenAvatar_withParams:(id)a0 callback:(id /* block */)a1;
- (void)invoke_drawOpenNickName_withParams:(id)a0 callback:(id /* block */)a1;
- (void)invoke_queryMediaState_withParams:(id)a0 callback:(id /* block */)a1;
- (void)invoke_operateMediaState_withParams:(id)a0 callback:(id /* block */)a1;
- (void)invoke_switchScreen_withParams:(id)a0 callback:(id /* block */)a1;
- (void)invoke_getScreenType_withParams:(id)a0 callback:(id /* block */)a1;
- (void)invoke_getUserPropInfo_withParams:(id)a0 callback:(id /* block */)a1;
- (void)invoke_createPropUsageOrder_withParams:(id)a0 callback:(id /* block */)a1;
- (void)invoke_getUserInfoV2_withParams:(id)a0 callback:(id /* block */)a1;
- (void)invoke_openSetting_withParams:(id)a0 callback:(id /* block */)a1;
- (void)invoke_getSetting_withParams:(id)a0 callback:(id /* block */)a1;
- (void)invoke_openXPlayGame_withParams:(id)a0 callback:(id /* block */)a1;
- (void)invoke_closeXPlayGame_withParams:(id)a0 callback:(id /* block */)a1;
- (void)invoke_changeScene_withParams:(id)a0 callback:(id /* block */)a1;
- (void).cxx_destruct;
- (id)styleStringForStyle:(unsigned long long)a0;

@end
