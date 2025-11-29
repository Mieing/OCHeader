@class WATransferParamsModel, NSString, WxaExternalInfo, WAUserAuthorizeLogic;
@protocol WAOpenSDKTransferAuthAdapterDelegate;

@interface WAOpenSDKTransferAuthAdapter : NSObject <WAAuthorizeDelegate>

@property (retain, nonatomic) WAUserAuthorizeLogic *logic;
@property (retain, nonatomic) WATransferParamsModel *model;
@property (retain, nonatomic) WxaExternalInfo *externalInfo;
@property (weak, nonatomic) id<WAOpenSDKTransferAuthAdapterDelegate> delegate;
@property (retain, nonatomic) id userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)start;
- (void)doAuth;
- (void)doConfirmRequest:(BOOL)a0 scope:(id)a1;
- (id)initWithModel:(id)a0;
- (void)onAuthorizeConfirmAccept:(id)a0 resultInfo:(id)a1;
- (void)onAuthorizeConfirmDeny:(id)a0 resultInfo:(id)a1;
- (void)onAuthorizeConfirmEnd:(BOOL)a0;
- (void)onAuthorizeNeedConfirm:(id)a0 cgiResponse:(id)a1;
- (void)onRequestAuthorizeOK;
- (void)onRequestAuthorizeFail:(id)a0;
- (id)getCurrentViewController;
- (void).cxx_destruct;

@end
