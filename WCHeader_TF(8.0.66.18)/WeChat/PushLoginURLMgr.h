@class NSString, GetA8KeyLogic;

@interface PushLoginURLMgr : MMUserService <IMsgExt, GetA8KeyLogicDelegate, MMKernelExt, MMServiceProtocol> {
    GetA8KeyLogic *_getA8KeyLogic;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowOneClickLogin;
+ (void)clearOneClickLoginInfo;

- (id)init;
- (void)dealloc;
- (id)getGetA8KeyLogic;
- (void)loginFormOtherApp:(id)a0 bundleID:(id)a1;
- (void)loginByBlueToothWithURL:(id)a0;
- (void)OnGetNewXmlMsg:(id)a0 Type:(id)a1 MsgWrap:(id)a2;
- (void)onGetA8KeyOneClickLoginWithURL:(id)a0 extraInfo:(id)a1;
- (void)onManulLogOut;
- (void).cxx_destruct;

@end
